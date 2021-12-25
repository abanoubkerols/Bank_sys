#include <iostream>
#include<fstream>
#include<string>
#include<conio.h>
#include<windows.h>
using namespace std;
class Bank_sys
{
public:

     int id,password;
     void menu();
     void bank_management();
     void Option_for_account();
     void New_User();
};

    void Bank_sys::menu()
{
    system("cls");
    int choice;
    cout<<"\n\n\n\t\t\t\t control panel";
    cout<<"\n\n 1- Admin";
    cout<<"\n 2- Employee";
    cout<<"\n 3- visitor ";
    cout<<"\n 4- Exit...";
    cout<<"\n\n        please enter your choice\n";
    cin>>choice;
    switch(choice)
    {
    case 1:

        break;
    case 2:
        bank_management();
        break;
    case 3:
        Option_for_account();
        break;
    case 4:
        exit(0);
        default:
            cout<<"\nInvalid value... please Trt Again \n";
    }
}
    void Bank_sys::bank_management()
    {
        int choice;
        system("cls");
        cout<<"\n\n\n\t\t\t\t OPtion OF Management";
        cout<<"\n 1- New user";
        cout<<"\n 2- Alreadry User";
        cout<<"\n 3- Withdrew option";
        cout<<"\n 4- Deposit option";
        cout<<"\n 5- Transfer option";
        cout<<"\n 6- Account detailes";
        cout<<"\n 7- Search user record";
        cout<<"\n 8- Edit user record";
        cout<<"\n 9- Delete user record";
        cout<<"\n 10-Show all record";
        cout<<"\n 11- Account detailes";
        cout<<"\n 12- Back";
        cout<<"\n 13- Exit";
        cout<<"\n\n Enter your choice :";
        cin>>choice;
        switch(choice)
        {
        case 1:
            New_User();

            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        case 9:
            break;
        case 10:
            break;
        case 11:
            break;
        case 12:
            menu();
            break;
        case 13:
            exit(0);
            break;
        default:
            cout<<"\nInvalid value... please Trt Again \n";

        }
    }
    void Bank_sys::Option_for_account()
    {
        int choice;
        system("cls");
        cout<<"\n\n\n\t\t\t\t OPtion account";
        cout<<"\n 1- User login & check balance";
        cout<<"\n 2- Withdrew";
        cout<<"\n 3- Deposit";
        cout<<"\n 4- Transfer to";
        cout<<"\n 5- Account detailes";
        cout<<"\n 6- Back";
        cout<<"\n 7- Exit";
        cout<<"\n\n Enter your choice :";
        cin>>choice;
        switch(choice)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            menu();
            break;
        case 7:
            exit(0);
            break;
        default:
            cout<<"\nInvalid value... please Trt Again \n";
        }
    }
    void Bank_sys::New_User()
    {
        system("cls");
        cout<<"\n\n\n\t\t\tAdd New User";


    }





int main()
{
    system("color 80");
    ifstream file;
    file.open("welcome.txt");
    string line;
    while(file.good())
    {
        getline(file,line);
        cout<<line<<endl;
    }
    file.close();
    Sleep(2000);
    Bank_sys bank;
    bank.menu();



    return 0;
}
