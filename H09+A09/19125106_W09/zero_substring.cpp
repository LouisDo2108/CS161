#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int a[100] = {3, 4, -7, 3, 1, 3, 3, 1, -4, -2, -2}, n = 11, m, b[100], index = 0;
    /*
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> m;
        a[i] = m;
    }
    */
    for (int i = 0; i <= n; ++i)
    {
        int temp = a[i];
        memset(b, 0, index);
        index = 0;
        b[index++] = temp;
        for (int j = i + 1; j < n; ++j)
        {
            temp += a[j];
            b[index++] = a[j];
            if (temp == 0)
            {
                cout << "{ ";
                for (int u = 0; u < index; ++u)
                {
                    cout << b[u] << " ";
                }
                cout << "}" << endl;
            }
        }
    }
}