#include"login.h"
#include"scholarship.h"
#include"Overview.h"
#include"International.h"
void read();
void write();
int main()
{
    Scholarship a;
    overview o;
    login l;
    International i;
    int mch;
    char ch='y';
    ofstream fout("Records.txt",ios::out);
    while(ch=='y'){
            system("cls");
    cout<<"\t\t\tWelCOme To LPu ScHolarSHip PoRTal\n\n";
            cout<<"\n\n\n\nPress :\n(1):For Overview\n(2):For Scholarship\n"
            <<"(3):LOgin With your Details(Automatically calculates Scholarship)\n"
            <<"(4):International Students\n\nEnter Choice: ";
            cin>>mch;
    switch(mch)
    {
    case 1:
        system("cls");
         o.showDetails();
        break;
    case 2:
        a.toscholar(a);
        break;
    case 3:
        system("cls");
        l.singin(l);
        //Disp(l);
        system("cls");
        l.qualification(l);

        break;
    case 4:
        i.getDetails();
        i.show();
        break;
    default:
         cout<<"wrong input";
    }

    cout<<"\n\n\n\n\nDo You WAnt to try again\nPress y/n : ";
    cin>>ch;
    }
    return 0;
}

