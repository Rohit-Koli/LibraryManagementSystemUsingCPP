#include <iostream>
using namespace std;
class LibrarySystem
{
public:
    LibrarySystem()
    {
        cout<<"Welcome into My Library System"<<endl;
    }
    void BookDisplay()
  {
    cout << "1 : Life of Programmer" << endl;
    cout << "2 : Programming in CPP " << endl;
    cout << "3 : Programming in JAVA " << endl;
    cout << "4 : SDLC by RK " << endl;
    cout << "5 : OOPS by RK " << endl;
    int n;
    cout << "Enter Book no to isuue :";
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "1 : Life of Programmer" << endl;
        cout << "You have successfully Issued it !" << endl;
        break;
    case 2:
        cout << "2 : Programming in CPP " << endl;
        cout << "You have successfully Issued it !" << endl;
        break;
    case 3:
        cout << "3 : Programming in JAVA " << endl;
        cout << "You have successfully Issued it !" << endl;
        break;
    case 4:
        cout << "4 : SDLC by RK " << endl;
        cout << "You have successfully Issued it !" << endl;
        break;
    case 5:
        cout << "5 : OOPS by RK " << endl;
        cout << "You have successfully Issued it !" << endl;
        break;
    default:
        cout << "Enter number between 1 and 5" << endl;
    }
    cout << "for home page enter number 10";
    int back ;
    cin>>back;
    if (back ==10)
    {
        Mainfun();
    } 
    else
    {
        cout<<"Enter values 10 for home page: "<<endl;
    }
  }
    void Mainfun()
 {
    cout << "Welcome to Central Library of Shirpur" << endl;
    cout << "********************************" << endl;
    cout << "To issue Book Press 1:\nTo return Book press 2:\nfor query press 3:\nfor library information press 4:" << endl;
    int num;
    cin >> num;
    switch (num)
    {
    case 1:
        BookDisplay();
        break;
    case 2:
        ReturnBook();
        break;
    case 3:
        Queryfun();
        break;
    case 4:
        LibraryInfo();
        break;
    Default:
        cout << "Press valid number" << endl;
    }
  }
    void ReturnBook()
{
    cout << "Which book you have ?" << endl;
    int num;
    cin >> num;
    if (num <= 5)
    {
        cout << "Please enter valid number." << endl;
    }
    else
    {
        switch (num)
        {
        case 1:
            cout << "1 : Life of Programmer" << endl;
            cout << "You have successfully reterned it !" << endl;
            break;
        case 2:
            cout << "2 : Programming in CPP " << endl;
            cout << "You have successfully reterned it !" << endl;
            break;
        case 3:
            cout << "3 : Programming in JAVA " << endl;
            cout << "You have successfully reterned it !" << endl;
            break;
        case 4:
            cout << "4 : SDLC by RK " << endl;
            cout << "You have successfully reterned it !" << endl;
            break;
        case 5:
            cout << "5 : OOPS by RK " << endl;
            cout << "You have successfully reterned it !" << endl;
            break;
        }
    }
    cout << "for home page enter numbers between 0 and 100";
    int back ;
    cin>>back;
    if (back<=100 && back>=0)
    {
        Mainfun();
    } 
    else
    {
        cout<<"Enter values between 0 and 100: "<<endl;
    }
}
    void Queryfun()
{
    cout << "This is central Library of Shirpur for any query make a call on 9370810386" << endl;
    cout << "for home page enter numbers between 0 and 100";
    int back ;
    cin>>back;
    if (back<=100 && back>=0)
    {
        Mainfun();
    } 
    else
    {
        cout<<"Enter values between 0 and 100: "<<endl;
    }
       
}
    void LibraryInfo()
{
    cout << "This library system is designed and maintained by RK " << endl;
    cout<<"All copyright goes to RK " << endl;
    cout << "for home page enter numbers between 0 and 100";
    int back ;
    cin>>back;
    if (back<=100 && back>=0)
    {
        Mainfun();
    } 
    else
    {
        cout<<"Enter values between 0 and 100: "<<endl;
    }
}

    ~LibrarySystem()
    {
        cout<<"Deallocating memory";
    }
};
int main()
{
    LibrarySystem l;
    l.Mainfun();
    cout<<"Designed and Maintained by RK !!"<< endl;
    return 0;
}
