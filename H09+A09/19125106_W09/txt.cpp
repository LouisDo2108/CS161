#include <fstream>
#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
    ofstream fo;
    /*
    fo.open("txt.txt", ios::app);
    if (!fo.is_open())
        cout << "The file is not opened yet." << endl;
    else
    {
        fo << "\nHello World again";
        fo.put('!');
        fo.close();
    }
    */
    char name[10];
    cout << "Please input the file name you want to load." << endl;
    cin.get(name, 10, '\n');
    ifstream fi;
    char a[100], b[100];
    char c;
    fi.open("txt.txt");
    if (!fi.is_open())
        cout << "The file is not opened yet." << endl;
    else
    {
        fi.get(a, 100, '\n');
        while (!fi.eof())
        {
            cout << a << endl;
            fi.ignore();
            fi.get(a, 100, '\n');
        }
        cout << a << endl;
    }
    /*
    fo.open(name);
    if (!fo.is_open())
        cout << "The file is not opened yet." << endl;
    else
    {
        fo << a << " " << b;
        fo.close();
    }
    */
}