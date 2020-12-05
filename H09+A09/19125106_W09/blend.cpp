#include <iostream>
using namespace std;
int main()
{
    int a[100] = {0, 2, 0, 3, 0, 5, 6, 0, 0}, b[100] = {1, 8, 9, 10, 15}, n = 9, m = 5, index = 0, temp, kk, lastdigit, lastdigit_value;
    bool check = 1;
    for (int i = n; i >= 0; --i)
    {
        if (a[i] != 0)
        {
            lastdigit = i;
            lastdigit_value = a[i];
            break;
        }
    }

    for (int i = 0; i < lastdigit; ++i)
    {
        if (temp == lastdigit_value)
            break;
        if (a[i] == 0)
        {
            for (int k = i + 1; k <= lastdigit; ++k)
            {
                if (a[k] != 0)
                {
                    temp = a[k];
                    kk = k;
                    break;
                }
            }
            for (int j = index; j < m; ++j)
            {
                if (b[j] < temp)
                {
                    a[i] = b[j];
                    index++;
                    check = 0;
                    break;
                }
            }
            if (check)
            {
                a[i] = temp;
                a[kk] = 0;
            }
            check = 1;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        if (a[i] == lastdigit_value)
            kk = i;
    }
    for (int i = kk + 1; i < n; ++i)
    {
        a[i] = b[index++];
    }
    cout << "{ ";
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }
    cout << "}";
    return 0;
}