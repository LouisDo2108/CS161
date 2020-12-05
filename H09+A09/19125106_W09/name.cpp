#include <iostream>
#include <string>

using namespace std;

struct student
{
    string name;
};

void swap(student a[], int indexa, int indexb)
{
    string name = a[indexa].name;
    a[indexa].name = a[indexb].name;
    a[indexb].name = name;
    return;
}
int main()
{
    student a[100], b[100];
    a[0].name = "Nguyen Van C";
    a[1].name = "Huynh Van B";
    a[2].name = "Dao Thi A";

    int n = 3, temp1, temp2;
    /*
    for (int i = 0; i < n; ++i)
    {
        getline(cin, a[i].name);
    }
    */
    for (int x = 0; x < n; ++x)
    {
        for (int i = 0; i < n - 1; ++i)
        {
            for (int j = a[i].name.length();; --j)
            {
                if (a[i].name[j] == ' ')
                {
                    temp1 = j + 1;
                    break;
                }
            }

            for (int j = a[i + 1].name.length();; --j)
            {
                if (a[i + 1].name[j] == ' ')
                {
                    temp2 = j + 1;
                    break;
                }
            }
            if ((int)a[i].name[temp1] > (int)a[i + 1].name[temp2])
                swap(a, i, i + 1);
        }
    }

    for (int i = 0; i < n; ++i)
    {
        cout << a[i].name << endl;
    }
}
