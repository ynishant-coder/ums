from tkinter import *
from tkinter import messagebox
import sqlite3

class Bank:
    def __init__(self,root):
        self.conn = sqlite3.connect("atm_databse.db", timeout=10000)
        self.root = root
        self.header = Label(self.root,text="K17TS BANK",bg="salmon",fg="white",font="arial 20 bold")
        self.header.pack(fill=X)
        self.frame = Frame(self.root,bg="gray",width=600,height=400)
        self.userlabel =Label(self.frame,text="Enter your account number",bg="salmon",fg="white",font="arial 10 bold")
        self.uentry = Entry(self.frame,bg="honeydew",highlightcolor="white",highlightthickness=2,highlightbackground="white")
        self.plabel = Label(self.frame, text="Enter your 4 digit pin",bg="salmon",fg="white",font="arial 10 bold")
        self.pentry = Entry(self.frame,bg="honeydew",show="*",highlightthickness=2, highlightbackground="white")
        self.button = Button(self.frame,text="OK",cursor="dot",bg="salmon",fg="white",font="arial 10 bold",command=self.verify)
        self.q = Button(self.frame,text="Cancel",cursor="dot",bg="salmon",fg="white",font="arial 10 bold",command = self.root.destroy)
        self.userlabel.place(x=180,y=100,width=180,height=20)
        self.plabel.place(x=180,y=160,width=180,height=20)
        self.uentry.place(x=155,y=130,width=220,height=20)
        self.pentry.place(x=153,y=190,width=220,height=20)
        self.button.place(x=165,y=230,width=90,height=20)
        self.q.place(x=270,y=230,width=90,height=20)
        self.frame.pack()
        
    def database_fetch(self):
        self.acc_list = []
        self.temp = self.conn.execute("select name,pass,acc_no,acc_type,bal from atm where acc_no = ? ",(self.ac,))
        for i in self.temp:
            self.acc_list.append("Name = {}".format(i[0]))
            self.acc_list.append("Account no = {}".format(i[2]))
            self.acc_list.append("Account type = {}".format(i[3]))
            self.ac = i[2]
            self.acc_list.append("Balance = {}".format(i[4]))

    def verify(self):
        ac = False
        self.temp = self.conn.execute("select name,pass,acc_no,acc_type,bal from atm where acc_no = ? ", (self.uentry.get()),)
        for i in self.temp:
            self.ac = i[2]
            if i[2] == self.uentry.get():
                ac = True
            elif i[1] == self.pentry.get():
                ac = True
                m = "{} Login SucessFull".format(i[0])
                self.database_fetch()
                messagebox._show("Login Info", m)
                self.frame.destroy()
                self.MainMenu()
            else:
                ac = True
                m = " Login UnSucessFull ! Wrong Password"
                messagebox._show("Login Info!", m)

    def MainMenu(self):
        self.frame = Frame(self.root,bg="gray",width=800,height=400)
        root.geometry("800x400")
        self.detail = Button(self.frame,text="Account Details",bg="salmon",cursor="dot",fg="white",font="arial 10 bold",command=self.account_detail)
        self.enquiry = Button(self.frame, text="Balance Enquiry",bg="salmon",cursor="dot",fg="white",font="arial 10 bold",command= self.Balance)
        self.deposit = Button(self.frame, text="Deposit Money",bg="salmon",cursor="dot",fg="white",font="arial 10 bold",command=self.deposit_money)
        self.withdrawl = Button(self.frame, text="Withdrawl Money",bg="salmon",cursor="dot",fg="white",font="arial 10 bold",command=self.withdrawl_money)
        self.change = Button(self.frame, text="Pin Change",bg="salmon",cursor="dot",fg="white",font="arial 10 bold",command=self.pin_change)
        self.q = Button(self.frame, text="Quit", bg="salmon",cursor="dot", fg="white", font="arial 10 bold", command=self.root.destroy)
        self.detail.place(x=0,y=120,width=200,height=50)
        self.enquiry.place(x=0, y=215, width=200, height=50)
        self.deposit.place(x=600, y=120, width=200, height=50)
        self.withdrawl.place(x=600, y=215, width=200, height=50)
        self.q.place(x=340, y=340, width=120, height=20)
        self.change.place(x=300,y=260,width=200,height=50)
        self.frame.pack()

    def account_detail(self):
        self.database_fetch()
        text = self.acc_list[0]+"\n"+self.acc_list[1]+"\n"+self.acc_list[2]
        self.label = Label(self.frame,text=text,font="arial 10 bold")
        self.label.place(x=250,y=135,width=300,height=100)

    def Balance(self):
        self.database_fetch()
        self.label = Label(self.frame, text=self.acc_list[3],font="arial 10 bold")
        self.label.place(x=235, y=135, width=300, height=100)

    def deposit_money(self):
        self.money_box = Entry(self.frame,bg="honeydew",highlightthickness=2)
        self.submitButton = Button(self.frame,text="Submit",bg="salmon",cursor="dot",fg="white",font="arial 10 bold")
        self.money_box.place(x=235,y=135,width=200,height=20)
        self.submitButton.place(x=445,y=135,width=55,height=20)
        self.submitButton.bind("<Button-1>",self.deposit_trans)

    def deposit_trans(self,flag):
        self.label = Label(self.frame, text="Transaction Completed !", font="arial 10 bold")
        self.label.place(x=235, y=135, width=300, height=100)
        self.conn.execute("update atm set bal = bal + ? where acc_no = ?",(self.money_box.get(),self.ac))
        self.conn.commit()

    def withdrawl_money(self):
        self.money_box = Entry(self.frame,bg="honeydew",highlightthickness=2)
        self.submitButton = Button(self.frame,text="Submit",cursor="dot",bg="salmon",fg="white",font="arial 10 bold")
        self.money_box.place(x=235,y=135,width=200,height=20)
        self.submitButton.place(x=445,y=135,width=55,height=20)
        self.submitButton.bind("<Button-1>",self.withdrawl_trans)
        

    def withdrawl_trans(self,flag):
        self.label = Label(self.frame, text="Money Withdrawl !", font="arial 10 bold")
        self.label.place(x=235, y=135, width=300, height=100)
        self.conn.execute("update atm set bal = bal - ? where acc_no = ?",(self.money_box.get(),self.ac))
        self.conn.commit()
        
    def pin_change(self):
        self.pin_box = Entry(self.frame,bg="honeydew",show="*",highlightcolor="white",highlightthickness=2,highlightbackground="white")
        self.submitButton = Button(self.frame,text="Submit",bg="salmon",cursor="dot",fg="white",font="arial 10 bold")
        self.pin_box.place(x=235,y=135,width=200,height=20)
        self.submitButton.place(x=445,y=135,width=55,height=20)
        self.submitButton.bind("<Button-1>",self.pin_trans)

    def pin_trans(self,flag):
        self.label = Label(self.frame, text="Successfully Updated!  !",font="arial 10 bold")
        self.label.place(x=235, y=135, width=300, height=100)
        self.conn.execute("update atm set pass = ? where acc_no = ?",(self.pin_box.get(),self.ac))
        self.conn.commit()

root = Tk()
root.title("Sign In")
root.geometry("600x420")
obj = Bank(root)
root.mainloop()


