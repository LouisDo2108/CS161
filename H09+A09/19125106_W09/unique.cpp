#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

int main()
{
    char a[100], b[100], fname[100];
    ifstream fi;
    cout << "Please enter the file name you want to load: " << endl;
    cin.get(fname, 100, '\n');
    cin.ignore();
    fi.open(fname);
    if (!fi.is_open())
    {
        cout << "The file is not opened" << endl;
    }
    else
    {
        fi.get(a, 100, '\n');
        fi.ignore();
        fi.close();
    }
    int size = strlen(a), index = 0, count = 0;
    bool check = 0;
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < index; ++j)
        {
            if (a[i] == b[j])
            {
                check = 1;
                break;
            }
        }
        if (check)
            check = 0;
        else
        {
            ++count;
            b[index++] = a[i];
        }
    }
    cout << "count = " << count << endl;
}