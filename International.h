#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>
#include<dos.h>
#include<stdlib.h>
#include<windows.h>
using namespace std;
class International
{
    string name,country,age;
    double marks;
public:
    void getDetails();
    void show();
};
void International::getDetails()
{
    cout<<"\nEnter Your Details"
    <<"\n\nName : ";
    cin.ignore();
    getline(cin,name);
    cout<<"\nCountry : ";
    cin.ignore();
    getline(cin,country);
    cout<<"\nAge : ";
    cin.ignore();
    getline(cin,age);
}
void International::show()
{
    system("cls");
    cout<<"LOL\n\n\n\nYou got No Scholarship \n\n"
    <<"HAHA AHHAHAHAHA LOL lol\n\n";
}
