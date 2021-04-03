#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>
#include<stdlib.h>
using namespace std;
class Scholarship
{
   long value;
   public:
       Scholarship():value(0)
       {
         value=0;
       }
       void calc(int);

};
void Scholarship::calc(int a)
{
    system("cls");
    int l,c;
    char ch;
    int s[2]={0,0};
    // let's make school module
    cout<<"\n\t\t\t\tScholarship"
    <<"\n\n\nWe are going to ask few questions to you?";
    cout<<"\n\nHave you appeared for LPUNEST exam? y/n"
    <<"\n\nEnter Choice: ";
    cin>>ch;
    if(ch=='y')
    {
        system("cls");
        cout<<"\nHow much was your score?"
        <<"\n(1):Top 10% applicants appearing for LPUNEST*"
        <<"\n(2):Next 10% (11% to 20%) applicants appearing for LPUNEST*"
        <<"\n(3):Next 15% (21% to 35%) applicants appearing for LPUNEST*"
        <<"\n(4):90% marks in LPUNEST*"
        <<"\n(5):none"
        <<"\n\nEnter choice: ";
        cin>>c;
        switch(c)
        {
            case 1:
                s[0]=15000;
                break;
            case 2:
                s[0]=10000;
                break;
            case 3:
                s[0]=5000;
                break;
            case 4:
                s[0]=20000;
                break;
            case 5:
                s[0]=0;
                break;
            default:
                cout<<"\nBetter luck next time";
        }
    }
    system("cls");
    cout<<"\nWhat was your Percentage in qualifying exam?"
    <<"\nEnter percentage without % symbol(in integer only) : ";
    cin>>c;
    if(c>=98)
        s[1]=20000;
    else if(c>=90&&c<98)
        s[1]=15000;
    else if(c>=80&&c<90)
        s[1]=10000;
    else if(c>=70&&c<80)
        s[1]=5000;
    else
        s[1]=0;
    l=s[0];
    if(s[1]>l)
        l=s[1];
    if(a==2||a==3||a==4)
    {
        if(l==20000)
            l=75000;
        else if(l==15000)
            l=50000;
        else if(l==10000)
            l=40000;
        else if(l==5000)
            l=30000;
        else
            l=0;
    }
    system("cls");
    cout<<"The applicable Scholarship for you is::   "<<l<<" INR";
}
int main()
{
    int ch;
    Scholarship s;
    cout<<"\t\t\tWelCOme To LPu ScHolarSHip PoRTal\n\n";
    cout<<"\n\n\n\nPress :\n(1):After 10th\n(2):After 12th\n"
    <<"(3):After Graduation\n"
    <<"(4):Lateral Entry\n\nEnter Choice: ";
    cin>>ch;
    switch(ch)
    {
    case 1:
        s.calc(1);
        break;
    case 2:
        s.calc(2);
        break;
    case 3:
        s.calc(3);
        break;
    case 4:
        s.calc(4);
        break;
    default:
        cout<<"Wrong Input";
    }

}
