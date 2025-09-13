#include <bits/stdc++.h>
using namespace std;
//https://codeforces.com/contest/2127/problem/B
int main()
{
    int test_cases;
    cin >> test_cases;
    while (test_cases--)
    {
        int length, position;
        cin >> length >> position;
        position--;
        string sequence;
        cin >> sequence;
        int left_gap = 0;
        int right_gap = 0;
        for (int i = position - 1; i >= 0; i--)
        {
            if (sequence[i] == '.')
            {
                left_gap++;
            }
            else
            {
                break;
            };
        }
        for (int i = position + 1; i < length; i++)
        {
            if (sequence[i] == '.')
            {
                right_gap++;
            }
            else
            {
                break;
            };
        }
        if (position == 0 || position == length - 1)
        {
            cout << 1 << endl;
        }
        else if (left_gap == 0 || right_gap == 0)
        {
            cout << min(position + 1, length - position ) << endl;
        }
        else
        {
            if (position + 1 - left_gap < length - position - right_gap)
            {
                left_gap = 0;
            }
            else
            {
                right_gap = 0;
            }
            cout << min(position + 1 - left_gap, length - position - right_gap) << endl;
        }
    }

    return 0;
}
