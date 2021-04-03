#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>
#include<dos.h>
#include<stdlib.h>
#include<windows.h>
using namespace std;
class login
{
    string age;
    string name,country,state,address,mobno;
    double marks,scholarship;
  public:
      //void singin();
      //friend void signin(login);
      void singin(login);
      friend void Disp(login);
      void qualification(login);
      double calc();
      friend class Scholarship;
      void discipline10(login);
      void discipline12(login);
      void disciplinediploma(login);
      void disciplinegrad(login);
      void disciplinepg(login);
      void lequalifications();
      //void disciplinele();
      //void course10();
      //void course12();
      //void coursediploma();
      //void coursegrad();
      //void coursepg();
      void course10(int i);
      void course12(int i);
      void coursediploma(int i);
      void coursegrad(int i);
      void coursepg(int i);
      //void coursele();
      int stream10(login);
      int stream12(login);
      int streamdp(login);
      int streamgrad(login);
      int streampg(login);
      void calcscholar10(int);
      void calcscholar12(int);
      void calcscholardp(int);
      void calcscholargrad(int);
      void calcscholarpg();
};
void login::singin(login a)
//void login::singin()
{
  cout<<"\nEnter Your Details : "
  <<"\nEnter Name : ";
  cin.ignore();
  getline(cin,name);
  cout<<"\nEnter age : ";
  getline(cin,age);
  cout<<"\nEnter State : ";
  //cin.ignore();
  getline(cin,state);
  cout<<"\nEnter Address : ";
  //cin.ignore();
  getline(cin,address);
  /*cout<<"\nEnter previous class percentage : ";
  cin>>marks;*/
  cout<<"\nEnter Country : ";
  //cin.ignore();
  getline(cin,country);
  cout<<"\nEnter Mobile no : ";
  //cin.ignore();
  getline(cin,mobno);
  //qualification(a);
}
//void login::Disp()
void Disp(login a)
{
    cout<<"\nShowing Details : \n";
    cout<<"\nName : "<<a.name<<"\nAge : "<<a.age<<"\nState : "<<a.state<<"\nAddress : "<<a.address
    <<"\nCountry : "<<a.country<<"\nMob No : "<<a.mobno;
}
void login::qualification(login a)
{
    int ch;
    cout<<"\n\n\nChoose option that suits you---- \n(1):Programmes after 10th\n"
    <<"(2):Programmes after 12th\n(3):Programmes after graduation\n"
    <<"(4):Programmes after Diploma\n(5):Lateral Entry Programmes\n"
    <<"(6):Programmes after Post Graduation\n"
    <<"\n\nEnter Choice : ";
    //cin.ignore();
    cin>>ch;
    switch(ch)
    {
    case 1:
        system("cls");
        a.discipline10(a);
        break;
    case 2:
        system("cls");
        a.discipline12(a);
        break;
    case 3:
        system("cls");
        a.disciplinegrad(a);
        break;
    case 4:
        system("cls");
        a.disciplinediploma(a);
        break;
    case 5:
        system("cls");
        system("cls");
        a.disciplinediploma(a);
        break;
    case 6:
        system("cls");
        a.disciplinepg(a);
        break;
    default:
        cout<<"\nBetter Luck next time";
    }
}
void login::discipline10(login a)
{
    int ch;
    cout<<"\nChoose Preferred option---\n(1):Engineering\n"
    <<"(2):Management\n(3):Design\n(4):Hotel Management and Tourism\n"
    <<"(5):Medical Laboratory Sciences\n(6):Architecture"
    <<"\n\nEnter Choice : ";
    cin>>ch;
    switch(ch)
    {
    case 1:
        /*cout<<"\n\n(1):Electronics and Communication Engineering (ECE)"
    <<"\n(2):Electrical Engineering (EE)"
    <<"\n(3):Computer Science and Engineering (CSE)"
    <<"\n(4):Mechanical Engineering (ME)"
    <<"\n(5):Automobile Engineering (AE)"
    <<"\n(6):Civil Engineering (CE)";*/
    a.stream10(a);
        break;
    case 2:
        a.course10(7);
        break;
    case 3:
        a.course10(8);
        break;
    case 4:
        a.course10(9);
        break;
    case 5:
        a.course10(10);
        break;
    case 6:
        a.course10(11);
        break;
    default:
        cout<<"\nBetter luck next time";
    }
}
void login::discipline12(login a)
{
    int ch;
    cout<<"\nChoose Preferred option---\n(1):Engineering\t\t\t\t"
    <<setw(20)<<"(2):Management\n(3):Design\t\t\t\t"<<setw(20)<<"(4):Hotel Management and Tourism\n"
    <<"(5):Fashion Design\t\t\t"<<setw(20)<<"(6):Medical Laboratory Sciences\n(7):Architecture\t\t\t"<<setw(18)<<"(8):Biotechnology\n"
    <<"(9):Computer Applications and IT\t(10):Geography\n(11):Arts\t\t\t\t"<<setw(20)<<"(12):Mathematics\n(13):Law\t\t\t\t"
    <<setw(20)<<"(14):Physics\n(15):English and Foreign Language\t(16):Multimedia and Animation\n(17):History\t\t\t\t"
    <<setw(20)<<"(18):Economics\n(19):Commerce\t\t\t\t"<<setw(16)<<"(20):Agriculture"
    <<"\n\nEnter Choice : ";
    cin>>ch;
    switch(ch)
    {
    case 1:
        a.stream12(a);
        break;
    case 2:
        a.course12(16);
        break;
    case 3:
        a.course12(17);
        break;
    case 4:
        a.course12(18);
        break;
    case 5:
        a.course12(19);
        break;
    case 6:
        a.course12(20);
        break;
    case 7:
        a.course12(21);
        break;
    case 8:
        a.course12(22);
        break;
    case 9:
        a.course12(23);
        break;
    case 10:
        a.course12(24);
        break;
    case 11:
        a.course12(25);
        break;
    case 12:
        a.course12(26);
        break;
    case 13:
        a.course12(27);
        break;
    case 14:
        a.course12(28);
        break;
    case 15:
        a.course12(29);
        break;
    case 16:
        a.course12(30);
        break;
    case 17:
        a.course12(31);
        break;
    case 18:
        a.course12(32);
        break;
    case 19:
        a.course12(33);
        break;
    case 20:
        a.course12(34);
        break;
    default:
        cout<<"\nBetter luck next time";
    }
}
void login::disciplinediploma(login a)
{
    int ch;
    cout<<"\nChoose Preferred option---\n(1):Engineering\t\t\t\t"
    <<setw(20)<<"(2):Management\n(3):Design\t\t\t\t"<<setw(20)<<"(4):Hotel Management and Tourism\n"
    <<"(5):Fashion Design\t\t\t"<<setw(20)<<"(6):Medical Laboratory Sciences\n(7):Architecture\t\t\t"<<setw(18)<<"(8):Computer Applications and IT\n"
    <<"(9):Arts\t\t\t\t"<<setw(20)<<"(10):Mathematics\n(11):Commerce"
    <<"\n\nEnter Choice : ";
    cin>>ch;
    switch(ch)
    {
    case 1:
        a.streamdp(a);
        break;
    case 2:
        a.coursediploma(16);
        break;
    case 3:
        a.coursediploma(17);
        break;
    case 4:
        a.coursediploma(18);
        break;
    case 5:
        a.coursediploma(19);
        break;
    case 6:
        a.coursediploma(20);
        break;
    case 7:
        a.coursediploma(21);
        break;
    case 8:
        a.coursediploma(22);
        break;
    case 9:
        a.coursediploma(23);
        break;
    case 10:
        a.coursediploma(24);
        break;
    case 11:
        a.coursediploma(25);
        break;
    default:
        cout<<"\nBetter luck next time";
    }
}
void login::disciplinegrad(login a)
{
    int ch;
    cout<<"\nChoose Preferred option---\n(1):Engineering\t\t\t\t"
    <<setw(20)<<"(2):Management\n(3):Design\t\t\t\t"<<setw(20)<<"(4):Hotel Management and Tourism\n"
    <<"(5):Fashion Design\t\t\t"<<setw(20)<<"(6):Medical Laboratory Sciences\n(7):Architecture\t\t\t"<<setw(18)<<"(8):Biotechnology\n"
    <<"(9):Computer Applications and IT\t(10):Geography\n(11):Arts\t\t\t\t"<<setw(20)<<"(12):Mathematics\n(13):Law\t\t\t\t"
    <<setw(20)<<"(14):Physics\n(15):English and Foreign Language\t(16):Multimedia and Animation\n(17):History\t\t\t\t"
    <<setw(20)<<"(18):Economics\n(19):Commerce\t\t\t\t"<<setw(16)<<"(20):Agriculture"
    <<"\n\nEnter Choice : ";
    cin>>ch;
    switch(ch)
    {
    case 1:
        a.streamgrad(a);
        break;
    case 2:
        a.coursegrad(8);
        break;
    case 3:
        a.coursegrad(9);
        break;
    case 4:
        a.coursegrad(10);
        break;
    case 5:
        a.coursegrad(11);
        break;
    case 6:
        a.coursegrad(12);
        break;
    case 7:
        a.coursegrad(13);
        break;
    case 8:
        a.coursegrad(14);
        break;
    case 9:
        a.coursegrad(15);
        break;
    case 10:
        a.coursegrad(16);
        break;
    case 11:
        a.coursegrad(17);
        break;
    case 12:
        a.coursegrad(18);
        break;
    case 13:
        a.coursegrad(19);
        break;
    case 14:
        a.coursegrad(20);
        break;
    case 15:
        a.coursegrad(21);
        break;
    case 16:
        a.coursegrad(22);
        break;
    case 17:
        a.coursegrad(23);
        break;
    case 18:
        a.coursegrad(24);
        break;
    case 19:
        a.coursegrad(25);
        break;
    case 20:
        a.coursegrad(26);
        break;
    default:
        cout<<"\nBetter luck next time";
    }
}
void login::disciplinepg(login a)
{
    int ch;
    cout<<"\nChoose Preferred option---\n(1):Engineering\t\t\t\t"
    <<setw(20)<<"(2):Management\n(3):Design\t\t\t\t"<<setw(20)<<"(4):Hotel Management and Tourism\n"
    <<"(5):Fashion Design\t\t\t"<<setw(20)<<"(6):Medical Laboratory Sciences\n(7):Architecture\t\t\t"<<setw(18)<<"(8):Biotechnology\n"
    <<"(9):Computer Applications and IT\t(10):Geography\n(11):Arts\t\t\t\t"<<setw(20)<<"(12):Mathematics\n(13):Law\t\t\t\t"
    <<setw(20)<<"(14):Physics\n(15):English and Foreign Language\t(16):Multimedia and Animation\n(17):History\t\t\t\t"
    <<setw(20)<<"(18):Economics\n(19):Commerce\t\t\t\t"<<setw(16)<<"(20):Agriculture"
    <<"\n\nEnter Choice : ";
    cin>>ch;
    switch(ch)
    {
    case 1:
        a.streampg(a);
        break;
    case 2:
        a.coursepg(8);
        break;
    case 3:
        a.coursepg(9);
        break;
    case 4:
        a.coursepg(10);
        break;
    case 5:
        a.coursepg(11);
        break;
    case 6:
        a.coursepg(12);
        break;
    case 7:
        a.coursepg(13);
        break;
    case 8:
        a.coursepg(14);
        break;
    case 9:
        a.coursepg(15);
        break;
    case 10:
        a.coursepg(16);
        break;
    case 11:
        a.coursepg(17);
        break;
    case 12:
        a.coursepg(18);
        break;
    case 13:
        a.coursepg(19);
        break;
    case 14:
        a.coursepg(20);
        break;
    case 15:
        a.coursepg(21);
        break;
    case 16:
        a.coursepg(22);
        break;
    case 17:
        a.coursepg(23);
        break;
    case 18:
        a.coursepg(24);
        break;
    case 19:
        a.coursepg(25);
        break;
    case 20:
        a.coursepg(26);
        break;
    default:
        cout<<"\nBetter luck next time";
    }
}
int login::streampg(login a)
{
    system("cls");
    int ch;
    cout<<"\n\n(1):Electronics and Communication Engineering (ECE)"
    <<"\n(2):Electrical and Electronics Engineering (EEE)"
    <<"\n(3):Computer Science and Engineering (CSE)"
    <<"\n(4):Mechanical Engineering (ME)"
    <<"\n(5):Civil Engineering (CE)"
    <<"\n(6):Molecular Biology and Genetic Engineering (MBGE)"
    <<"\n(7):Chemical Engineering (CHE)"

    <<"\n\nEnter Choice : ";
    cin>>ch;
    switch(ch)
    {
    case 1:
        a.coursepg(ch);
        //return ch;
        break;
    case 2:
        a.coursepg(ch);
       // return ch;
        break;
    case 3:
        a.coursepg(ch);
       // return ch;
        break;
    case 4:
        a.coursepg(ch);
       // return ch;
        break;
    case 5:
        a.coursepg(ch);
       // return ch;
        break;
    case 6:
        a.coursepg(ch);
       // return ch;
        break;
    case 7:
        a.coursepg(ch);
        //return ch;
        break;
    default:
        cout<<"\nBetter luck next time";
    }
}
void login::coursepg(int i)
{
    string s;
    system("cls");
    int ch,chi;
    ifstream fin;
    switch(i)
    {
    case 1:
        cout<<"\n\n(1):Ph.D (Electronics and Communication Engineering) [Full Time] 3 yrs"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tElectronics and Communication Engineering (ECE) (Engg.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("EnggDetails.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggDetails.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("pgfee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"pgfee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholargrad(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 2:
        cout<<"\n\n(1):Ph.D (AE) 3 yrs"
        //<<"\n(2):B.Tech. (Hons.) (ECE) 4 yrs(8 semester)"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tAutomobile Engineering (AE) (Engg.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("EnggDetails.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggDetails.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("pgfee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"pgfee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholargrad(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
            default:
                cout<<"\nBetterr Luck next time";
        }

        break;
    case 3:
        cout<<"\n\n(1):Ph.D (CSE) 3 yrs"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tComputer Science and Engineering (CSE) (Engg.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("EnggDetails.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggDetails.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("pgfee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"pgfee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholargrad(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;

            default:
                cout<<"\nSorry! You are wrong";
        }
        break;
    case 4:
        cout<<"\n\n(1):Ph.D (ME) 3 yrs"
        //<<"\n(2):B.Tech. (Hons.) (ECE) 4 yrs(8 semester)"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tMechanical Engineering (ME) (Engg.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("EnggDetails.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggDetails.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("pgfee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"pgfee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholargrad(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
            default:
                cout<<"\nBetterr Luck next time";
        }
        break;
    case 5:
        cout<<"\n\n(1):Ph.D (AE) 3 yrs"
        //<<"\n(2):B.Tech. (Hons.) (ECE) 4 yrs(8 semester)"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tAutomobile Engineering (AE) (Engg.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("EnggDetails.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggDetails.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("pgfee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"pgfee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholargrad(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
            default:
                cout<<"\nBetterr Luck next time";
        }
        break;
    case 6:
        cout<<"\n\n(1):Ph.D (CE) 3 yrs"
        //<<"\n(2):B.Tech. (Hons.) (ECE) 4 yrs(8 semester)"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tCivil Engineering (CE) (Engg.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("EnggDetails.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggDetails.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("pgfee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"pgfee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholargrad(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
            default:
                cout<<"\nBetterr Luck next time";
        }
        break;
    case 7:
        cout<<"\n\n(1):Ph.D (EE) 3 yrs"
        //<<"\n(2):B.Tech. (Hons.) (ECE) 4 yrs(8 semester)"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tElectrical Engineering (EE) (Engg.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("EnggDetails.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggDetails.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("pgfee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"pgfee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholargrad(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
            default:
                cout<<"\nBetterr Luck next time";
        }
        break;
    case 8:
        cout<<"\n\n(1): Ph.D. (Management) 3 yrs."
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tMASTER Of BUSINESS ADMINISTRATION\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:

                  cout<<"\nThis programme trains students in key business principles and helps them master management\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 50% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("mbafee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"mbafee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholargrad(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 9:
        cout<<"\n\n(1): M DEsign 2 yrs.(4 Semesters)"
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tMaster OF DESIGN IN FASHION\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:

                  cout<<"\nThis programme trains students in key business principles and helps them master management\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 50% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFeeht.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFeeht.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholargrad(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 10:
        cout<<"\n\n(1): Ph.D IN HOTEL MANAGEMENT 3 yrs."
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tM.SC IN HOTEL MANAGEMENT\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:

                  cout<<"\nThis programme trains students in key business principles and helps them master management\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 50% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFeeht.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFeeht.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholargrad(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 11:
        cout<<"\n\n(1): Ph.D OF DESIGN IN FASHION 3 yrs."
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tMASTER OF DESIGN IN FASHION\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:

                  cout<<"\nThis programme trains students in key business principles and helps them master management\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 50% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFeeht.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFeeht.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholargrad(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 12:
        cout<<"\n\n(1): Ph.D - MEDICAL LAB TECHNOLOGY 3 yrs.(6 Semesters)"
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tM.SC. - MEDICAL LAB TECHNOLOGY\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                  cout<<"\nThis programme trains students in key business principles and helps them master management\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 50% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholargrad(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 13:
        cout<<"\n\n(1): M.ARCH 3yrs.(6 Semesters)"
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tM.ARCH\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                  cout<<"\nC.O.A approved professional degree offering elite architectural education nourishing students with designing and software\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 60% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("EnggFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholargrad(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 14:
        cout<<"\n\n(1): Ph.D in BIOTECHNOLOGY 3yrs.(6 Semesters)"
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tPh.D OF SCIENCE BIOTECHNOLOGY\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                  cout<<"\nConstructing strong basic foundation in concepts of biological sciences and inculcating the\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 60% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholargrad(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 15:
        cout<<"\n\n(1): Ph.D - OF COMPUTER APPLICATION 3yrs."
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tPh.D OF COMPUTER APPLICATION\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                  cout<<"\nConstructing strong basic foundation in concepts of computer sciences and inculcating the\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 60% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholargrad(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 16:
        cout<<"\n\n(1): Ph.D -  OF ARTS 3yrs."
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tPh.D -  ARTS\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                  cout<<"\nConstructing strong basic foundation in concepts of geographical and inculcating the\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 60% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholargrad(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 17:
        cout<<"\n\n(1): Ph.D -  OF ARTS 3yrs."
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tPh.D -  OF ARTS\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                  cout<<"\nConstructing strong basic foundation in concepts of arts(humanities) and inculcating the\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 60% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholargrad(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 18:
        cout<<"\n\n(1): Ph.D MATHEMATICS 3yrs."
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tPh.D MATHEMATICS\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                  cout<<"\nConstructing strong basic foundation in concepts of mathematics and inculcating the\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 60% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholargrad(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 19:
        cout<<"\n\n(1): Ph.D LAW 3yrs."
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tPh.D LAW\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                  cout<<"\nConstructing strong basic foundation in concepts of law and inculcating the\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 60% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholargrad(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 20:
        cout<<"\n\n(1): Ph.D PHYSICS 3yrs."
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tPh.D PHYSICS\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                  cout<<"\nConstructing strong basic foundation in concepts of physics and inculcating the\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 60% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholargrad(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 21:
        cout<<"\n\n(1): Ph.D - ARTS 3yrs."
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tPh.D - ARTS\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                  cout<<"\nConstructing strong basic foundation in concepts of english and foreign language and inculcating the\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 60% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholargrad(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 22:
        cout<<"\n\n(1): Ph.D IN DESIGN - MULTIMEDIA 3yrs."
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tPh.D IN DESIGN - MULTIMEDIA\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                  cout<<"\nConstructing strong basic foundation in concepts of multimedia and inculcating the\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 60% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholargrad(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 23:
        cout<<"\n\n(1): Ph.D- ARTS 3yrs."
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tPh.D -  ARTS\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                  cout<<"\nConstructing strong basic foundation in concepts of history and inculcating the\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 60% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholargrad(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 24:
        cout<<"\n\n(1): Ph.D IN ECONOMICS 3yrs."
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tPh.D IN ECONOMICS\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                  cout<<"\nConstructing strong basic foundation in concepts of economics and inculcating the\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 60% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholargrad(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 25:
        cout<<"\n\n(1): Ph.D COMMERECE 3yrs."
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tPh.D COMMERECE\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                  cout<<"\nConstructing strong basic foundation in concepts of business and inculcating the\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 60% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholargrad(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 26:
        cout<<"\n\n(1): Ph.D AGRICULTURE 3yrs."
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tPh.D AGRICULTURE\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                  cout<<"\nConstructing strong basic foundation in concepts of agriculture and inculcating the\n"
                  <<" skills required at field level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 60% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFeeht.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFeeht.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholargrad(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    default:
        cout<<"\nBetter Luck next Time";
    }

}
int login::streamgrad(login a)
{
    system("cls");
    int ch;
    cout<<"\n\n(1):Electronics and Communication Engineering (ECE)"
    <<"\n(2):Automobile Engineering (AE)"
    <<"\n(3):Computer Science and Engineering (CSE)"
    <<"\n(4):Mechanical Engineering (ME)"
    <<"\n(5):Civil Engineering (CE)"
    <<"\n(6):Molecular Biology and Genetic Engineering (MBGE)"
    <<"\n(7):Chemical Engineering (CHE)"

    <<"\n\nEnter Choice : ";
    cin>>ch;
    switch(ch)
    {
    case 1:
        a.coursegrad(ch);
        //return ch;
        break;
    case 2:
        a.coursegrad(ch);
       // return ch;
        break;
    case 3:
        a.coursegrad(ch);
       // return ch;
        break;
    case 4:
        a.coursegrad(ch);
       // return ch;
        break;
    case 5:
        a.coursegrad(ch);
       // return ch;
        break;
    case 6:
        a.coursegrad(ch);
       // return ch;
        break;
    case 7:
        a.coursegrad(ch);
        //return ch;
        break;
    default:
        cout<<"\nBetter luck next time";
    }
}
void login::coursegrad(int i)
{
    string s;
    system("cls");
    int ch,chi;
    ifstream fin;
    switch(i)
    {
    case 1:
        cout<<"\n\n(1):M.Tech. (Electronics and Communication Engineering) [Full Time] 2 yrs(4 semester)"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tElectronics and Communication Engineering (ECE) (Engg.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("EnggDetails.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggDetails.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("pgfee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"pgfee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholargrad(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 2:
        cout<<"\n\n(1):M.Tech. (AE) 2 yrs(4 semester)"
        //<<"\n(2):B.Tech. (Hons.) (ECE) 4 yrs(8 semester)"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tAutomobile Engineering (AE) (Engg.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("EnggDetails.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggDetails.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("pgfee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"pgfee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholargrad(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
            default:
                cout<<"\nBetterr Luck next time";
        }

        break;
    case 3:
        cout<<"\n\n(1):M.Tech. (CSE) 2 yrs(4 semester)"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tComputer Science and Engineering (CSE) (Engg.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("EnggDetails.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggDetails.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("pgfee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"pgfee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholargrad(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;

            default:
                cout<<"\nSorry! You are wrong";
        }
        break;
    case 4:
        cout<<"\n\n(1):M.Tech. (ME) 2 yrs(4 semester)"
        //<<"\n(2):B.Tech. (Hons.) (ECE) 4 yrs(8 semester)"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tMechanical Engineering (ME) (Engg.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("EnggDetails.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggDetails.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("pgfee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"pgfee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholargrad(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
            default:
                cout<<"\nBetterr Luck next time";
        }
        break;
    case 5:
        cout<<"\n\n(1):M.Tech. (AE) 2 yrs(4 semester)"
        //<<"\n(2):B.Tech. (Hons.) (ECE) 4 yrs(8 semester)"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tAutomobile Engineering (AE) (Engg.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("EnggDetails.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggDetails.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("pgfee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"pgfee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholargrad(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
            default:
                cout<<"\nBetterr Luck next time";
        }
        break;
    case 6:
        cout<<"\n\n(1):M.Tech. (CE) 2 yrs(4 semester)"
        //<<"\n(2):B.Tech. (Hons.) (ECE) 4 yrs(8 semester)"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tCivil Engineering (CE) (Engg.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("EnggDetails.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggDetails.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("pgfee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"pgfee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholargrad(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
            default:
                cout<<"\nBetterr Luck next time";
        }
        break;
    case 7:
        cout<<"\n\n(1):M.Tech. (EE) 2 yrs(4 semester)"
        //<<"\n(2):B.Tech. (Hons.) (ECE) 4 yrs(8 semester)"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tElectrical Engineering (EE) (Engg.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("EnggDetails.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggDetails.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("pgfee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"pgfee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholargrad(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
            default:
                cout<<"\nBetterr Luck next time";
        }
        break;
    case 8:
        cout<<"\n\n(1): MBA 2 yrs.(4 Semesters)"
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tMASTER Of BUSINESS ADMINISTRATION\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:

                  cout<<"\nThis programme trains students in key business principles and helps them master management\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 50% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("mbafee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"mbafee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholargrad(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 9:
        cout<<"\n\n(1): M DEsign 2 yrs.(4 Semesters)"
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tMaster OF DESIGN IN FASHION\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:

                  cout<<"\nThis programme trains students in key business principles and helps them master management\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 50% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFeeht.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFeeht.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholargrad(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 10:
        cout<<"\n\n(1): M.SC IN HOTEL MANAGEMENT 4 yrs.(8 Semesters)"
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tM.SC IN HOTEL MANAGEMENT\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:

                  cout<<"\nThis programme trains students in key business principles and helps them master management\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 50% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFeeht.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFeeht.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholargrad(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 11:
        cout<<"\n\n(1): MASTER OF DESIGN IN FASHION 2 yrs.(4 Semesters)"
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tMASTER OF DESIGN IN FASHION\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:

                  cout<<"\nThis programme trains students in key business principles and helps them master management\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 50% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFeeht.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFeeht.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholargrad(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 12:
        cout<<"\n\n(1): M.SC. - MEDICAL LAB TECHNOLOGY 3 yrs.(6 Semesters)"
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tM.SC. - MEDICAL LAB TECHNOLOGY\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                  cout<<"\nThis programme trains students in key business principles and helps them master management\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 50% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholargrad(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 13:
        cout<<"\n\n(1): M.ARCH 3yrs.(6 Semesters)"
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tM.ARCH\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                  cout<<"\nC.O.A approved professional degree offering elite architectural education nourishing students with designing and software\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 60% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("EnggFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholargrad(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 14:
        cout<<"\n\n(1): MASTER OF SCIENCE BIOTECHNOLOGY 3yrs.(6 Semesters)"
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tMASTER OF SCIENCE BIOTECHNOLOGY\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                  cout<<"\nConstructing strong basic foundation in concepts of biological sciences and inculcating the\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 60% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholargrad(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 15:
        cout<<"\n\n(1): MCA -MASTER OF COMPUTER APPLICATION 2yrs.(4 Semesters)"
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tMCA -MASTER OF COMPUTER APPLICATION\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                  cout<<"\nConstructing strong basic foundation in concepts of computer sciences and inculcating the\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 60% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholargrad(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 16:
        cout<<"\n\n(1): M.A. (HONS.) - MASTER OF ARTS 2yrs.(4 Semesters)"
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tM.A. (HONS.) - MASTER OF ARTS\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                  cout<<"\nConstructing strong basic foundation in concepts of geographical and inculcating the\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 60% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholargrad(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 17:
        cout<<"\n\n(1): M.A.- MASTER OF ARTS 2yrs.(4 Semesters)"
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tM.A.- MASTER OF ARTS\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                  cout<<"\nConstructing strong basic foundation in concepts of arts(humanities) and inculcating the\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 60% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholargrad(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 18:
        cout<<"\n\n(1): MASTER OF SCIENCE (HONS.) MATHEMATICS 2yrs.(4 Semesters)"
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tMASTER OF SCIENCE (HONS.) MATHEMATICS\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                  cout<<"\nConstructing strong basic foundation in concepts of mathematics and inculcating the\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 60% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholargrad(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 19:
        cout<<"\n\n(1): LL.M, LL.B. (HONS.) 1yrs.(2 Semesters)"
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tLL.M., LL.B. (HONS.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                  cout<<"\nConstructing strong basic foundation in concepts of law and inculcating the\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 60% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholargrad(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 20:
        cout<<"\n\n(1): MASTER OF SCIENCE (HONS.) PHYSICS 2yrs.(4 Semesters)"
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tMASTER OF SCIENCE (HONS.) PHYSICS\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                  cout<<"\nConstructing strong basic foundation in concepts of physics and inculcating the\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 60% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholargrad(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 21:
        cout<<"\n\n(1): M.A. (HONS.) - MASTER OF ARTS 2yrs.(4 Semesters)"
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tM.A. (HONS.) - MASTER OF ARTS\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                  cout<<"\nConstructing strong basic foundation in concepts of english and foreign language and inculcating the\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 60% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholargrad(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 22:
        cout<<"\n\n(1): M.SC IN DESIGN - MULTIMEDIA 2yrs.(4 Semesters)"
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tM.SC IN DESIGN - MULTIMEDIA\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                  cout<<"\nConstructing strong basic foundation in concepts of multimedia and inculcating the\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 60% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholargrad(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 23:
        cout<<"\n\n(1): M.A. (HONS.) - MASTER OF ARTS 2yrs.(4 Semesters)"
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tM.A. (HONS.) - MASTER OF ARTS\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                  cout<<"\nConstructing strong basic foundation in concepts of history and inculcating the\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 60% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholargrad(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 24:
        cout<<"\n\n(1): M.SC (HONS.) IN ECONOMICS 2yrs.(4 Semesters)"
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tM.SC (HONS.) IN ECONOMICS\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                  cout<<"\nConstructing strong basic foundation in concepts of economics and inculcating the\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 60% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholargrad(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 25:
        cout<<"\n\n(1): MASTER OF COMMERECE 2yrs.(4 Semesters)"
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tMASTER OF COMMERECE\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                  cout<<"\nConstructing strong basic foundation in concepts of business and inculcating the\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 60% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholargrad(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 26:
        cout<<"\n\n(1): MASTER OF SCIENCE (HONS.) AGRICULTURE 2yrs.(4 Semesters)"
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tMASTER OF SCIENCE (HONS.) AGRICULTURE\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                  cout<<"\nConstructing strong basic foundation in concepts of agriculture and inculcating the\n"
                  <<" skills required at field level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 60% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFeeht.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFeeht.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholargrad(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    default:
        cout<<"\nBetter Luck next Time";
    }

}
void login::calcscholargrad(int a)
{
    system("cls");
    int s[28];
    for(int i=0;i<28;i++)
        s[i]=0;
    int c;
    char ch;
    //cout<<"\nhello";
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
                s[0]=50000;
                break;
            case 2:
                s[0]=40000;
                break;
            case 3:
                s[0]=30000;
                break;
            case 4:
                s[0]=75000;
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
    if(c>=90&&c<98)
        s[1]=50000;
    else if(c>=80&&c<90)
        s[1]=40000;
    else if(c>=70&&c<80)
        s[1]=30000;
    else if(c>=98)
        s[1]=75000;
    else
        s[1]=0;
    system("cls");
    cout<<"\nHave you given any National Level Test? y/n"
    <<"\n\nENter choice: ";
    cin>>ch;
    if(ch=='y')
    {
        cout<<"Enter your percentage without % symbol(in integer only) : ";
        cin>>c;
       if(c>=90)
        s[5]=50000;
       else if(c>=80&&c<90)
        s[5]=40000;
       else if(c>=70&&c<80)
        s[5]=30000;
       else
        s[5]=0;
    }
    system("cls");
    cout<<"\nHave you Earned Sports, Cultural, R&D, Co-curricular,"
    <<" Social Service, Bravery Awards?  y/n"
    <<"\n\nENter choice: ";
    cin>>ch;
    if(ch=='y')
    {
        system("cls");
        cout<<"\nHave you played International Sports Championship?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"\n\nENter Your Grade: ";
            cin>>ch;
            if(ch=='A'||ch=='a'){
                cout<<"\n\na) Full Programme Fee waiver"
                 <<"\nb) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"\nc) Free Meal Plan (Standard Meal)";
                 //break;
                 s[2]=94500;
            }
            if(ch=='B'||ch=='b'){
                s[2]=50000;
                cout<<"\na) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"b) Free Meal Plan (Standard Meal)"
                 <<"\nc) Scholarship on Programme Fee equivalent to amount awarded to Student"
                 <<" scoring >=90% in elig. Qualification"
                 <<"\nFor Engg That is 50000 INR per semester ";
                 //break;
                }
             if(ch=='C'||ch=='c')
                s[2]=40000;
             if(ch=='D'||ch=='d')
                s[2]=30000;
            Sleep( 5000 );

        }
        system("cls");
        cout<<"\nHave you played National Sports championship/Inter University Sports Competition?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"\n\nENter Your Grade: ";
            cin>>ch;
            if(ch=='A'||ch=='a'){
                    s[2]=94500;
                cout<<"\n\na) Full Programme Fee waiver"
                 <<"\nb) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"\nc) Free Meal Plan (Standard Meal)";
                 //break;
            }
            if(ch=='B'||ch=='b'){
                s[2]=50000;
                cout<<"\na) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"b) Free Meal Plan (Standard Meal)"
                 <<"\nc) Scholarship on Programme Fee equivalent to amount awarded to Student"
                 <<" scoring >=90% in elig. Qualification"
                 <<"\nFor Engg That is 50000 INR per semester ";
                // break;
                }
             if(ch=='C'||ch=='c')
                s[2]=40000;
             if(ch=='D'||ch=='d')
                s[2]=30000;
            Sleep( 5000 );
        }
        system("cls");
        cout<<"\nHave you played State Sports Championship?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"\n\nENter Your Grade: ";
            cin>>ch;
            if(ch=='A'||ch=='a'){
                cout<<"\na) Full Programme Fee waiver"
                 <<"\nb) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"c) Free Meal Plan (Standard Meal)";
                // break;
                s[2]=94500;
            }
            if(ch=='B'||ch=='b'){
                s[2]=50000;
                cout<<"\na) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"b) Free Meal Plan (Standard Meal)"
                 <<"\nc) Scholarship on Programme Fee equivalent to amount awarded to Student"
                 <<" scoring >=90% in elig. Qualification"
                 <<"\nFor Engg That is 50000 INR per semester ";
                // break;
                }
             if(ch=='C'||ch=='c')
                s[2]=40000;
             if(ch=='D'||ch=='d')
                s[2]=30000;

            Sleep( 5000 );
        }
        system("cls");
        cout<<"\nHave you played School Boards Tournaments?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"\n\nENter Your Grade: ";
            cin>>ch;
            if(ch=='A'||ch=='a'){
                cout<<"\na) Full Programme Fee waiver"
                 <<"\nb) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"c) Free Meal Plan (Standard Meal)";
                // break;
                s[2]=94500;
            }
            if(ch=='B'||ch=='b'){
                s[2]=50000;
                cout<<"\na) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"b) Free Meal Plan (Standard Meal)"
                 <<"\nc) Scholarship on Programme Fee equivalent to amount awarded to Student"
                 <<" scoring >=90% in elig. Qualification"
                 <<"\nFor Engg That is 50000 INR per semester ";
                // break;
                }
             if(ch=='C'||ch=='c')
                s[2]=40000;
             if(ch=='D'||ch=='d')
                s[2]=30000;
            Sleep( 5000 );
        }
        system("cls");
        cout<<"\nHave you played TABS - Trial / Audition Based Scholarship*?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"\n\nENter Your Grade: ";
            cin>>ch;
            if(ch=='A'||ch=='a'){
                cout<<"\na) Full Programme Fee waiver"
                 <<"\nb) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"c) Free Meal Plan (Standard Meal)";
                // break;
                s[2]=94500;
            }
            if(ch=='B'||ch=='b'){
                s[2]=50000;
                cout<<"\na) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"b) Free Meal Plan (Standard Meal)"
                 <<"\nc) Scholarship on Programme Fee equivalent to amount awarded to Student"
                 <<" scoring >=90% in elig. Qualification"
                 <<"\nFor Engg That is 50000 INR per semester ";
                // break;
                }
             if(ch=='C'||ch=='c')
                s[2]=40000;
             if(ch=='D'||ch=='d')
                s[2]=30000;
            Sleep( 5000 );
        }
        system("cls");
        cout<<"\nHave you performed for International Festivals?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"\n\nENter Your Grade: ";
            cin>>ch;
            if(ch=='A'||ch=='a'){
                cout<<"\na) Full Programme Fee waiver"
                 <<"\nb) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"c) Free Meal Plan (Standard Meal)";
                // break;
                s[2]=94500;
            }
            if(ch=='B'||ch=='b'){
                s[2]=50000;
                cout<<"\na) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"b) Free Meal Plan (Standard Meal)"
                 <<"\nc) Scholarship on Programme Fee equivalent to amount awarded to Student"
                 <<" scoring >=90% in elig. Qualification"
                 <<"\nFor Engg That is 50000 INR per semester ";
                // break;
                }
             if(ch=='C'||ch=='c')
                s[2]=40000;
             if(ch=='D'||ch=='d')
                s[2]=30000;
            Sleep( 5000 );
        }
        system("cls");
        cout<<"\nHave you performed for National Youth Festivals/ Inter University Youth Festivals?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"\n\nENter Your Grade: ";
            cin>>ch;
            if(ch=='A'||ch=='a'){
                cout<<"\na) Full Programme Fee waiver"
                 <<"\nb) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"c) Free Meal Plan (Standard Meal)";
                // break;
                s[2]=94500;
            }
            if(ch=='B'||ch=='b'){
                s[2]=50000;
                cout<<"\na) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"b) Free Meal Plan (Standard Meal)"
                 <<"\nc) Scholarship on Programme Fee equivalent to amount awarded to Student"
                 <<" scoring >=90% in elig. Qualification"
                 <<"\nFor Engg That is 50000 INR per semester ";
                // break;
                }
             if(ch=='C'||ch=='c')
                s[2]=40000;
             if(ch=='D'||ch=='d')
                s[2]=30000;
            Sleep( 5000 );
        }
        system("cls");
        cout<<"\nHave you performed for Central/ State level Cultural Festivals?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"\n\nENter Your Grade: ";
            cin>>ch;
            if(ch=='A'||ch=='a'){
                cout<<"\na) Full Programme Fee waiver"
                 <<"\nb) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"c) Free Meal Plan (Standard Meal)";
                // break;
                s[2]=94500;
            }
            if(ch=='B'||ch=='b'){
                s[2]=50000;
                cout<<"\na) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"b) Free Meal Plan (Standard Meal)"
                 <<"\nc) Scholarship on Programme Fee equivalent to amount awarded to Student"
                 <<" scoring >=90% in elig. Qualification"
                 <<"\nFor Engg That is 50000 INR per semester ";
                // break;
                }
             if(ch=='C'||ch=='c')
                s[2]=40000;
             if(ch=='D'||ch=='d')
                s[2]=30000;
            Sleep( 5000 );
        }
        system("cls");
        cout<<"\nHave you performed for Chacha Nehru Scholarship or Bal Shree Award?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"\n\nENter Your Grade: ";
            cin>>ch;
            if(ch=='A'||ch=='a'){
                cout<<"\na) Full Programme Fee waiver"
                 <<"\nb) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"c) Free Meal Plan (Standard Meal)";
                // break;
                s[2]=94500;
            }
            if(ch=='B'||ch=='b'){
                s[2]=50000;
                cout<<"\na) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"b) Free Meal Plan (Standard Meal)"
                 <<"\nc) Scholarship on Programme Fee equivalent to amount awarded to Student"
                 <<" scoring >=90% in elig. Qualification"
                 <<"\nFor Engg That is 50000 INR per semester ";
                // break;
                }
             if(ch=='C'||ch=='c')
                s[2]=40000;
             if(ch=='D'||ch=='d')
                s[2]=30000;
            Sleep( 5000 );
        }
        system("cls");
        cout<<"\nHave you performed for Student Science Exhibition/ Drama/ Quiz or National Talent Search Certificate?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"\n\nENter Your Grade: ";
            cin>>ch;
            if(ch=='A'||ch=='a'){
                cout<<"\na) Full Programme Fee waiver"
                 <<"\nb) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"c) Free Meal Plan (Standard Meal)";
                // break;
                s[2]=94500;
            }
            if(ch=='B'||ch=='b'){
                s[2]=50000;
                cout<<"\na) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"b) Free Meal Plan (Standard Meal)"
                 <<"\nc) Scholarship on Programme Fee equivalent to amount awarded to Student"
                 <<" scoring >=90% in elig. Qualification"
                 <<"\nFor Engg That is 50000 INR per semester ";
                // break;
                }
             if(ch=='C'||ch=='c')
                s[2]=40000;
             if(ch=='D'||ch=='d')
                s[2]=30000;
            Sleep( 5000 );
        }
        system("cls");
        cout<<"\nHave you performed for Research and Development/ Co-curricular or Online & Corporate Competion or \nTABS - Trial / Audition Based Scholarship *?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"\n\nENter Your Grade: ";
            cin>>ch;
            if(ch=='A'||ch=='a'){
                cout<<"\na) Full Programme Fee waiver"
                 <<"\nb) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"c) Free Meal Plan (Standard Meal)";
                // break;
                s[2]=94500;
            }
            if(ch=='B'||ch=='b'){
                s[2]=50000;
                cout<<"\na) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"b) Free Meal Plan (Standard Meal)"
                 <<"\nc) Scholarship on Programme Fee equivalent to amount awarded to Student"
                 <<" scoring >=90% in elig. Qualification"
                 <<"\nFor Engg That is 50000 INR per semester ";
                // break;
                }
             if(ch=='C'||ch=='c')
                s[2]=40000;
             if(ch=='D'||ch=='d')
                s[2]=30000;
            Sleep( 5000 );
        }
        system("cls");
        cout<<"\nHave you been part of National Service Scheme (NSS) or National Cadet Core Scheme (NCC)?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"\n\nENter Your Grade: ";
            cin>>ch;
            if(ch=='A'||ch=='a'){
                cout<<"\na) Full Programme Fee waiver"
                 <<"\nb) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"\nc) Free Meal Plan (Standard Meal)";
                // break;
                s[2]=94500;
            }
            if(ch=='B'||ch=='b'){
                s[2]=50000;
                cout<<"\na) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"b) Free Meal Plan (Standard Meal)"
                 <<"\nc) Scholarship on Programme Fee equivalent to amount awarded to Student"
                 <<" scoring >=90% in elig. Qualification"
                 <<"\nFor Engg That is 50000 INR per semester ";
                // break;
                }
             if(ch=='C'||ch=='c')
                s[2]=40000;
             if(ch=='D'||ch=='d')
                s[2]=30000;

            Sleep( 5000 );
        }
        system("cls");
        cout<<"\nHave you been part of National Bravery Award or Scouts & Guides or Red Cross Activities?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"\n\nENter Your Grade: ";
            cin>>ch;
            if(ch=='A'||ch=='a'){
                cout<<"\na) Full Programme Fee waiver"
                 <<"\nb) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"c) Free Meal Plan (Standard Meal)";
                // break;
                s[2]=94500;
            }
            if(ch=='B'||ch=='b'){
                s[2]=50000;
                cout<<"\na) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"b) Free Meal Plan (Standard Meal)"
                 <<"\nc) Scholarship on Programme Fee equivalent to amount awarded to Student"
                 <<" scoring >=90% in elig. Qualification"
                 <<"\nFor Engg That is 50000 INR per semester ";
                // break;
                }
             if(ch=='C'||ch=='c')
                s[2]=40000;
             if(ch=='D'||ch=='d')
                s[2]=30000;
            Sleep( 5000 );
        }
    }
    system("cls");
    cout<<"\n\nAre you ward of Defence, CAPF personnel and their dependants?  y/n"
    <<"\n\nENter choice: ";
    cin>>ch;
    if(ch=='y')
    {
        system("cls");
        cout<<"\nHave your father have recieved any Gallantry Awards?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y'){
            s[3]=50000;
        }
        cout<<"\nARe your father Serving Officers - nominated through study leave?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y'){
            s[3]=40000;
        }
        else
            s[3]=30000;
    }
    system("cls");
    cout<<"\n\nAre you Topper of your education board?  y/n"
    <<"\n\nENter choice: ";
    cin>>ch;
    if(ch=='y')
    {
        cout<<"\nFull Programme Fee waiver, and"
        <<"\nFree Stay in four seater room (Air Cooled Room) in Residential Facility"
        <<"\nOr\nFree Transport Facility.";
        Sleep(5000);
        s[4]=94500;
    }
    system("cls");
    cout<<"\n\nAre you Orphan?  y/n"
    <<"\n\nENter choice: ";
    cin>>ch;
    if(ch=='y')
    {
        cout<<"\nWith a view to facilitate access to higher education to orphan students,"
        <<" LPU offers a special scholarship scheme\n of Full programme fee waiver in the "
        <<"programmes as per Annexure mentioned below.\n The scholarship will be given to a"
        <<" maximum of 10 students on first come first\n serve basis subject to maximum of "
        <<"two candidates from one orphanage / organization."
        <<"\nLets see if you are lucky!!";
        Sleep(7000);
        s[6]=94500;
    }
    system("cls");
    cout<<"\n\nAre You person with certain disability*?   y/n"
    <<"\n\nENter choice: ";
    cin>>ch;
    if(ch=='y')
    {
        cout<<"\nWith a view to facilitate access to Higher Education to the persons"
        <<" with benchmark disability and Locomotor\n disability caused by Spinal Cord"
        <<" Injury. LPU offers a special scholarship scheme of Full programme fee\n"
        <<" waiver to the Persons with Disability in the programmes as per Annexure"
        <<" mentioned below.\n The scholarship will be given to a maximum of 20 students"
        <<" on first come basis. ";
        s[7]=94500;
        Sleep(7000);
    }int l=s[0];


    for(int i=0;i<8;i++)
    {
        if(l<s[i])
            l=s[i];
    }
    if(a>=8)
    {
        switch(a)
        {
        case 11:
        case 12:
            if(l==94500)
                l=64500;
            else if(l==75000)
                l=40000;
            else if(l==50000)
                l=30000;
            else if(l==40000)
                l=20000;
            else if(l==30000)
                l=15000;
                break;
        case 17:
        case 18:
        //case 21:
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 16:
        case 15:
        case 14:
        case 13:
        case 10:
        case 9:
            if(l==94500)
                l=49500;
            else if(l==75000)
                l=30000;
            else if(l==50000)
                l=20000;
            else if(l==40000)
                l=15000;
            else if(l==30000)
                l=10000;
            break;
        default:
            cout<<"\nUnknown Error";
        }
    }
    switch(a)
        {
        case 11:
        case 12:
            system("cls");
    cout<<"Congratulations the applicable scholarship for you is: "<<l<<" INR(per semester)"
    <<"\n\nThe fees applicable after scholarship is :"<<64500-l<<" INR(per semester)*"
    <<"\n\n\n*Note:The fees shown here are excluding examination fees.";
            break;
        case 8:
            cout<<"Congratulations the applicable scholarship for you is: "<<l<<" INR(per semester)"
    <<"\n\nThe fees applicable after scholarship is :"<<110000-l<<" INR(per semester)*"
    <<"\n\n\n*Note:The fees shown here are excluding examination fees.";
        case 16:
        case 17:
        case 18:
        //case 21:
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 9:
        case 10:
        case 13:
        case 14:
        case 15:
            system("cls");
    cout<<"Congratulations the applicable scholarship for you is: "<<l<<" INR(per semester)"
    <<"\n\nThe fees applicable after scholarship is :"<<49500-l<<" INR(per semester)*"
    <<"\n\n\n*Note:The fees shown here are excluding examination fees.";
            break;
        default:
            system("cls");
    cout<<"Congratulations the applicable scholarship for you is: "<<l<<" INR(per semester)"
    <<"\n\nThe fees applicable after scholarship is :"<<94500-l<<" INR(per semester)*"
    <<"\n\n\n*Note:The fees shown here are excluding examination fees.";
        }
}
int login::stream12(login a)
{
    system("cls");
    int ch;
    cout<<"\n\n(1):Electronics and Communication Engineering (ECE)"
    <<"\n(2):Electrical and Electronics Engineering (EEE)"
    <<"\n(3):Computer Science and Engineering (CSE)"
    <<"\n(4):Mechanical Engineering (ME)"
    <<"\n(5):Automobile Engineering (AE)"
    <<"\n(6):Civil Engineering (CE)"
    <<"\n(7):Electrical Engineering (EE)"
    <<"\n(8):Biotechnology (BT)"
    <<"\n(9):Aerospace Engineering"
    <<"\n(10):Biomedical Engineering (BE)"
    <<"\n(11):Chemical Engineering (CHE)"
    <<"\n(12):Information Technology (IT)"
    <<"\n(13):ME -Mechatronics"
    <<"\n(14):CHE - Petroleum"
    <<"\n(15):Food Technology"

    <<"\n\nEnter Choice : ";
    cin>>ch;
    switch(ch)
    {
    case 1:
        a.course12(ch);
        //return ch;
        break;
    case 2:
        a.course12(ch);
       // return ch;
        break;
    case 3:
        a.course12(ch);
       // return ch;
        break;
    case 4:
        a.course12(ch);
       // return ch;
        break;
    case 5:
        a.course12(ch);
       // return ch;
        break;
    case 6:
        a.course12(ch);
       // return ch;
        break;
    case 7:
        a.course12(ch);
        //return ch;
        break;
    case 8:
        a.course12(ch);
       // return ch;
        break;
    case 9:
        a.course12(ch);
       // return ch;
        break;
    case 10:
        a.course12(ch);
       // return ch;
        break;
    case 11:
        a.course12(ch);
       // return ch;
        break;
    case 12:
        a.course12(ch);
       // return ch;
        break;
    case 13:
        a.course12(ch);
       // return ch;
        break;
    case 14:
        a.course12(ch);
       // return ch;
        break;
    case 15:
        a.course12(ch);
       // return ch;
        break;
    default:
        cout<<"\nBetter luck next time";
    }
}
void login::course12(int i)
{
    string s;
    system("cls");
    int ch,chi;
    ifstream fin;
    switch(i)
    {
    case 1:
        cout<<"\n\n(1):B.Tech. (ECE) 4 yrs(8 semester)"
        <<"\n(2):B.Tech. (Hons.) (ECE) 4 yrs(8 semester)"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tElectronics and Communication Engineering (ECE) (Engg.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("EnggDetails.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggDetails.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("EnggFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
        case 2:
            system("cls");
            cout<<"\n\t\t\t\tB.Tech. (Hons) 4 yrs\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("EnggDetails.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggDetails.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("EnggFeeHons.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggFeeHons.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 2:
        cout<<"\n\n(1):B.Tech. (EEE) 4 yrs(8 semester)"
        //<<"\n(2):B.Tech. (Hons.) (ECE) 4 yrs(8 semester)"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tElectronics and Electrical Engineering (EEE) (Engg.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("EnggDetails.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggDetails.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("EnggFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
            default:
                cout<<"\nBetterr Luck next time";
        }

        break;
    case 3:
        cout<<"\n\n(1):B.Tech. (CSE) 4 yrs(8 semester)"
        <<"\n(2):B.Tech. (Hons.) (CSE) 4 yrs(8 semester)"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tComputer Science and Engineering (CSE) (Engg.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("EnggDetails.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggDetails.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("EnggFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
            case 2:
            system("cls");
            cout<<"\n\t\t\t\tComputer Science and Engineering (CSE) (Engg.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("EnggDetails.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggDetails.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("EnggFeeHons.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggFeeHons.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
            default:
                cout<<"\nBetterr Luck next time";
        }
        break;
    case 4:
        cout<<"\n\n(1):B.Tech. (ME) 4 yrs(8 semester)"
        //<<"\n(2):B.Tech. (Hons.) (ECE) 4 yrs(8 semester)"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tMechanical Engineering (ME) (Engg.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("EnggDetails.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggDetails.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("EnggFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
            default:
                cout<<"\nBetterr Luck next time";
        }
        break;
    case 5:
        cout<<"\n\n(1):B.Tech. (AE) 4 yrs(8 semester)"
        //<<"\n(2):B.Tech. (Hons.) (ECE) 4 yrs(8 semester)"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tAutomobile Engineering (AE) (Engg.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("EnggDetails.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggDetails.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("EnggFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
            default:
                cout<<"\nBetterr Luck next time";
        }
        break;
    case 6:
        cout<<"\n\n(1):B.Tech. (CE) 4 yrs(8 semester)"
        //<<"\n(2):B.Tech. (Hons.) (ECE) 4 yrs(8 semester)"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tCivil Engineering (CE) (Engg.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("EnggDetails.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggDetails.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("EnggFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
            default:
                cout<<"\nBetterr Luck next time";
        }
        break;
    case 7:
        cout<<"\n\n(1):B.Tech. (EE) 4 yrs(8 semester)"
        //<<"\n(2):B.Tech. (Hons.) (ECE) 4 yrs(8 semester)"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tElectrical Engineering (EE) (Engg.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("EnggDetails.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggDetails.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("EnggFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
            default:
                cout<<"\nBetterr Luck next time";
        }
        break;
    case 8:
        cout<<"\n\n(1):B.Tech. (BT) 4 yrs(8 semester)"
        //<<"\n(2):B.Tech. (Hons.) (ECE) 4 yrs(8 semester)"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tBiotechnology (BT) (Engg.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("EnggDetails.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggDetails.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("EnggFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
            default:
                cout<<"\nBetterr Luck next time";
        }
        break;
    case 9:
        cout<<"\n\n(1):B.Tech. (AE) 4 yrs(8 semester)"
        //<<"\n(2):B.Tech. (Hons.) (ECE) 4 yrs(8 semester)"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tAerospace Engineering (AE) (Engg.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("EnggDetails.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggDetails.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("EnggFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
            default:
                cout<<"\nBetterr Luck next time";
        }
        break;
    case 10:
        cout<<"\n\n(1):B.Tech. (BE) 4 yrs(8 semester)"
        //<<"\n(2):B.Tech. (Hons.) (ECE) 4 yrs(8 semester)"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tBiomedical Engineering (BE) (Engg.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("EnggDetails.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggDetails.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("EnggFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
            default:
                cout<<"\nBetterr Luck next time";
        }
        break;
    case 11:
        cout<<"\n\n(1):B.Tech. (CHE) 4 yrs(8 semester)"
        //<<"\n(2):B.Tech. (Hons.) (ECE) 4 yrs(8 semester)"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tChemical Engineering (CHE) (Engg.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("EnggDetails.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggDetails.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("EnggFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
            default:
                cout<<"\nBetterr Luck next time";
        }
        break;
    case 12:
        cout<<"\n\n(1):B.Tech. (IT) 4 yrs(8 semester)"
        //<<"\n(2):B.Tech. (Hons.) (ECE) 4 yrs(8 semester)"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tInformation Technology (IT) (Engg.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("EnggDetails.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggDetails.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("EnggFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
            default:
                cout<<"\nBetterr Luck next time";
        }
        break;
    case 13:
        cout<<"\n\n(1):B.Tech. (ME) 4 yrs(8 semester)"
        //<<"\n(2):B.Tech. (Hons.) (ECE) 4 yrs(8 semester)"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tME-Mechatronics (ME) (Engg.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("EnggDetails.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggDetails.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("EnggFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
            default:
                cout<<"\nBetterr Luck next time";
        }
        break;
    case 14:
        cout<<"\n\n(1):B.Tech. (CHE) 4 yrs(8 semester)"
        //<<"\n(2):B.Tech. (Hons.) (ECE) 4 yrs(8 semester)"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tCHE-Petroleum (CHE) (Engg.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("EnggDetails.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggDetails.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("EnggFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
            default:
                cout<<"\nBetterr Luck next time";
        }
        break;
    case 15:
        cout<<"\n\n(1):B.Tech. (FT) 4 yrs(8 semester)"
        //<<"\n(2):B.Tech. (Hons.) (ECE) 4 yrs(8 semester)"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tFood Technology (FT) (Engg.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("EnggDetails.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggDetails.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("EnggFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
            default:
                cout<<"\nBetterr Luck next time";
        }
        break;
    case 16:
        cout<<"\n\n(1): BBA 3 yrs.(6 Semesters)"
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tBACHELOR Of BUSINESS ADMINISTRATION\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:

                  cout<<"\nThis programme trains students in key business principles and helps them master management\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 50% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 17:
        cout<<"\n\n(1): B DEsign 4 yrs.(8 Semesters)"
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tBACHELOR OF DESIGN IN FASHION\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:

                  cout<<"\nThis programme trains students in key business principles and helps them master management\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 50% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFeeht.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFeeht.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 18:
        cout<<"\n\n(1): BACHELOR OF HOTEL MANAGEMENT AND CATERING TECHNOLOGY 4 yrs.(8 Semesters)"
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tBACHELOR OF HOTEL MANAGEMENT AND CATERING TECHNOLOGY\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:

                  cout<<"\nThis programme trains students in key business principles and helps them master management\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 50% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFeeht.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFeeht.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 19:
        cout<<"\n\n(1): BACHELOR OF DESIGN IN FASHION 4 yrs.(8 Semesters)"
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tBACHELOR OF DESIGN IN FASHION\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:

                  cout<<"\nThis programme trains students in key business principles and helps them master management\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 50% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFeeht.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFeeht.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 20:
        cout<<"\n\n(1): B.SC. - MEDICAL LAB TECHNOLOGY 3 yrs.(6 Semesters)"
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tB.SC. - MEDICAL LAB TECHNOLOGY\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                  cout<<"\nThis programme trains students in key business principles and helps them master management\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 50% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 21:
        cout<<"\n\n(1): B.ARCH 5yrs.(10 Semesters)"
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tB.ARCH\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                  cout<<"\nC.O.A approved professional degree offering elite architectural education nourishing students with designing and software\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 60% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("EnggFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 22:
        cout<<"\n\n(1): BACHELOR OF SCIENCE BIOTECHNOLOGY 3yrs.(6 Semesters)"
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tBACHELOR OF SCIENCE BIOTECHNOLOGY\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                  cout<<"\nConstructing strong basic foundation in concepts of biological sciences and inculcating the\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 60% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 23:
        cout<<"\n\n(1): BCA -BACHELOR OF COMPUTER APPLICATION 3yrs.(6 Semesters)"
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tBCA -BACHELOR OF COMPUTER APPLICATION\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                  cout<<"\nConstructing strong basic foundation in concepts of computer sciences and inculcating the\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 60% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 24:
        cout<<"\n\n(1): B.A. (HONS.) - BACHELOR OF ARTS 3yrs.(6 Semesters)"
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tB.A. (HONS.) - BACHELOR OF ARTS\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                  cout<<"\nConstructing strong basic foundation in concepts of geographical and inculcating the\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 60% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 25:
        cout<<"\n\n(1): B.A.- BACHELOR OF ARTS 3yrs.(6 Semesters)"
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tB.A.- BACHELOR OF ARTS\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                  cout<<"\nConstructing strong basic foundation in concepts of arts(humanities) and inculcating the\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 60% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 26:
        cout<<"\n\n(1): BACHELOR OF SCIENCE (HONS.) MATHEMATICS 3yrs.(6 Semesters)"
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tBACHELOR OF SCIENCE (HONS.) MATHEMATICS\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                  cout<<"\nConstructing strong basic foundation in concepts of mathematics and inculcating the\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 60% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 27:
        cout<<"\n\n(1): B.A., LL.B. (HONS.) 3yrs.(6 Semesters)"
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tB.A., LL.B. (HONS.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                  cout<<"\nConstructing strong basic foundation in concepts of law and inculcating the\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 60% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 28:
        cout<<"\n\n(1): BACHELOR OF SCIENCE (HONS.) PHYSICS 3yrs.(6 Semesters)"
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tBACHELOR OF SCIENCE (HONS.) PHYSICS\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                  cout<<"\nConstructing strong basic foundation in concepts of physics and inculcating the\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 60% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 29:
        cout<<"\n\n(1): B.A. (HONS.) - BACHELOR OF ARTS 3yrs.(6 Semesters)"
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tB.A. (HONS.) - BACHELOR OF ARTS\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                  cout<<"\nConstructing strong basic foundation in concepts of english and foreign language and inculcating the\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 60% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 30:
        cout<<"\n\n(1): B.SC IN DESIGN - MULTIMEDIA 3yrs.(6 Semesters)"
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tB.SC IN DESIGN - MULTIMEDIA\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                  cout<<"\nConstructing strong basic foundation in concepts of multimedia and inculcating the\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 60% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 31:
        cout<<"\n\n(1): B.A. (HONS.) - BACHELOR OF ARTS 3yrs.(6 Semesters)"
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tB.A. (HONS.) - BACHELOR OF ARTS\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                  cout<<"\nConstructing strong basic foundation in concepts of history and inculcating the\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 60% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 32:
        cout<<"\n\n(1): B.SC (HONS.) IN ECONOMICS 3yrs.(6 Semesters)"
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tB.SC (HONS.) IN ECONOMICS\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                  cout<<"\nConstructing strong basic foundation in concepts of economics and inculcating the\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 60% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 33:
        cout<<"\n\n(1): BACHELOR OF COMMERECE 3yrs.(6 Semesters)"
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tBACHELOR OF COMMERECE\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                  cout<<"\nConstructing strong basic foundation in concepts of business and inculcating the\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 60% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 34:
        cout<<"\n\n(1): BACHELOR OF SCIENCE (HONS.) AGRICULTURE 4yrs.(8 Semesters)"
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tBACHELOR OF SCIENCE (HONS.) AGRICULTURE\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                  cout<<"\nConstructing strong basic foundation in concepts of agriculture and inculcating the\n"
                  <<" skills required at field level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 60% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFeeht.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFeeht.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    default:
        cout<<"\nBetter Luck next Time";
    }

}
int login::streamdp(login a)
{
    system("cls");
    int ch;
    cout<<"\n\n(1):Electronics and Communication Engineering (ECE)"
    <<"\n(2):Electrical and Electronics Engineering (EEE)"
    <<"\n(3):Computer Science and Engineering (CSE)"
    <<"\n(4):Mechanical Engineering (ME)"
    <<"\n(5):Automobile Engineering (AE)"
    <<"\n(6):Civil Engineering (CE)"
    <<"\n(7):Electrical Engineering (EE)"
    <<"\n(8):Biotechnology (BT)"
    <<"\n(9):Aerospace Engineering"
    <<"\n(10):Biomedical Engineering (BE)"
    <<"\n(11):Chemical Engineering (CHE)"
    <<"\n(12):Information Technology (IT)"
    <<"\n(13):ME -Mechatronics"
    <<"\n(14):CHE - Petroleum"
    <<"\n(15):Food Technology"

    <<"\n\nEnter Choice : ";
    cin>>ch;
    switch(ch)
    {
    case 1:
        a.coursediploma(ch);
        //return ch;
        break;
    case 2:
        a.coursediploma(ch);
       // return ch;
        break;
    case 3:
        a.coursediploma(ch);
       // return ch;
        break;
    case 4:
        a.coursediploma(ch);
       // return ch;
        break;
    case 5:
        a.coursediploma(ch);
       // return ch;
        break;
    case 6:
        a.coursediploma(ch);
       // return ch;
        break;
    case 7:
        a.coursediploma(ch);
        //return ch;
        break;
    case 8:
        a.coursediploma(ch);
       // return ch;
        break;
    case 9:
        a.coursediploma(ch);
       // return ch;
        break;
    case 10:
        a.coursediploma(ch);
       // return ch;
        break;
    case 11:
        a.coursediploma(ch);
       // return ch;
        break;
    case 12:
        a.coursediploma(ch);
       // return ch;
        break;
    case 13:
        a.coursediploma(ch);
       // return ch;
        break;
    case 14:
        a.coursediploma(ch);
       // return ch;
        break;
    case 15:
        a.coursediploma(ch);
       // return ch;
        break;
    default:
        cout<<"\nBetter luck next time";
    }
}
void login::calcscholar12(int a)
{
    system("cls");
    int s[34];
    for(int i=0;i<34;i++)
        s[i]=0;
    int c;
    char ch;
    //cout<<"\nhello ";
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
                s[0]=50000;
                break;
            case 2:
                s[0]=40000;
                break;
            case 3:
                s[0]=30000;
                break;
            case 4:
                s[0]=75000;
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
    if(c>=90&&c<98)
        s[1]=50000;
    else if(c>=80&&c<90)
        s[1]=40000;
    else if(c>=70&&c<80)
        s[1]=30000;
    else if(c>=98)
        s[1]=75000;
    else
        s[1]=0;
    system("cls");
    cout<<"\nHave you given any National Level Test? y/n"
    <<"\n\nENter choice: ";
    cin>>ch;
    if(ch=='y')
    {
        cout<<"Enter your percentage without % symbol(in integer only) : ";
        cin>>c;
       if(c>=90)
        s[5]=50000;
       else if(c>=80&&c<90)
        s[5]=40000;
       else if(c>=70&&c<80)
        s[5]=30000;
       else
        s[5]=0;
    }
    system("cls");
    cout<<"\nHave you Earned Sports, Cultural, R&D, Co-curricular,"
    <<" Social Service, Bravery Awards?  y/n"
    <<"\n\nENter choice: ";
    cin>>ch;
    if(ch=='y')
    {
        system("cls");
        cout<<"\nHave you played International Sports Championship?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"\n\nENter Your Grade: ";
            cin>>ch;
            if(ch=='A'||ch=='a'){
                    s[2]=94500;
                cout<<"\n\na) Full Programme Fee waiver"
                 <<"\nb) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"\nc) Free Meal Plan (Standard Meal)";
                 //break;

            }
            if(ch=='B'||ch=='b'){
                s[2]=50000;
                cout<<"\na) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"b) Free Meal Plan (Standard Meal)"
                 <<"\nc) Scholarship on Programme Fee equivalent to amount awarded to Student"
                 <<" scoring >=90% in elig. Qualification"
                 <<"\nFor Engg That is 50000 INR per semester ";
                 //break;
                }
             if(ch=='C'||ch=='c')
                s[2]=40000;
             if(ch=='D'||ch=='d')
                s[2]=30000;
            Sleep( 5000 );

        }
        system("cls");
        cout<<"\nHave you played National Sports championship/Inter University Sports Competition?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"\n\nENter Your Grade: ";
            cin>>ch;
            if(ch=='A'||ch=='a'){
                    s[2]=94500;
                cout<<"\n\na) Full Programme Fee waiver"
                 <<"\nb) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"\nc) Free Meal Plan (Standard Meal)";
                 //break;
            }
            if(ch=='B'||ch=='b'){
                s[2]=50000;
                cout<<"\na) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"b) Free Meal Plan (Standard Meal)"
                 <<"\nc) Scholarship on Programme Fee equivalent to amount awarded to Student"
                 <<" scoring >=90% in elig. Qualification"
                 <<"\nFor Engg That is 50000 INR per semester ";
                // break;
                }
             if(ch=='C'||ch=='c')
                s[2]=40000;
             if(ch=='D'||ch=='d')
                s[2]=30000;
            Sleep( 5000 );
        }
        system("cls");
        cout<<"\nHave you played State Sports Championship?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"\n\nENter Your Grade: ";
            cin>>ch;
            if(ch=='A'||ch=='a'){
                    s[2]=94500;
                cout<<"\na) Full Programme Fee waiver"
                 <<"\nb) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"c) Free Meal Plan (Standard Meal)";
                // break;

            }
            if(ch=='B'||ch=='b'){
                s[2]=50000;
                cout<<"\na) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"b) Free Meal Plan (Standard Meal)"
                 <<"\nc) Scholarship on Programme Fee equivalent to amount awarded to Student"
                 <<" scoring >=90% in elig. Qualification"
                 <<"\nFor Engg That is 50000 INR per semester ";
                // break;
                }
             if(ch=='C'||ch=='c')
                s[2]=40000;
             if(ch=='D'||ch=='d')
                s[2]=30000;

            Sleep( 5000 );
        }
        system("cls");
        cout<<"\nHave you played School Boards Tournaments?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"\n\nENter Your Grade: ";
            cin>>ch;
            if(ch=='A'||ch=='a'){
                    s[2]=94500;
                cout<<"\na) Full Programme Fee waiver"
                 <<"\nb) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"c) Free Meal Plan (Standard Meal)";
                // break;

            }
            if(ch=='B'||ch=='b'){
                s[2]=50000;
                cout<<"\na) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"b) Free Meal Plan (Standard Meal)"
                 <<"\nc) Scholarship on Programme Fee equivalent to amount awarded to Student"
                 <<" scoring >=90% in elig. Qualification"
                 <<"\nFor Engg That is 50000 INR per semester ";
                // break;
                }
             if(ch=='C'||ch=='c')
                s[2]=40000;
             if(ch=='D'||ch=='d')
                s[2]=30000;
            Sleep( 5000 );
        }
        system("cls");
        cout<<"\nHave you played TABS - Trial / Audition Based Scholarship*?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"\n\nENter Your Grade: ";
            cin>>ch;
            if(ch=='A'||ch=='a'){
                    s[2]=94500;
                cout<<"\na) Full Programme Fee waiver"
                 <<"\nb) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"c) Free Meal Plan (Standard Meal)";
                // break;

            }
            if(ch=='B'||ch=='b'){
                s[2]=50000;
                cout<<"\na) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"b) Free Meal Plan (Standard Meal)"
                 <<"\nc) Scholarship on Programme Fee equivalent to amount awarded to Student"
                 <<" scoring >=90% in elig. Qualification"
                 <<"\nFor Engg That is 50000 INR per semester ";
                // break;
                }
             if(ch=='C'||ch=='c')
                s[2]=40000;
             if(ch=='D'||ch=='d')
                s[2]=30000;
            Sleep( 5000 );
        }
        system("cls");
        cout<<"\nHave you performed for International Festivals?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"\n\nENter Your Grade: ";
            cin>>ch;
            if(ch=='A'||ch=='a'){
                    s[2]=94500;
                cout<<"\na) Full Programme Fee waiver"
                 <<"\nb) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"c) Free Meal Plan (Standard Meal)";
                // break;

            }
            if(ch=='B'||ch=='b'){
                s[2]=50000;
                cout<<"\na) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"b) Free Meal Plan (Standard Meal)"
                 <<"\nc) Scholarship on Programme Fee equivalent to amount awarded to Student"
                 <<" scoring >=90% in elig. Qualification"
                 <<"\nFor Engg That is 50000 INR per semester ";
                // break;
                }
             if(ch=='C'||ch=='c')
                s[2]=40000;
             if(ch=='D'||ch=='d')
                s[2]=30000;
            Sleep( 5000 );
        }
        system("cls");
        cout<<"\nHave you performed for National Youth Festivals/ Inter University Youth Festivals?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"\n\nENter Your Grade: ";
            cin>>ch;
            if(ch=='A'||ch=='a'){
                cout<<"\na) Full Programme Fee waiver"
                 <<"\nb) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"c) Free Meal Plan (Standard Meal)";
                // break;
                s[2]=94500;
            }
            if(ch=='B'||ch=='b'){
                s[2]=50000;
                cout<<"\na) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"b) Free Meal Plan (Standard Meal)"
                 <<"\nc) Scholarship on Programme Fee equivalent to amount awarded to Student"
                 <<" scoring >=90% in elig. Qualification"
                 <<"\nFor Engg That is 50000 INR per semester ";
                // break;
                }
             if(ch=='C'||ch=='c')
                s[2]=40000;
             if(ch=='D'||ch=='d')
                s[2]=30000;
            Sleep( 5000 );
        }
        system("cls");
        cout<<"\nHave you performed for Central/ State level Cultural Festivals?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"\n\nENter Your Grade: ";
            cin>>ch;
            if(ch=='A'||ch=='a'){
                cout<<"\na) Full Programme Fee waiver"
                 <<"\nb) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"c) Free Meal Plan (Standard Meal)";
                // break;
                s[2]=94500;
            }
            if(ch=='B'||ch=='b'){
                s[2]=50000;
                cout<<"\na) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"b) Free Meal Plan (Standard Meal)"
                 <<"\nc) Scholarship on Programme Fee equivalent to amount awarded to Student"
                 <<" scoring >=90% in elig. Qualification"
                 <<"\nFor Engg That is 50000 INR per semester ";
                // break;
                }
             if(ch=='C'||ch=='c')
                s[2]=40000;
             if(ch=='D'||ch=='d')
                s[2]=30000;
            Sleep( 5000 );
        }
        system("cls");
        cout<<"\nHave you performed for Chacha Nehru Scholarship or Bal Shree Award?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"\n\nENter Your Grade: ";
            cin>>ch;
            if(ch=='A'||ch=='a'){
                cout<<"\na) Full Programme Fee waiver"
                 <<"\nb) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"c) Free Meal Plan (Standard Meal)";
                // break;
                s[2]=94500;
            }
            if(ch=='B'||ch=='b'){
                s[2]=50000;
                cout<<"\na) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"b) Free Meal Plan (Standard Meal)"
                 <<"\nc) Scholarship on Programme Fee equivalent to amount awarded to Student"
                 <<" scoring >=90% in elig. Qualification"
                 <<"\nFor Engg That is 50000 INR per semester ";
                // break;
                }
             if(ch=='C'||ch=='c')
                s[2]=40000;
             if(ch=='D'||ch=='d')
                s[2]=30000;
            Sleep( 5000 );
        }
        system("cls");
        cout<<"\nHave you performed for Student Science Exhibition/ Drama/ Quiz or National Talent Search Certificate?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"\n\nENter Your Grade: ";
            cin>>ch;
            if(ch=='A'||ch=='a'){
                cout<<"\na) Full Programme Fee waiver"
                 <<"\nb) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"c) Free Meal Plan (Standard Meal)";
                // break;
                s[2]=94500;
            }
            if(ch=='B'||ch=='b'){
                s[2]=50000;
                cout<<"\na) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"b) Free Meal Plan (Standard Meal)"
                 <<"\nc) Scholarship on Programme Fee equivalent to amount awarded to Student"
                 <<" scoring >=90% in elig. Qualification"
                 <<"\nFor Engg That is 50000 INR per semester ";
                // break;
                }
             if(ch=='C'||ch=='c')
                s[2]=40000;
             if(ch=='D'||ch=='d')
                s[2]=30000;
            Sleep( 5000 );
        }
        system("cls");
        cout<<"\nHave you performed for Research and Development/ Co-curricular or Online & Corporate Competion or \nTABS - Trial / Audition Based Scholarship *?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"\n\nENter Your Grade: ";
            cin>>ch;
            if(ch=='A'||ch=='a'){
                cout<<"\na) Full Programme Fee waiver"
                 <<"\nb) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"c) Free Meal Plan (Standard Meal)";
                // break;
                s[2]=94500;
            }
            if(ch=='B'||ch=='b'){
                s[2]=50000;
                cout<<"\na) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"b) Free Meal Plan (Standard Meal)"
                 <<"\nc) Scholarship on Programme Fee equivalent to amount awarded to Student"
                 <<" scoring >=90% in elig. Qualification"
                 <<"\nFor Engg That is 50000 INR per semester ";
                // break;
                }
             if(ch=='C'||ch=='c')
                s[2]=40000;
             if(ch=='D'||ch=='d')
                s[2]=30000;
            Sleep( 5000 );
        }
        system("cls");
        cout<<"\nHave you been part of National Service Scheme (NSS) or National Cadet Core Scheme (NCC)?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"\n\nENter Your Grade: ";
            cin>>ch;
            if(ch=='A'||ch=='a'){
                cout<<"\na) Full Programme Fee waiver"
                 <<"\nb) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"\nc) Free Meal Plan (Standard Meal)";
                // break;
                s[2]=94500;
            }
            if(ch=='B'||ch=='b'){
                s[2]=50000;
                cout<<"\na) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"b) Free Meal Plan (Standard Meal)"
                 <<"\nc) Scholarship on Programme Fee equivalent to amount awarded to Student"
                 <<" scoring >=90% in elig. Qualification"
                 <<"\nFor Engg That is 50000 INR per semester ";
                // break;
                }
             if(ch=='C'||ch=='c')
                s[2]=40000;
             if(ch=='D'||ch=='d')
                s[2]=30000;

            Sleep( 5000 );
        }
        system("cls");
        cout<<"\nHave you been part of National Bravery Award or Scouts & Guides or Red Cross Activities?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"\n\nENter Your Grade: ";
            cin>>ch;
            if(ch=='A'||ch=='a'){
                cout<<"\na) Full Programme Fee waiver"
                 <<"\nb) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"c) Free Meal Plan (Standard Meal)";
                // break;
                s[2]=94500;
            }
            if(ch=='B'||ch=='b'){
                s[2]=50000;
                cout<<"\na) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"b) Free Meal Plan (Standard Meal)"
                 <<"\nc) Scholarship on Programme Fee equivalent to amount awarded to Student"
                 <<" scoring >=90% in elig. Qualification"
                 <<"\nFor Engg That is 50000 INR per semester ";
                // break;
                }
             if(ch=='C'||ch=='c')
                s[2]=40000;
             if(ch=='D'||ch=='d')
                s[2]=30000;
            Sleep( 5000 );
        }
    }
    system("cls");
    cout<<"\n\nAre you ward of Defence, CAPF personnel and their dependants?  y/n"
    <<"\n\nENter choice: ";
    cin>>ch;
    if(ch=='y')
    {
        system("cls");
        cout<<"\nHave your father have recieved any Gallantry Awards?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y'){
            s[3]=50000;
        }
        cout<<"\nARe your father Serving Officers - nominated through study leave?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y'){
            s[3]=40000;
        }
        else
            s[3]=30000;
    }
    system("cls");
    cout<<"\n\nAre you Topper of your education board?  y/n"
    <<"\n\nENter choice: ";
    cin>>ch;
    if(ch=='y')
    {
        cout<<"\nFull Programme Fee waiver, and"
        <<"\nFree Stay in four seater room (Air Cooled Room) in Residential Facility"
        <<"\nOr\nFree Transport Facility.";
        Sleep(5000);
        s[4]=94500;
    }
    system("cls");
    cout<<"\n\nAre you Orphan?  y/n"
    <<"\n\nENter choice: ";
    cin>>ch;
    if(ch=='y')
    {
        cout<<"\nWith a view to facilitate access to higher education to orphan students,"
        <<" LPU offers a special scholarship scheme\n of Full programme fee waiver in the "
        <<"programmes as per Annexure mentioned below.\n The scholarship will be given to a"
        <<" maximum of 10 students on first come first\n serve basis subject to maximum of "
        <<"two candidates from one orphanage / organization."
        <<"\nLets see if you are lucky!!";
        Sleep(7000);
        s[6]=94500;
    }
    system("cls");
    cout<<"\n\nAre You person with certain disability*?   y/n"
    <<"\n\nENter choice: ";
    cin>>ch;
    if(ch=='y')
    {
        cout<<"\nWith a view to facilitate access to Higher Education to the persons"
        <<" with benchmark disability and Locomotor\n disability caused by Spinal Cord"
        <<" Injury. LPU offers a special scholarship scheme of Full programme fee\n"
        <<" waiver to the Persons with Disability in the programmes as per Annexure"
        <<" mentioned below.\n The scholarship will be given to a maximum of 20 students"
        <<" on first come basis. ";
        s[7]=94500;
        Sleep(7000);
    }int l=s[0];


    for(int i=0;i<8;i++)
    {
        if(l<s[i])
            l=s[i];
    }
    if(a>=16)
    {
        switch(a)
        {
        case 19:
        case 20:
            if(l==94500)
                l=64500;
            else if(l==75000)
                l=40000;
            else if(l==50000)
                l=30000;
            else if(l==40000)
                l=20000;
            else if(l==30000)
                l=15000;
                break;
        case 16:
        case 17:
        case 18:
        //case 21:
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        case 29:
        case 30:
        case 31:
        case 32:
        case 33:
        case 34:
            if(l==94500)
                l=49500;
            else if(l==75000)
                l=30000;
            else if(l==50000)
                l=20000;
            else if(l==40000)
                l=15000;
            else if(l==30000)
                l=10000;
            break;
        default:
            cout<<"\nUnknown Error";
        }
    }
    switch(a)
        {
        case 19:
        case 20:
            system("cls");
    cout<<"Congratulations the applicable scholarship for you is: "<<l<<" INR(per semester)"
    <<"\n\nThe fees applicable after scholarship is :"<<64500-l<<" INR(per semester)*"
    <<"\n\n\n*Note:The fees shown here are excluding examination fees.";
            break;
        case 16:
        case 17:
        case 18:
        //case 21:
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        case 29:
        case 30:
        case 31:
        case 32:
        case 33:
        case 34:
            system("cls");
    cout<<"Congratulations the applicable scholarship for you is: "<<l<<" INR(per semester)"
    <<"\n\nThe fees applicable after scholarship is :"<<49500-l<<" INR(per semester)*"
    <<"\n\n\n*Note:The fees shown here are excluding examination fees.";
            break;
        default:
            system("cls");
    cout<<"Congratulations the applicable scholarship for you is: "<<l<<" INR(per semester)"
    <<"\n\nThe fees applicable after scholarship is :"<<94500-l<<" INR(per semester)*"
    <<"\n\n\n*Note:The fees shown here are excluding examination fees.";
        }

    /*if(a==7||a==8||a==10)
    {
    system("cls");
    cout<<"Congratulations the applicable scholarship for you is: "<<l<<" INR(per semester)"
    <<"\n\nThe fees applicable after scholarship is :"<<39500-l<<" INR(per semester)*"
    <<"\n\n\n*Note:The fees shown here are excluding examination fees.";
    }
    else if(a==9)
    {
    system("cls");
    cout<<"Congratulations the applicable scholarship for you is: "<<l<<" INR(per semester)"
    <<"\n\nThe fees applicable after scholarship is :"<<49500-l<<" INR(per semester)*"
    <<"\n\n\n*Note:The fees shown here are excluding examination fees.";
    }*/




}
int login::stream10(login a)
{
    system("cls");
    int ch;
    cout<<"\n\n(1):Electronics and Communication Engineering (ECE)"
    <<"\n(2):Electrical Engineering (EE)"
    <<"\n(3):Computer Science and Engineering (CSE)"
    <<"\n(4):Mechanical Engineering (ME)"
    <<"\n(5):Automobile Engineering (AE)"
    <<"\n(6):Civil Engineering (CE)"
    <<"\n\nEnter Choice : ";
    cin>>ch;
    switch(ch)
    {
    case 1:
        a.course10(ch);
        //return ch;
        break;
    case 2:
        a.course10(ch);
       // return ch;
        break;
    case 3:
        a.course10(ch);
       // return ch;
        break;
    case 4:
        a.course10(ch);
       // return ch;
        break;
    case 5:
        a.course10(ch);
       // return ch;
        break;
    case 6:
        a.course10(ch);
       // return ch;
        break;
    default:
        cout<<"\nBetter luck next time";
    }
}
void login::coursediploma(int i)
{
    string s;
    system("cls");
    int ch,chi;
    ifstream fin;
    switch(i)
    {
    case 1:
        cout<<"\n\n(1):B.Tech. LE (ECE) 3 yrs(6 semester)"
        <<"\n(2):B.Tech. (Hons.) LE (ECE) 3 yrs(6 semester)"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tElectronics and Communication Engineering (ECE) (Engg.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("EnggDetails.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggDetails.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("EnggFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
        case 2:
            system("cls");
            cout<<"\n\t\t\t\tB.Tech. (Hons) 3 yrs\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("EnggDetails.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggDetails.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("EnggFeeHons.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggFeeHons.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 2:
        cout<<"\n\n(1):B.Tech. LE (EEE) 3 yrs(6 semester)"
        //<<"\n(2):B.Tech. (Hons.) (ECE) 4 yrs(8 semester)"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tElectronics and Electrical Engineering (EEE) (Engg.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("EnggDetails.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggDetails.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("EnggFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
            default:
                cout<<"\nBetterr Luck next time";
        }

        break;
    case 3:
        cout<<"\n\n(1):B.Tech. LE (CSE) 3 yrs(6 semester)"
        <<"\n(2):B.Tech. (Hons.) LE (CSE) 3 yrs(6 semester)"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tComputer Science and Engineering (CSE) (Engg.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("EnggDetails.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggDetails.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("EnggFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
            case 2:
            system("cls");
            cout<<"\n\t\t\t\tComputer Science and Engineering (CSE) (Engg.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("EnggDetails.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggDetails.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("EnggFeeHons.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggFeeHons.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
            default:
                cout<<"\nBetterr Luck next time";
        }
        break;
    case 4:
        cout<<"\n\n(1):B.Tech. LE (ME) 3 yrs(6 semester)"
        //<<"\n(2):B.Tech. (Hons.) (ECE) 4 yrs(8 semester)"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tMechanical Engineering (ME) (Engg.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("EnggDetails.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggDetails.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("EnggFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
            default:
                cout<<"\nBetterr Luck next time";
        }
        break;
    case 5:
        cout<<"\n\n(1):B.Tech. LE (AE) 3 yrs(6 semester)"
        //<<"\n(2):B.Tech. (Hons.) (ECE) 4 yrs(8 semester)"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tAutomobile Engineering (AE) (Engg.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("EnggDetails.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggDetails.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("EnggFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
            default:
                cout<<"\nBetterr Luck next time";
        }
        break;
    case 6:
        cout<<"\n\n(1):B.Tech. LE (CE) 3 yrs(6 semester)"
        //<<"\n(2):B.Tech. (Hons.) (ECE) 4 yrs(8 semester)"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tCivil Engineering (CE) (Engg.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("EnggDetails.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggDetails.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("EnggFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
            default:
                cout<<"\nBetterr Luck next time";
        }
        break;
    case 7:
        cout<<"\n\n(1):B.Tech. LE (EE) 3 yrs(6 semester)"
        //<<"\n(2):B.Tech. (Hons.) (ECE) 4 yrs(8 semester)"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tElectrical Engineering (EE) (Engg.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("EnggDetails.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggDetails.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("EnggFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
            default:
                cout<<"\nBetterr Luck next time";
        }
        break;
    case 8:
        cout<<"\n\n(1):B.Tech. LE (BT) 3 yrs(6 semester)"
        //<<"\n(2):B.Tech. (Hons.) (ECE) 4 yrs(8 semester)"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tBiotechnology (BT) (Engg.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("EnggDetails.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggDetails.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("EnggFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
            default:
                cout<<"\nBetterr Luck next time";
        }
        break;
    case 9:
        cout<<"\n\n(1):B.Tech. LE (AE) 3 yrs(6 semester)"
        //<<"\n(2):B.Tech. (Hons.) (ECE) 4 yrs(8 semester)"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tAerospace Engineering (AE) (Engg.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("EnggDetails.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggDetails.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("EnggFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
            default:
                cout<<"\nBetterr Luck next time";
        }
        break;
    case 10:
        cout<<"\n\n(1):B.Tech. LE (BE) 3 yrs(6 semester)"
        //<<"\n(2):B.Tech. (Hons.) (ECE) 4 yrs(8 semester)"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tBiomedical Engineering (BE) (Engg.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("EnggDetails.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggDetails.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("EnggFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
            default:
                cout<<"\nBetterr Luck next time";
        }
        break;
    case 11:
        cout<<"\n\n(1):B.Tech. LE (CHE) 3 yrs(6 semester)"
        //<<"\n(2):B.Tech. (Hons.) (ECE) 4 yrs(8 semester)"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tChemical Engineering (CHE) (Engg.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("EnggDetails.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggDetails.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("EnggFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
            default:
                cout<<"\nBetterr Luck next time";
        }
        break;
    case 12:
        cout<<"\n\n(1):B.Tech. LE (IT) 3 yrs(6 semester)"
        //<<"\n(2):B.Tech. (Hons.) (ECE) 4 yrs(8 semester)"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tInformation Technology (IT) (Engg.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("EnggDetails.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggDetails.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("EnggFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
            default:
                cout<<"\nBetterr Luck next time";
        }
        break;
    case 13:
        cout<<"\n\n(1):B.Tech. LE (ME) 3 yrs(6 semester)"
        //<<"\n(2):B.Tech. (Hons.) (ECE) 4 yrs(8 semester)"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tME-Mechatronics (ME) (Engg.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("EnggDetails.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggDetails.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("EnggFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
            default:
                cout<<"\nBetterr Luck next time";
        }
        break;
    case 14:
        cout<<"\n\n(1):B.Tech. LE (CHE) 3 yrs(6 semester)"
        //<<"\n(2):B.Tech. (Hons.) (ECE) 4 yrs(8 semester)"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tCHE-Petroleum (CHE) (Engg.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("EnggDetails.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggDetails.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("EnggFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
            default:
                cout<<"\nBetterr Luck next time";
        }
        break;
    case 15:
        cout<<"\n\n(1):B.Tech. LE (FT) 3 yrs(6 semester)"
        //<<"\n(2):B.Tech. (Hons.) (ECE) 4 yrs(8 semester)"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tFood Technology (FT) (Engg.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("EnggDetails.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggDetails.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("EnggFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
            default:
                cout<<"\nBetterr Luck next time";
        }
        break;
    case 16:
        cout<<"\n\n(1): BBA LE 2 yrs.(4 Semesters)"
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tBACHELOR Of BUSINESS ADMINISTRATION\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:

                  cout<<"\nThis programme trains students in key business principles and helps them master management\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 50% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 17:
        cout<<"\n\n(1): B DEsign LE 3 yrs.(6 Semesters)"
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tBACHELOR OF DESIGN IN FASHION\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:

                  cout<<"\nThis programme trains students in key business principles and helps them master management\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 50% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFeeht.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFeeht.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 18:
        cout<<"\n\n(1): BACHELOR OF HOTEL MANAGEMENT AND CATERING TECHNOLOGY LE 3 yrs.(6 Semesters)"
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tBACHELOR OF HOTEL MANAGEMENT AND CATERING TECHNOLOGY\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:

                  cout<<"\nThis programme trains students in key business principles and helps them master management\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 50% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFeeht.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFeeht.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 19:
        cout<<"\n\n(1): BACHELOR OF DESIGN IN FASHION LE 3 yrs.(6 Semesters)"
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tBACHELOR OF DESIGN IN FASHION\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:

                  cout<<"\nThis programme trains students in key business principles and helps them master management\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 50% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFeeht.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFeeht.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 20:
        cout<<"\n\n(1): B.SC. - MEDICAL LAB TECHNOLOGY LE 2 yrs.(4 Semesters)"
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tB.SC. - MEDICAL LAB TECHNOLOGY\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                  cout<<"\nThis programme trains students in key business principles and helps them master management\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 50% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 21:
        cout<<"\n\n(1): B.ARCH LE 4yrs.(8 Semesters)"
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tB.ARCH\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                  cout<<"\nC.O.A approved professional degree offering elite architectural education nourishing students with designing and software\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 60% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("EnggFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 22:
            cout<<"\n\n(1): BCA -BACHELOR OF COMPUTER APPLICATION LE 2yrs.(4 Semesters)"
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tBCA -BACHELOR OF COMPUTER APPLICATION\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                  cout<<"\nConstructing strong basic foundation in concepts of computer sciences and inculcating the\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 60% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
            break;
    case 23:
        cout<<"\n\n(1): B.A.- BACHELOR OF ARTS LE 2yrs.(4 Semesters)"
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tB.A.- BACHELOR OF ARTS\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                  cout<<"\nConstructing strong basic foundation in concepts of arts(humanities) and inculcating the\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 60% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 24:
        cout<<"\n\n(1): BACHELOR OF SCIENCE (HONS.) MATHEMATICS LE 2yrs.(4 Semesters)"
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tBACHELOR OF SCIENCE (HONS.) MATHEMATICS\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                  cout<<"\nConstructing strong basic foundation in concepts of mathematics and inculcating the\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 60% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
            break;
    case 25:
        cout<<"\n\n(1): BACHELOR OF COMMERECE LE 2yrs.(4 Semesters)"
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tBACHELOR OF COMMERECE\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                  cout<<"\nConstructing strong basic foundation in concepts of business and inculcating the\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 60% aggregate marks in 12th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("BachelorFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"BachelorFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar12(i);
                break;
            case 4:
                fin.open("EnggProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"EnggProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
            break;


    default:
        cout<<"\nBetter luck next time";
    }
}
void login::calcscholardp(int a)
{
    system("cls");
    int s[34];
    for(int i=0;i<34;i++)
        s[i]=0;
    int c;
    char ch;
    //cout<<"\nhello ";
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
                s[0]=50000;
                break;
            case 2:
                s[0]=40000;
                break;
            case 3:
                s[0]=30000;
                break;
            case 4:
                s[0]=75000;
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
    if(c>=90&&c<98)
        s[1]=50000;
    else if(c>=80&&c<90)
        s[1]=40000;
    else if(c>=70&&c<80)
        s[1]=30000;
    else if(c>=98)
        s[1]=75000;
    else
        s[1]=0;
    system("cls");
    cout<<"\nHave you given any National Level Test? y/n"
    <<"\n\nENter choice: ";
    cin>>ch;
    if(ch=='y')
    {
        cout<<"Enter your percentage without % symbol(in integer only) : ";
        cin>>c;
       if(c>=90)
        s[5]=50000;
       else if(c>=80&&c<90)
        s[5]=40000;
       else if(c>=70&&c<80)
        s[5]=30000;
       else
        s[5]=0;
    }
    system("cls");
    cout<<"\nHave you Earned Sports, Cultural, R&D, Co-curricular,"
    <<" Social Service, Bravery Awards?  y/n"
    <<"\n\nENter choice: ";
    cin>>ch;
    if(ch=='y')
    {
        system("cls");
        cout<<"\nHave you played International Sports Championship?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"\n\nENter Your Grade: ";
            cin>>ch;
            if(ch=='A'||ch=='a'){
                cout<<"\n\na) Full Programme Fee waiver"
                 <<"\nb) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"\nc) Free Meal Plan (Standard Meal)";
                 //break;
                 s[2]=94500;
            }
            if(ch=='B'||ch=='b'){
                s[2]=50000;
                cout<<"\na) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"b) Free Meal Plan (Standard Meal)"
                 <<"\nc) Scholarship on Programme Fee equivalent to amount awarded to Student"
                 <<" scoring >=90% in elig. Qualification"
                 <<"\nFor Engg That is 50000 INR per semester ";
                 //break;
                }
             if(ch=='C'||ch=='c')
                s[2]=40000;
             if(ch=='D'||ch=='d')
                s[2]=30000;
            Sleep( 5000 );

        }
        system("cls");
        cout<<"\nHave you played National Sports championship/Inter University Sports Competition?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"\n\nENter Your Grade: ";
            cin>>ch;
            if(ch=='A'||ch=='a'){
                    s[2]=94500;
                cout<<"\n\na) Full Programme Fee waiver"
                 <<"\nb) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"\nc) Free Meal Plan (Standard Meal)";
                 //break;
            }
            if(ch=='B'||ch=='b'){
                s[2]=50000;
                cout<<"\na) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"b) Free Meal Plan (Standard Meal)"
                 <<"\nc) Scholarship on Programme Fee equivalent to amount awarded to Student"
                 <<" scoring >=90% in elig. Qualification"
                 <<"\nFor Engg That is 50000 INR per semester ";
                // break;
                }
             if(ch=='C'||ch=='c')
                s[2]=40000;
             if(ch=='D'||ch=='d')
                s[2]=30000;
            Sleep( 5000 );
        }
        system("cls");
        cout<<"\nHave you played State Sports Championship?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"\n\nENter Your Grade: ";
            cin>>ch;
            if(ch=='A'||ch=='a'){
                cout<<"\na) Full Programme Fee waiver"
                 <<"\nb) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"c) Free Meal Plan (Standard Meal)";
                // break;
                s[2]=94500;
            }
            if(ch=='B'||ch=='b'){
                s[2]=50000;
                cout<<"\na) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"b) Free Meal Plan (Standard Meal)"
                 <<"\nc) Scholarship on Programme Fee equivalent to amount awarded to Student"
                 <<" scoring >=90% in elig. Qualification"
                 <<"\nFor Engg That is 50000 INR per semester ";
                // break;
                }
             if(ch=='C'||ch=='c')
                s[2]=40000;
             if(ch=='D'||ch=='d')
                s[2]=30000;

            Sleep( 5000 );
        }
        system("cls");
        cout<<"\nHave you played School Boards Tournaments?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"\n\nENter Your Grade: ";
            cin>>ch;
            if(ch=='A'||ch=='a'){
                cout<<"\na) Full Programme Fee waiver"
                 <<"\nb) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"c) Free Meal Plan (Standard Meal)";
                // break;
                s[2]=94500;
            }
            if(ch=='B'||ch=='b'){
                s[2]=50000;
                cout<<"\na) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"b) Free Meal Plan (Standard Meal)"
                 <<"\nc) Scholarship on Programme Fee equivalent to amount awarded to Student"
                 <<" scoring >=90% in elig. Qualification"
                 <<"\nFor Engg That is 50000 INR per semester ";
                // break;
                }
             if(ch=='C'||ch=='c')
                s[2]=40000;
             if(ch=='D'||ch=='d')
                s[2]=30000;
            Sleep( 5000 );
        }
        system("cls");
        cout<<"\nHave you played TABS - Trial / Audition Based Scholarship*?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"\n\nENter Your Grade: ";
            cin>>ch;
            if(ch=='A'||ch=='a'){
                cout<<"\na) Full Programme Fee waiver"
                 <<"\nb) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"c) Free Meal Plan (Standard Meal)";
                // break;
                s[2]=94500;
            }
            if(ch=='B'||ch=='b'){
                s[2]=50000;
                cout<<"\na) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"b) Free Meal Plan (Standard Meal)"
                 <<"\nc) Scholarship on Programme Fee equivalent to amount awarded to Student"
                 <<" scoring >=90% in elig. Qualification"
                 <<"\nFor Engg That is 50000 INR per semester ";
                // break;
                }
             if(ch=='C'||ch=='c')
                s[2]=40000;
             if(ch=='D'||ch=='d')
                s[2]=30000;
            Sleep( 5000 );
        }
        system("cls");
        cout<<"\nHave you performed for International Festivals?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"\n\nENter Your Grade: ";
            cin>>ch;
            if(ch=='A'||ch=='a'){
                cout<<"\na) Full Programme Fee waiver"
                 <<"\nb) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"c) Free Meal Plan (Standard Meal)";
                // break;
                s[2]=94500;
            }
            if(ch=='B'||ch=='b'){
                s[2]=50000;
                cout<<"\na) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"b) Free Meal Plan (Standard Meal)"
                 <<"\nc) Scholarship on Programme Fee equivalent to amount awarded to Student"
                 <<" scoring >=90% in elig. Qualification"
                 <<"\nFor Engg That is 50000 INR per semester ";
                // break;
                }
             if(ch=='C'||ch=='c')
                s[2]=40000;
             if(ch=='D'||ch=='d')
                s[2]=30000;
            Sleep( 5000 );
        }
        system("cls");
        cout<<"\nHave you performed for National Youth Festivals/ Inter University Youth Festivals?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"\n\nENter Your Grade: ";
            cin>>ch;
            if(ch=='A'||ch=='a'){
                cout<<"\na) Full Programme Fee waiver"
                 <<"\nb) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"c) Free Meal Plan (Standard Meal)";
                // break;
                s[2]=94500;
            }
            if(ch=='B'||ch=='b'){
                s[2]=50000;
                cout<<"\na) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"b) Free Meal Plan (Standard Meal)"
                 <<"\nc) Scholarship on Programme Fee equivalent to amount awarded to Student"
                 <<" scoring >=90% in elig. Qualification"
                 <<"\nFor Engg That is 50000 INR per semester ";
                // break;
                }
             if(ch=='C'||ch=='c')
                s[2]=40000;
             if(ch=='D'||ch=='d')
                s[2]=30000;
            Sleep( 5000 );
        }
        system("cls");
        cout<<"\nHave you performed for Central/ State level Cultural Festivals?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"\n\nENter Your Grade: ";
            cin>>ch;
            if(ch=='A'||ch=='a'){
                cout<<"\na) Full Programme Fee waiver"
                 <<"\nb) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"c) Free Meal Plan (Standard Meal)";
                // break;
                s[2]=94500;
            }
            if(ch=='B'||ch=='b'){
                s[2]=50000;
                cout<<"\na) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"b) Free Meal Plan (Standard Meal)"
                 <<"\nc) Scholarship on Programme Fee equivalent to amount awarded to Student"
                 <<" scoring >=90% in elig. Qualification"
                 <<"\nFor Engg That is 50000 INR per semester ";
                // break;
                }
             if(ch=='C'||ch=='c')
                s[2]=40000;
             if(ch=='D'||ch=='d')
                s[2]=30000;
            Sleep( 5000 );
        }
        system("cls");
        cout<<"\nHave you performed for Chacha Nehru Scholarship or Bal Shree Award?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"\n\nENter Your Grade: ";
            cin>>ch;
            if(ch=='A'||ch=='a'){
                cout<<"\na) Full Programme Fee waiver"
                 <<"\nb) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"c) Free Meal Plan (Standard Meal)";
                // break;
                s[2]=94500;
            }
            if(ch=='B'||ch=='b'){
                s[2]=50000;
                cout<<"\na) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"b) Free Meal Plan (Standard Meal)"
                 <<"\nc) Scholarship on Programme Fee equivalent to amount awarded to Student"
                 <<" scoring >=90% in elig. Qualification"
                 <<"\nFor Engg That is 50000 INR per semester ";
                // break;
                }
             if(ch=='C'||ch=='c')
                s[2]=40000;
             if(ch=='D'||ch=='d')
                s[2]=30000;
            Sleep( 5000 );
        }
        system("cls");
        cout<<"\nHave you performed for Student Science Exhibition/ Drama/ Quiz or National Talent Search Certificate?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"\n\nENter Your Grade: ";
            cin>>ch;
            if(ch=='A'||ch=='a'){
                cout<<"\na) Full Programme Fee waiver"
                 <<"\nb) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"c) Free Meal Plan (Standard Meal)";
                // break;
                s[2]=94500;
            }
            if(ch=='B'||ch=='b'){
                s[2]=50000;
                cout<<"\na) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"b) Free Meal Plan (Standard Meal)"
                 <<"\nc) Scholarship on Programme Fee equivalent to amount awarded to Student"
                 <<" scoring >=90% in elig. Qualification"
                 <<"\nFor Engg That is 50000 INR per semester ";
                // break;
                }
             if(ch=='C'||ch=='c')
                s[2]=40000;
             if(ch=='D'||ch=='d')
                s[2]=30000;
            Sleep( 5000 );
        }
        system("cls");
        cout<<"\nHave you performed for Research and Development/ Co-curricular or Online & Corporate Competion or \nTABS - Trial / Audition Based Scholarship *?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"\n\nENter Your Grade: ";
            cin>>ch;
            if(ch=='A'||ch=='a'){
                cout<<"\na) Full Programme Fee waiver"
                 <<"\nb) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"c) Free Meal Plan (Standard Meal)";
                // break;
                s[2]=94500;
            }
            if(ch=='B'||ch=='b'){
                s[2]=50000;
                cout<<"\na) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"b) Free Meal Plan (Standard Meal)"
                 <<"\nc) Scholarship on Programme Fee equivalent to amount awarded to Student"
                 <<" scoring >=90% in elig. Qualification"
                 <<"\nFor Engg That is 50000 INR per semester ";
                // break;
                }
             if(ch=='C'||ch=='c')
                s[2]=40000;
             if(ch=='D'||ch=='d')
                s[2]=30000;
            Sleep( 5000 );
        }
        system("cls");
        cout<<"\nHave you been part of National Service Scheme (NSS) or National Cadet Core Scheme (NCC)?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"\n\nENter Your Grade: ";
            cin>>ch;
            if(ch=='A'||ch=='a'){
                cout<<"\na) Full Programme Fee waiver"
                 <<"\nb) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"\nc) Free Meal Plan (Standard Meal)";
                // break;
                s[2]=94500;
            }
            if(ch=='B'||ch=='b'){
                s[2]=50000;
                cout<<"\na) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"b) Free Meal Plan (Standard Meal)"
                 <<"\nc) Scholarship on Programme Fee equivalent to amount awarded to Student"
                 <<" scoring >=90% in elig. Qualification"
                 <<"\nFor Engg That is 50000 INR per semester ";
                // break;
                }
             if(ch=='C'||ch=='c')
                s[2]=40000;
             if(ch=='D'||ch=='d')
                s[2]=30000;

            Sleep( 5000 );
        }
        system("cls");
        cout<<"\nHave you been part of National Bravery Award or Scouts & Guides or Red Cross Activities?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"\n\nENter Your Grade: ";
            cin>>ch;
            if(ch=='A'||ch=='a'){
                cout<<"\na) Full Programme Fee waiver"
                 <<"\nb) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"c) Free Meal Plan (Standard Meal)";
                // break;
                s[2]=94500;
            }
            if(ch=='B'||ch=='b'){
                s[2]=50000;
                cout<<"\na) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"b) Free Meal Plan (Standard Meal)"
                 <<"\nc) Scholarship on Programme Fee equivalent to amount awarded to Student"
                 <<" scoring >=90% in elig. Qualification"
                 <<"\nFor Engg That is 50000 INR per semester ";
                // break;
                }
             if(ch=='C'||ch=='c')
                s[2]=40000;
             if(ch=='D'||ch=='d')
                s[2]=30000;
            Sleep( 5000 );
        }
    }
    system("cls");
    cout<<"\n\nAre you ward of Defence, CAPF personnel and their dependants?  y/n"
    <<"\n\nENter choice: ";
    cin>>ch;
    if(ch=='y')
    {
        system("cls");
        cout<<"\nHave your father have recieved any Gallantry Awards?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y'){
            s[3]=50000;
        }
        cout<<"\nARe your father Serving Officers - nominated through study leave?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y'){
            s[3]=40000;
        }
        else
            s[3]=30000;
    }
    system("cls");
    cout<<"\n\nAre you Topper of your education board?  y/n"
    <<"\n\nENter choice: ";
    cin>>ch;
    if(ch=='y')
    {
        cout<<"\nFull Programme Fee waiver, and"
        <<"\nFree Stay in four seater room (Air Cooled Room) in Residential Facility"
        <<"\nOr\nFree Transport Facility.";
        Sleep(5000);
        s[4]=94500;
    }
    system("cls");
    cout<<"\n\nAre you Orphan?  y/n"
    <<"\n\nENter choice: ";
    cin>>ch;
    if(ch=='y')
    {
        cout<<"\nWith a view to facilitate access to higher education to orphan students,"
        <<" LPU offers a special scholarship scheme\n of Full programme fee waiver in the "
        <<"programmes as per Annexure mentioned below.\n The scholarship will be given to a"
        <<" maximum of 10 students on first come first\n serve basis subject to maximum of "
        <<"two candidates from one orphanage / organization."
        <<"\nLets see if you are lucky!!";
        Sleep(7000);
        s[6]=94500;
    }
    system("cls");
    cout<<"\n\nAre You person with certain disability*?   y/n"
    <<"\n\nENter choice: ";
    cin>>ch;
    if(ch=='y')
    {
        cout<<"\nWith a view to facilitate access to Higher Education to the persons"
        <<" with benchmark disability and Locomotor\n disability caused by Spinal Cord"
        <<" Injury. LPU offers a special scholarship scheme of Full programme fee\n"
        <<" waiver to the Persons with Disability in the programmes as per Annexure"
        <<" mentioned below.\n The scholarship will be given to a maximum of 20 students"
        <<" on first come basis. ";
        s[7]=94500;
        Sleep(7000);
    }int l=s[0];


    for(int i=0;i<8;i++)
    {
        if(l<s[i])
            l=s[i];
    }
    if(a>=16)
    {
        switch(a)
        {
        case 19:
        case 20:
            if(l==94500)
                l=64500;
            else if(l==75000)
                l=40000;
            else if(l==50000)
                l=30000;
            else if(l==40000)
                l=20000;
            else if(l==30000)
                l=15000;
                break;
        case 16:
        case 17:
        case 18:
        //case 21:
        case 22:
        case 23:
        case 24:
        case 25:
            if(l==94500)
                l=49500;
            else if(l==75000)
                l=30000;
            else if(l==50000)
                l=20000;
            else if(l==40000)
                l=15000;
            else if(l==30000)
                l=10000;
            break;
        default:
            cout<<"\nUnknown Error";
        }
    }
    switch(a)
        {
        case 19:
        case 20:
               system("cls");
    cout<<"Congratulations the applicable scholarship for you is: "<<l<<" INR(per semester)"
    <<"\n\nThe fees applicable after scholarship is :"<<64500-l<<" INR(per semester)*"
    <<"\n\n\n*Note:The fees shown here are excluding examination fees.";
            break;
        case 16:
        case 17:
        case 18:
        //case 21:
        case 22:
        case 23:
        case 24:
        case 25:
            system("cls");
    cout<<"Congratulations the applicable scholarship for you is: "<<l<<" INR(per semester)"
    <<"\n\nThe fees applicable after scholarship is :"<<49500-l<<" INR(per semester)*"
    <<"\n\n\n*Note:The fees shown here are excluding examination fees.";
            break;
        default:
            system("cls");
    cout<<"Congratulations the applicable scholarship for you is: "<<l<<" INR(per semester)"
    <<"\n\nThe fees applicable after scholarship is :"<<94500-l<<" INR(per semester)*"
    <<"\n\n\n*Note:The fees shown here are excluding examination fees.";
        }
}
void login::course10(int i)
{
    string s;
    system("cls");
    int ch,chi;
    ifstream fin;
    switch(i)
    {
    case 1:
        cout<<"\n\n(1): Diploma(Engg.)  3 yrs.(6 Semesters)ECE"
        <<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)ECE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tDiploma (Engg.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("DiplomaDetailsece.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaDetailsece.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("DiplomaFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar10(i);
                break;
            case 4:
                fin.open("DiplomaProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;
        case 2:
            system("cls");
            cout<<"\n\t\t\t\tDiploma (Engg.) 6 yrs\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("DiplomaDetailsece.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaDetailsece.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("DiplomaFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar10(i);
                break;
            case 4:
                fin.open("DiplomaProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 2:
        cout<<"\n\n(1): Diploma(Engg.)  3 yrs.(6 Semesters)EE"
        <<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)EE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tDiploma (Engg.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("DiplomaDetailsece.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaDetailsece.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("DiplomaFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar10(i);
                break;
            case 4:
                fin.open("DiplomaProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;
        case 2:
            system("cls");
            cout<<"\n\t\t\t\tDiploma (Engg.) 6 yrs\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("DiplomaDetailsece.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaDetailsece.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("DiplomaFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar10(i);
                break;
            case 4:
                fin.open("DiplomaProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 3:
        cout<<"\n\n(1): Diploma(Engg.)  3 yrs.(6 Semesters)CSE"
        <<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CSE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tDiploma (Engg.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("DiplomaDetailscse.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaDetailscse.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("DiplomaFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar10(i);
                break;
            case 4:
                fin.open("DiplomaProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;
        case 2:
            system("cls");
            cout<<"\n\t\t\t\tDiploma (Engg.) 6 yrs\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("DiplomaDetailscse.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaDetailscse.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("DiplomaFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar10(i);
                break;
            case 4:
                fin.open("DiplomaProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 4:
        cout<<"\n\n(1): Diploma(Engg.)  3 yrs.(6 Semesters)ME"
        <<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)ME"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tDiploma (Engg.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("DiplomaDetailsece.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaDetailsece.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("DiplomaFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar10(i);
                break;
            case 4:
                fin.open("DiplomaProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;
        case 2:
            system("cls");
            cout<<"\n\t\t\t\tDiploma (Engg.) 6 yrs\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("DiplomaDetailsece.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaDetailsece.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("DiplomaFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar10(i);
                break;
            case 4:
                fin.open("DiplomaProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 5:
        cout<<"\n\n(1): Diploma(Engg.)  3 yrs.(6 Semesters)AE"
        <<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)AE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tDiploma (Engg.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("DiplomaDetailsece.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaDetailsece.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("DiplomaFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar10(i);
                break;
            case 4:
                fin.open("DiplomaProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;
        case 2:
            system("cls");
            cout<<"\n\t\t\t\tDiploma (Engg.) 6 yrs\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("DiplomaDetailsece.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaDetailsece.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("DiplomaFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar10(i);
                break;
            case 4:
                fin.open("DiplomaProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 6:
        cout<<"\n\n(1): Diploma(Engg.)  3 yrs.(6 Semesters)CE"
        <<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tDiploma (Engg.)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("DiplomaDetailsece.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaDetailsece.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("DiplomaFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar10(i);
                break;
            case 4:
                fin.open("DiplomaProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;
        case 2:
            system("cls");
            cout<<"\n\t\t\t\tDiploma (Engg.) 6 yrs\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                fin.open("DiplomaDetailsece.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaDetailsece.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            case 2:
                fin.open("DiplomaFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar10(i);
                break;
            case 4:
                fin.open("DiplomaProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 7:
        cout<<"\n\n(1): Diploma In Business Administration 3 yrs.(6 Semesters)"
        //<<"\n(2): Dual Programme Diploma (Engg.) - B.Tech.  6 yrs(12 Semesters)CE"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tDiploma In Business Administration\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:

                  cout<<"\nThis programme trains students in key business principles and helps them master management\n"
                  <<" skills required at function level.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 50% aggregate marks in 10th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;

                break;
            case 2:
                fin.open("DiplomaFeemng.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaFeemng.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar10(i);
                break;
            case 4:
                fin.open("DiplomaProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;

        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 8:
        cout<<"\n\n(1): Diploma in Fashion DEsign  3 yrs.(6 Semesters)"
        <<"\n(2): Dual Programme Diploma in Fashion DEsign - B.Design(Fashion).  6 yrs(12 Semesters)"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tDiploma in Fashion DEsign\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                cout<<"\nProgramme DetailsThe students get a clear perspective of fashion design while learning pattern\n"
                <<" making and garment construction in this hands-on program."
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 50% aggregate marks in 10th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;
                break;
            case 2:
                fin.open("DiplomaFeemng.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaFeemng.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar10(i);
                break;
            case 4:
                fin.open("DiplomaProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;
        case 2:
            system("cls");
            cout<<"\n\t\t\t\tDiploma in Fashion DEsign 6 yrs\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                cout<<"\nProgramme DetailsThe students get a clear perspective of fashion design while learning pattern\n"
                <<" making and garment construction in this hands-on program."
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 50% aggregate marks in 10th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;
                break;
            case 2:
                fin.open("DiplomaFeemng.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaFeemng.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar10(i);
                break;
            case 4:
                fin.open("DiplomaProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 9:
        cout<<"\n\n(1): Diploma in Food Production  1 yrs.(2 Semesters)"
        <<"\n(2): Diploma in Bakery and Confectionary  1 yrs(2 Semesters)"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tDiploma in Food Production\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                cout<<"\nStudents aspiring to become chefs or entrepreneurs can pursue the specialized course\n"
                <<" providing intensive training in culinary arts.\n"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 50% aggregate marks in 10th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;
                break;
            case 2:
                fin.open("DiplomaFeeht.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaFeeht.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar10(i);
                break;
            case 4:
                fin.open("DiplomaProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;
        case 2:
            system("cls");
            cout<<"\n\t\t\t\tDiploma in Bakery and Confectionary 1 yrs\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                cout<<"\nStudents aspiring to become chefs or entrepreneurs can pursue the specialized\n"
                <<" course providing intensive training in bakery and confectionary."
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 50% aggregate marks in 10th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;
                break;
            case 2:
                fin.open("DiplomaFeeht.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaFeeht.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar10(i);
                break;
            case 4:
                fin.open("DiplomaProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 10:
        cout<<"\n\n(1): Diploma in Medical Lab. Technology (DMLT)  3 yrs.(6 Semesters)"
        <<"\n(2): Dual Programme DMLT - B.Sc. (Medical Lab. Technology)  5 yrs(10 Semesters)"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tDiploma in Medical Lab. Technology (DMLT)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                cout<<"\nThis program is aimed to equip the students with basic skills to diagnose\n"
                <<" disease through the use of clinical laboratory tests. The students turn out\n"
                <<" ready for career in the diagnostics labs"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 50% aggregate marks in 10th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;
                break;
            case 2:
                fin.open("DiplomaFeemng.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaFeemng.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar10(i);
                break;
            case 4:
                fin.open("DiplomaProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;
        case 2:
            system("cls");
            cout<<"\n\t\t\t\tDual Programme DMLT - B.Sc. (Medical Lab. Technology)  5 yrs\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                cout<<"\nThis program is aimed to equip the students with basic skills to diagnose\n"
                <<" disease through the use of clinical laboratory tests. The students turn out\n"
                <<" ready for career in the diagnostics labs"
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 50% aggregate marks in 10th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;
                break;
            case 2:
                fin.open("DiplomaFeemng.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaFeemng.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar10(i);
                break;
            case 4:
                fin.open("DiplomaProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
        default:
            cout<<"\nBetterr Luck next time";
        }
        break;
    case 11:
        cout<<"\n\n(1): Diploma in Architectural Assistantship  3 yrs.(6 Semesters)"
        <<"\n(2): Dual Programme Diploma in Architectural Assistantship – B.Design (Interior and Furniture)  6 yrs(12 Semesters)"
        <<"\n\nEnter choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"\n\t\t\t\tDiploma in Architectural Assistantship (DMLT)\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                cout<<"\nThe program deals with the application of design skills for building projects and its interiors."
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 50% aggregate marks in 10th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;
                break;
            case 2:
                fin.open("DiplomaFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar10(i);
                break;
            case 4:
                fin.open("DiplomaProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }

            break;
        case 2:
            system("cls");
            cout<<"\n\t\t\t\tDual Programme Diploma in Architectural Assistantship – B.Design (Interior and Furniture)  6 yrs\n\n\n(1): Programme Details"
            <<"\n(2): FEE\n(3): SCHOLARSHIP\n(4): Career Prospects / Salient Features"
            <<"\n\nEnter choice : ";
            cin>>chi;
            switch(chi)
            {
            case 1:
                cout<<"\nThe program deals with the application of design skills for building projects and its interiors."
                  <<"\nEligibility Criteria (Qualifying Exam)\n"
                  <<"Pass with 50% aggregate marks in 10th (with English) or equivalent.\n"
                  <<"For a candidate, who has not studied English as a subject, the condition of English may"
                  <<" be waived off provided the candidate in his qualifying exam has studied in English medium. "<<endl;
                break;
            case 2:
                fin.open("DiplomaFee.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaFee.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }

                break;
            case 3:
                cout<<"\n\t\t\t\tScholarship"
                <<"\n\n\n";
                calcscholar10(i);
                break;
            case 4:
                fin.open("DiplomaProspectus.txt",ios::in);
                 if(fin.eof())
                 {
                   cout<<"\nError Opening file \"DiplomaProspectus.txt\"";
                 }
                 else{
                 while(!fin.eof())
                 {
                  getline(fin,s);
                  cout<<"\n"<<s<<endl;
                 }
                 }
                break;
            default:
                cout<<"\nSorry! You are wrong";
            }
            break;
        default:
            cout<<"\nBetterr Luck next time";
        }
        break;

    default:
        cout<<"Better luck next time";
    }

}
void login::calcscholar10(int a)
{
    system("cls");
    int s[8]={0,0,0,0,0,0,0,0};
    int c;
    char ch;
    //cout<<"\nhello ";
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
                s[0]=15000;
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
    if(c>=90)
        s[1]=15000;
    else if(c>=80&&c<90)
        s[1]=10000;
    else if(c>=70&&c<80)
        s[1]=5000;
    else
        s[1]=0;
    system("cls");
    cout<<"\nHave you given any National Level Test? y/n"
    <<"\n\nENter choice: ";
    cin>>ch;
    if(ch=='y')
    {
        cout<<"Enter your percentage without % symbol(in integer only) : ";
        cin>>c;
       if(c>=90)
        s[5]=15000;
       else if(c>=80&&c<90)
        s[5]=10000;
       else if(c>=70&&c<80)
        s[5]=5000;
       else
        s[5]=0;
    }
    system("cls");
    cout<<"\nHave you Earned Sports, Cultural, R&D, Co-curricular,"
    <<" Social Service, Bravery Awards?  y/n"
    <<"\n\nENter choice: ";
    cin>>ch;
    if(ch=='y')
    {
        system("cls");
        cout<<"\nHave you played International Sports Championship?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"\n\nENter Your Grade: ";
            cin>>ch;
            if(ch=='A'||ch=='a'){
                cout<<"\n\na) Full Programme Fee waiver"
                 <<"\nb) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"\nc) Free Meal Plan (Standard Meal)";
                 //break;
            }
            if(ch=='B'||ch=='b'){
                s[2]=15000;
                cout<<"\na) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"b) Free Meal Plan (Standard Meal)"
                 <<"\nc) Scholarship on Programme Fee equivalent to amount awarded to Student"
                 <<" scoring >=90% in elig. Qualification"
                 <<"\nFor Diploma That is 15000 INR per semester ";
                 //break;
                }
             if(ch=='C'||ch=='c')
                s[2]=10000;
             if(ch=='D'||ch=='d')
                s[2]=5000;
            Sleep( 5000 );

        }
        system("cls");
        cout<<"\nHave you played National Sports championship/Inter University Sports Competition?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"\n\nENter Your Grade: ";
            cin>>ch;
            if(ch=='A'||ch=='a'){
                    s[2]=29500;
                cout<<"\n\na) Full Programme Fee waiver"
                 <<"\nb) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"\nc) Free Meal Plan (Standard Meal)";
                 //break;
            }
            if(ch=='B'||ch=='b'){
                s[2]=15000;
                cout<<"\na) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"b) Free Meal Plan (Standard Meal)"
                 <<"\nc) Scholarship on Programme Fee equivalent to amount awarded to Student"
                 <<" scoring >=90% in elig. Qualification"
                 <<"\nFor Diploma That is 15000 INR per semester ";
                // break;
                }
             if(ch=='C'||ch=='c')
                s[2]=10000;
             if(ch=='D'||ch=='d')
                s[2]=5000;
            Sleep( 5000 );
        }
        system("cls");
        cout<<"\nHave you played State Sports Championship?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"\n\nENter Your Grade: ";
            cin>>ch;
            if(ch=='A'||ch=='a'){
                cout<<"\na) Full Programme Fee waiver"
                 <<"\nb) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"c) Free Meal Plan (Standard Meal)";
                // break;
            }
            if(ch=='B'||ch=='b'){
                s[2]=15000;
                cout<<"\na) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"b) Free Meal Plan (Standard Meal)"
                 <<"\nc) Scholarship on Programme Fee equivalent to amount awarded to Student"
                 <<" scoring >=90% in elig. Qualification"
                 <<"\nFor Diploma That is 15000 INR per semester ";
                // break;
                }
             if(ch=='C'||ch=='c')
                s[2]=10000;
             if(ch=='D'||ch=='d')
                s[2]=5000;

            Sleep( 5000 );
        }
        system("cls");
        cout<<"\nHave you played School Boards Tournaments?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"\n\nENter Your Grade: ";
            cin>>ch;
            if(ch=='A'||ch=='a'){
                cout<<"\na) Full Programme Fee waiver"
                 <<"\nb) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"c) Free Meal Plan (Standard Meal)";
                // break;
            }
            if(ch=='B'||ch=='b'){
                s[2]=15000;
                cout<<"\na) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"b) Free Meal Plan (Standard Meal)"
                 <<"\nc) Scholarship on Programme Fee equivalent to amount awarded to Student"
                 <<" scoring >=90% in elig. Qualification"
                 <<"\nFor Diploma That is 15000 INR per semester ";
                // break;
                }
             if(ch=='C'||ch=='c')
                s[2]=10000;
             if(ch=='D'||ch=='d')
                s[2]=5000;
            Sleep( 5000 );
        }
        system("cls");
        cout<<"\nHave you played TABS - Trial / Audition Based Scholarship*?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"\n\nENter Your Grade: ";
            cin>>ch;
            if(ch=='A'||ch=='a'){
                cout<<"\na) Full Programme Fee waiver"
                 <<"\nb) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"c) Free Meal Plan (Standard Meal)";
                // break;
            }
            if(ch=='B'||ch=='b'){
                s[2]=15000;
                cout<<"\na) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"b) Free Meal Plan (Standard Meal)"
                 <<"\nc) Scholarship on Programme Fee equivalent to amount awarded to Student"
                 <<" scoring >=90% in elig. Qualification"
                 <<"\nFor Diploma That is 15000 INR per semester ";
                // break;
                }
             if(ch=='C'||ch=='c')
                s[2]=10000;
             if(ch=='D'||ch=='d')
                s[2]=5000;
            Sleep( 5000 );
        }
        system("cls");
        cout<<"\nHave you performed for International Festivals?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"\n\nENter Your Grade: ";
            cin>>ch;
            if(ch=='A'||ch=='a'){
                cout<<"\na) Full Programme Fee waiver"
                 <<"\nb) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"c) Free Meal Plan (Standard Meal)";
                // break;
            }
            if(ch=='B'||ch=='b'){
                s[2]=15000;
                cout<<"\na) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"b) Free Meal Plan (Standard Meal)"
                 <<"\nc) Scholarship on Programme Fee equivalent to amount awarded to Student"
                 <<" scoring >=90% in elig. Qualification"
                 <<"\nFor Diploma That is 15000 INR per semester ";
                // break;
                }
             if(ch=='C'||ch=='c')
                s[2]=10000;
             if(ch=='D'||ch=='d')
                s[2]=5000;
            Sleep( 5000 );
        }
        system("cls");
        cout<<"\nHave you performed for National Youth Festivals/ Inter University Youth Festivals?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"\n\nENter Your Grade: ";
            cin>>ch;
            if(ch=='A'||ch=='a'){
                cout<<"\na) Full Programme Fee waiver"
                 <<"\nb) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"c) Free Meal Plan (Standard Meal)";
                // break;
            }
            if(ch=='B'||ch=='b'){
                s[2]=15000;
                cout<<"\na) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"b) Free Meal Plan (Standard Meal)"
                 <<"\nc) Scholarship on Programme Fee equivalent to amount awarded to Student"
                 <<" scoring >=90% in elig. Qualification"
                 <<"\nFor Diploma That is 15000 INR per semester ";
                // break;
                }
             if(ch=='C'||ch=='c')
                s[2]=10000;
             if(ch=='D'||ch=='d')
                s[2]=5000;
            Sleep( 5000 );
        }
        system("cls");
        cout<<"\nHave you performed for Central/ State level Cultural Festivals?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"\n\nENter Your Grade: ";
            cin>>ch;
            if(ch=='A'||ch=='a'){
                cout<<"\na) Full Programme Fee waiver"
                 <<"\nb) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"c) Free Meal Plan (Standard Meal)";
                // break;
            }
            if(ch=='B'||ch=='b'){
                s[2]=15000;
                cout<<"\na) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"b) Free Meal Plan (Standard Meal)"
                 <<"\nc) Scholarship on Programme Fee equivalent to amount awarded to Student"
                 <<" scoring >=90% in elig. Qualification"
                 <<"\nFor Diploma That is 15000 INR per semester ";
                // break;
                }
             if(ch=='C'||ch=='c')
                s[2]=10000;
             if(ch=='D'||ch=='d')
                s[2]=5000;
            Sleep( 5000 );
        }
        system("cls");
        cout<<"\nHave you performed for Chacha Nehru Scholarship or Bal Shree Award?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"\n\nENter Your Grade: ";
            cin>>ch;
            if(ch=='A'||ch=='a'){
                cout<<"\na) Full Programme Fee waiver"
                 <<"\nb) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"c) Free Meal Plan (Standard Meal)";
                // break;
            }
            if(ch=='B'||ch=='b'){
                s[2]=15000;
                cout<<"\na) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"b) Free Meal Plan (Standard Meal)"
                 <<"\nc) Scholarship on Programme Fee equivalent to amount awarded to Student"
                 <<" scoring >=90% in elig. Qualification"
                 <<"\nFor Diploma That is 15000 INR per semester ";
                // break;
                }
             if(ch=='C'||ch=='c')
                s[2]=10000;
             if(ch=='D'||ch=='d')
                s[2]=5000;
            Sleep( 5000 );
        }
        system("cls");
        cout<<"\nHave you performed for Student Science Exhibition/ Drama/ Quiz or National Talent Search Certificate?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"\n\nENter Your Grade: ";
            cin>>ch;
            if(ch=='A'||ch=='a'){
                cout<<"\na) Full Programme Fee waiver"
                 <<"\nb) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"c) Free Meal Plan (Standard Meal)";
                // break;
            }
            if(ch=='B'||ch=='b'){
                s[2]=15000;
                cout<<"\na) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"b) Free Meal Plan (Standard Meal)"
                 <<"\nc) Scholarship on Programme Fee equivalent to amount awarded to Student"
                 <<" scoring >=90% in elig. Qualification"
                 <<"\nFor Diploma That is 15000 INR per semester ";
                // break;
                }
             if(ch=='C'||ch=='c')
                s[2]=10000;
             if(ch=='D'||ch=='d')
                s[2]=5000;
            Sleep( 5000 );
        }
        system("cls");
        cout<<"\nHave you performed for Research and Development/ Co-curricular or Online & Corporate Competion or \nTABS - Trial / Audition Based Scholarship *?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"\n\nENter Your Grade: ";
            cin>>ch;
            if(ch=='A'||ch=='a'){
                cout<<"\na) Full Programme Fee waiver"
                 <<"\nb) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"c) Free Meal Plan (Standard Meal)";
                // break;
            }
            if(ch=='B'||ch=='b'){
                s[2]=15000;
                cout<<"\na) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"b) Free Meal Plan (Standard Meal)"
                 <<"\nc) Scholarship on Programme Fee equivalent to amount awarded to Student"
                 <<" scoring >=90% in elig. Qualification"
                 <<"\nFor Diploma That is 15000 INR per semester ";
                // break;
                }
             if(ch=='C'||ch=='c')
                s[2]=10000;
             if(ch=='D'||ch=='d')
                s[2]=5000;
            Sleep( 5000 );
        }
        system("cls");
        cout<<"\nHave you been part of National Service Scheme (NSS) or National Cadet Core Scheme (NCC)?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"\n\nENter Your Grade: ";
            cin>>ch;
            if(ch=='A'||ch=='a'){
                cout<<"\na) Full Programme Fee waiver"
                 <<"\nb) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"\nc) Free Meal Plan (Standard Meal)";
                // break;
            }
            if(ch=='B'||ch=='b'){
                s[2]=15000;
                cout<<"\na) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"b) Free Meal Plan (Standard Meal)"
                 <<"\nc) Scholarship on Programme Fee equivalent to amount awarded to Student"
                 <<" scoring >=90% in elig. Qualification"
                 <<"\nFor Diploma That is 15000 INR per semester ";
                // break;
                }
             if(ch=='C'||ch=='c')
                s[2]=10000;
             if(ch=='D'||ch=='d')
                s[2]=5000;

            Sleep( 5000 );
        }
        system("cls");
        cout<<"\nHave you been part of National Bravery Award or Scouts & Guides or Red Cross Activities?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"\n\nENter Your Grade: ";
            cin>>ch;
            if(ch=='A'||ch=='a'){
                cout<<"\na) Full Programme Fee waiver"
                 <<"\nb) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"c) Free Meal Plan (Standard Meal)";
                // break;
            }
            if(ch=='B'||ch=='b'){
                s[2]=15000;
                cout<<"\na) Free Stay in Dormitory  Residence (without attached washroom)"
                 <<"b) Free Meal Plan (Standard Meal)"
                 <<"\nc) Scholarship on Programme Fee equivalent to amount awarded to Student"
                 <<" scoring >=90% in elig. Qualification"
                 <<"\nFor Diploma That is 15000 INR per semester ";
                // break;
                }
             if(ch=='C'||ch=='c')
                s[2]=10000;
             if(ch=='D'||ch=='d')
                s[2]=5000;
            Sleep( 5000 );
        }
    }
    system("cls");
    cout<<"\n\nAre you ward of Defence, CAPF personnel and their dependants?  y/n"
    <<"\n\nENter choice: ";
    cin>>ch;
    if(ch=='y')
    {
        system("cls");
        cout<<"\nHave your father have recieved any Gallantry Awards?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y'){
            s[3]=15000;
        }
        cout<<"\nARe your father Serving Officers - nominated through study leave?  y/n"
        <<"\n\nENter choice: ";
        cin>>ch;
        if(ch=='y'){
            s[3]=10000;
        }
        else
            s[3]=5000;
    }
    system("cls");
    cout<<"\n\nAre you Topper of your education board?  y/n"
    <<"\n\nENter choice: ";
    cin>>ch;
    if(ch=='y')
    {
        cout<<"\nFull Programme Fee waiver, and"
        <<"\nFree Stay in four seater room (Air Cooled Room) in Residential Facility"
        <<"\nOr\nFree Transport Facility.";
        Sleep(5000);
        s[4]=29500;
    }
    system("cls");
    cout<<"\n\nAre you Orphan?  y/n"
    <<"\n\nENter choice: ";
    cin>>ch;
    if(ch=='y')
    {
        cout<<"\nWith a view to facilitate access to higher education to orphan students,"
        <<" LPU offers a special scholarship scheme\n of Full programme fee waiver in the "
        <<"programmes as per Annexure mentioned below.\n The scholarship will be given to a"
        <<" maximum of 10 students on first come first\n serve basis subject to maximum of "
        <<"two candidates from one orphanage / organization."
        <<"\nLets see if you are lucky!!";
        Sleep(7000);
        s[6]=29500;
    }
    system("cls");
    cout<<"\n\nAre You person with certain disability*?   y/n"
    <<"\n\nENter choice: ";
    cin>>ch;
    if(ch=='y')
    {
        cout<<"\nWith a view to facilitate access to Higher Education to the persons"
        <<" with benchmark disability and Locomotor\n disability caused by Spinal Cord"
        <<" Injury. LPU offers a special scholarship scheme of Full programme fee\n"
        <<" waiver to the Persons with Disability in the programmes as per Annexure"
        <<" mentioned below.\n The scholarship will be given to a maximum of 20 students"
        <<" on first come basis. ";
        s[7]=29500;
        Sleep(7000);
    }int l=s[0];
    for(int i=0;i<8;i++)
    {
        if(l<s[i])
            l=s[i];
    }
    if(a==7)
    {
        if(l==15000)
        l=20000;
        else if(l==10000)
            l=15000;
        else if(l==5000)
            l=10000;
        else if(l==29500)
            l=39500;
    }
    if(a==8||a==10)
    {
        if(l==15000)
        l=20000;
        else if(l==10000)
            l=15000;
        else if(l==5000)
            l=10000;
        else if(l==29500)
            l=39500;
    }
    if(a==9)
    {
        if(l==15000)
        l=20000;
        else if(l==10000)
            l=15000;
        else if(l==5000)
            l=10000;
        else if(l==29500)
            l=49500;
    }
    if(a==7||a==8||a==10)
    {
    system("cls");
    cout<<"Congratulations the applicable scholarship for you is: "<<l<<" INR(per semester)"
    <<"\n\nThe fees applicable after scholarship is :"<<39500-l<<" INR(per semester)*"
    <<"\n\n\n*Note:The fees shown here are excluding examination fees.";
    }
    else if(a==9)
    {
    system("cls");
    cout<<"Congratulations the applicable scholarship for you is: "<<l<<" INR(per semester)"
    <<"\n\nThe fees applicable after scholarship is :"<<49500-l<<" INR(per semester)*"
    <<"\n\n\n*Note:The fees shown here are excluding examination fees.";
    }
    else{
        system("cls");
    cout<<"Congratulations the applicable scholarship for you is: "<<l<<" INR(per semester)"
    <<"\n\nThe fees applicable after scholarship is :"<<29500-l<<" INR(per semester)*"
    <<"\n\n\n*Note:The fees shown here are excluding examination fees.";
    }


}

