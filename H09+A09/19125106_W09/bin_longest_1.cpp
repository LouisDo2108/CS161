#include <iostream>

using namespace std;

int main()
{
    int a[100] = {1, 0, 1, 0, 1, 1, 1, 0, 1, 1}, n = 10, counter = 0, temp = 0, result = 0;
    for (int i = result; i < n; ++i)
    {
        if (a[i] == 0)
        {
            ++temp;
            for (int j = i + 1; a[j] == 1 && j < n; ++j)
            {
                ++temp;
                if (temp > counter)
                {
                    counter = temp;
                    result = i;
                }
            }
            cout << "temp = " << temp << endl;
            temp = 0;
        }
        else
            ++temp;
    }
    cout << "index: " << result;
}