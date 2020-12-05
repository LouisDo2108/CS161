#include <iostream>
#include <string.h>

using namespace std;

void str_copy(char b[], char a[])
{
    int len = strlen(a);
    for (int i = 0; i <= len; ++i)
    {
        b[i] = a[i];
    }
    return;
}

int main()
{
    const int size = 10;
    bool check = 0;
    int a[size] = {7, 3, 4, 5, 12, 67, 45, 46, 47, 678};
    for (int i = 0; i < size - 1; ++i)
    {
        if (a[i + 1] - a[i] == 1)
        {
            cout << a[i] << " ";
            check = 1;
            continue;
        }
        if (check == 1)
        {
            cout << a[i] << endl;
            check = 0;
            continue;
        }
    }
}