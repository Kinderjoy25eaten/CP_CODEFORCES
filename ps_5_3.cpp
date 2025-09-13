#include <bits/stdc++.h>
using namespace std;
//https://codeforces.com/contest/2134/problem/C
int main()
{
    int test_cases;
    cin >> test_cases;
    while (test_cases--)
    {
        long long int length;
        cin >> length;
        if (length == 2)
        {
            long long int x, y;
            cin >> x >> y;
            if (x > y)
            {
                cout << x - y << endl;
            }
            else
            {
                cout << 0 << endl;
            }
            continue;
        }
        long long int count =0;
        long long int prev;
        cin >> prev;
        for (int i = 2; i < length; i += 2)
        {
           long long int x, y;
            cin >> x >> y;
            if (prev > x)
            {
                count += prev - x + y;
                prev = x;
                y = 0;
            }
            else if (prev + y > x)
            {
                count += prev + y - x ;
                y = x - prev;
            }
            prev = y;
        }
        if (length % 2 == 0)
        {
            long long int x;
            cin >> x;
            if (prev > x)
            {
                count += prev - x;
            }
        }
        cout << count <<endl;
    }
    return 0;
}