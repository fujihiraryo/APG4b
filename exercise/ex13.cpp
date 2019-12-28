#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> vec(N);

    int S = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> vec.at(i);
        S += vec.at(i);
    }
    for (int i = 0; i < N; i++)
    {
        cout << abs(abs(vec.at(i) - S / N)) << endl;
    }
}
