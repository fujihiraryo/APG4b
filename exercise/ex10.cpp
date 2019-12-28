#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    // ここにプログラムを追記
    string a = "";
    while (A > 0)
    {
        a += "]";
        A -= 1;
    }
    cout << "A:" << a << endl;

    string b = "";
    while (B > 0)
    {
        b += "]";
        B -= 1;
    }
    cout << "B:" << b << endl;
}
