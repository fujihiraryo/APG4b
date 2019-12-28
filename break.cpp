#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        if (i == 3)
        {
            cout << "break" << endl;
            break;
        }
        cout << i << endl;
    }
    cout << "end" << endl;
}
