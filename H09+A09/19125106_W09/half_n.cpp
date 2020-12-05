#include <iostream>

using namespace std;

int main()
{
    int a[100] = {5, 2, 1, 4, 5, 6, 5, 5, 5, 5, 5, 1, 2, 5}, n = 14, counter = 0, b[100], index = 0;
    bool check = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int k = 0; k < index; ++k)
        {
            if (b[k] == a[i])
            {
                check = 1;
                break;
            }
        }
        if (check)
            continue;
        else
        {
            b[index++] = a[i];
            for (int j = 0; j < n; ++j)
            {
                if (a[i] == a[j])
                    counter++;
            }
            if (counter > (n / 2))
            {
                cout << a[i] << endl;
                break;
            }
            else
                counter = 0;
        }
    }
}