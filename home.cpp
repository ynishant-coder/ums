#include"front.h"
#include<conio.h>
void read();
void write();
int password_var(void);

int main()
{
	Scholarship a;
    overview o;
    login l;
    International i;
	int flag,key;
	cout<<"\n\n\n\t\t\t";
	for(int i=0; i<10; i++)
	{ 
	cout<<"*";
	Sleep(100);
	}
	cout<<"IT's PASSWORD PROTECTED";
	for(int i=0; i<10; i++)
	{ 
	cout<<"*";
	Sleep(100);
	}
	Sleep(1000);
	char ch='y';
	while(ch=='y' || ch=='Y')
    {
	flag=password_var();
	if(flag==1)
	{
		front f;
		f.show();
		break;
	}
	else
	{
	
	 cout<<"\n\n\tWRONG PASSWORD \tIf you want to try again then press y/Y or anykey :\t";
	 cin>>ch;
    }
    }
}

int password_var()
{
	char pass[30], temp, password[40]="nishant123@#";
	int i=0;
	start:
	system("cls");
	cout<<"ENTER YOUR PaSSWORD (hint:-Nsdkhf62534@#!) :\t";
	for(i=0; i<40;)
	{
		temp=getch();
		if((temp>='a' && temp<='z') || (temp>='A' && temp<='Z') || (temp>='0' && temp<='9') || (temp=='@') || (temp=='#') || (temp=='$') || (temp=='!'))
		{
			pass[i]=temp;
			++i;
			cout<<"*";
		}
		else if(temp=='\b'&& temp>=1)
		{
			cout<<"\b";
			--i;
		}
		else if(temp=='\r')
		{
			pass[i]='\0';
			break;
		}
	}
	if(i<=5)
	{
		cout<<"\tMinimum 6 digit REQUIRED! \tENTER AGain : ";
		Sleep(1000);
		goto start;
	}
	
	if(strcmp(pass,password)==0)
	{
		return 1;	
	}
	else
	return 0;		
}
