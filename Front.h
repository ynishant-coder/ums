#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>
#include<dos.h>
#include<stdlib.h>
#include<windows.h>
#include"login.h"
#include"scholarship.h"
#include"Overview.h"
#include"International.h"
using namespace std;
void wait(int j)
{
	int k;
	for(int i=0; i<j; i++)
	{
		k=i;
	}
	k=0;
}
void access(void);
class front
{
	int i=0;
	char temp32;
	 char text[1000]="\
         00        00    00000000   00        0000       000     0000    0000  00000000 \n\r\
         00        00    00         00      00        00    00   00  0  0  00  00     \n\r\
         00   00   00    00000      00     00        00      00  00    0   00  00000 \n\r\
         00  0  0  00    00         00      00        00    00   00        00  00  \n\r\
         0000    0000    00000000   000000    0000       000     00        00  00000000  \n\n\n\r\
                             00000000   000        00    00  000   000      0000    \n\r\
                                00    00   00      00    00  00 0 0 00    00   \n\r\
                                00    00   00      00    00  00  0  00       00   \n\r\
                                00      000          0000    00     00   0000    \n\r\
                                \n\n\n\n\t\t\t\t\t\t\t\t\t\t\t made by ***Nishant***\r";
     char load[500]="\
	     \t\t\t\t\t **     **     *    *****   **  ***   ** ****\n\r\
	     \t\t\t\t\t **    *  *   * *   **   *  **  ** *  ** * \n\r\
	     \t\t\t\t\t **    *  *  *****  **   *  **  **  * ** *  ***\n\r\
	     \t\t\t\t\t *****  **  *     * *****   **  **   ***  ***    * * * * * *\n\r";
	
	public:
		void show()
		{
			system("cls");
			cout<<load;
			cout<<"\t\t\t";
		 for(i=0;i<50; i++)
        {
            wait(100000000);
            cout<<"**";
        }
           cout<<":)";
           Sleep(1000);
            system("cls");
             cout<<text;
            access();
		}


};

void access(void)
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
}
