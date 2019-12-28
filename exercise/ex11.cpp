#include <bits/stdc++.h>
// #include <fstream>
using namespace std;

int main()
{
    // std::ifstream in("input.txt");
    // std::cin.rdbuf(in.rdbuf());
    int N, A;
    cin >> N;
    cin >> A;
    for (int n = 1; n <= N; n++)
    {
        string op;
        int B;
        cin >> op >> B;
        if (op == "+")
        {
            A = A + B;
            cout << n << ":" << A << endl;
        }
        if (op == "-")
        {
            A = A - B;
            cout << n << ":" << A << endl;
        }
        if (op == "*")
        {
            A = A * B;
            cout << n << ":" << A << endl;
        }
        if (op == "/")
        {
            if (B == 0)
            {
                cout << "error" << endl;
                break;
            }
            A = A / B;
            cout << n << ":" << A << endl;
        }
    }
}
