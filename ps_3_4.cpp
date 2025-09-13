#include <bits/stdc++.h>
using namespace std;
//https://codeforces.com/contest/2132/problem/D
int main()
{
    int test_cases;
    cin >> test_cases;
    while (test_cases--)
    {
        int number, deal_bar;
        cin >> number;
        cin >> deal_bar;
        long long int coins = 0;
        int count = 0;
        int deal = 0;
        vector<int> remainder_list;
        while (number > 0)
        {
            int remainder = number % 3;
            number = number / 3;
            coins += remainder * (count * pow(3, count - 1) + pow(3, count + 1));
            count++;
            deal += remainder;
            remainder_list.push_back(remainder);
            if (deal_bar < deal)
            {
                break;
            }
        }
        if (deal_bar < deal)
        {
            cout << -1 << endl;
            continue;
        }
        while (deal_bar - deal >= 2 && count > 1)
        {

            if (remainder_list.back() * 2 <= deal_bar - deal)
            {
                int remainder = remainder_list.back();
                coins -= remainder * pow(3, count - 2);
                remainder_list.pop_back();
                remainder_list.back() += 3 * remainder;
                count--;
                deal += 2 * remainder;
            }
            else
            {
                coins -= ((deal_bar - deal) / 2) * pow(3, count - 2);
                break;
            }
        }

        cout << coins << endl;
    }
    return 0;
}