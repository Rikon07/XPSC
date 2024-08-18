#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    string s;
    while (test--)
    {
        cin >> s;
        int n = s.size(), k = 1;
        string a, b;
        if (s[1] != '0')
        {
            a = s[0];
        }
        else
        {
            a = s[0];
            while (s[k] == '0')
            {
                a += s[k];
                k++;
            }
        }
        for (int i = k; i < n; i++)
        {
            b += s[i];
        }
        int aSum = 0, bSum = 0;
        for (int i = a.size() - 1, j = 10; i >= 0; i--, j *= 10)
        {
            aSum += (a[i] - '0') * j;
        }
        for (int i = b.size() - 1, j = 10; i >= 0; i--, j *= 10)
        {
            bSum += (b[i] - '0') * j;
        }
        if (aSum >= bSum)
            cout << -1 << "\n";
        else
            cout << a << " " << b << "\n";
    }
    return 0;
}
