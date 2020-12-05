/*
#include <iostream>
#include <fstream>
#include <cmath>
#include <string>

using namespace std;
bool is_prime(int n)
{
    if (n == 2)
        return 1;
    else if (n == 1 || n % 2 == 0)
        return 0;
    else
    {
        for (int i = 3; i <= sqrt(n); ++i)
        {
            if (n % i == 0)
                return 0;
        }
        return 1;
    }
}
int main()
{

    int s, n, count = 0, a[100], index = 0;
    string str;
    ofstream fo;
    ifstream fi;

    fi.open("C:/Users/night/Desktop/input.txt");
    if (!fi.is_open())
    {
        cout << "Can not open file.";
    }
    else
    {
        //fi >> s;
        //for(int i = 1; i <= s; ++i){
        fi >> n;
        while (!fi.eof())
        {
            if (is_prime(n))
            {
                ++count;
                a[index++] = n;
            }
            fi >> n;
        }
        fi.close();
    }

    fo.open("C:/Users/night/Desktop/output.txt");
    if (!fo.is_open())
    {
        cout << "Can not open file.";
    }
    else
    {
        fo << count << endl;
        for (int i = 0; i < count; ++i)
        {
            fo << a[i] << " ";
        }
        fo.close();
    }

    fi.open("C:/Users/night/Desktop/output.txt");
    if (!fi.is_open())
    {
        cout << "Can not open file.";
    }
    else
    {
        while (!fi.eof())
        {
            getline(fi, str);
            cout << str << endl;
        }
        fi.close();
    }
    return 0;
}
*/
#include <fstream>
#include <iostream>
using namespace std;
int main()
{
    ifstream in;
    in.open("test.txt");
    if (in)
    {
        char ch[100];
        do
        {
            in.get(ch, 100, '\n');
            cout << ch << endl;
            in.ignore();
        } while (!in.eof());
        in.close();
    }
}
