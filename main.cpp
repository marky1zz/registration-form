#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool checkLogIn()
{
    string name1, password1, nm, ps;

    cout << "Enter your name" << endl, cin >> name1;
    cout << "Enter your password" << endl, cin >> password1;

    ifstream file1;
    file1.open("data." + name1 + ".txt");

    getline(file1, nm);
    getline(file1, ps);

    if (nm == name1 && ps == password1)
    {
        return true;
    }
    else
    {
        return false;
    }

}

using namespace std;

int main()
{
    string name, password;
    int choice;

    cout << "1. Register" << endl;
    cout << "2. Log in" << endl;

    cin >> choice;

    switch(choice)
    {
    case 1:
        {
        cout << "Enter your name" << endl, cin >> name;
        cout << "Enter your password" << endl, cin >> password;

        ofstream file;
        file.open("data." + name + ".txt");
        file << name << endl;
        file << password << endl;
        file.close();
        break;
        }
    case 2:

        bool status = checkLogIn();

        if (status == false)
        {
            cout << "\nError: failed to log in check your username and password." << endl;
        }
        else
        {
            cout << "\nYou are Loged in" << endl;
            system("PAUSE");
        }

        break;
    }

    return 0;
}


