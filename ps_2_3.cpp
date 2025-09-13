#include <bits/stdc++.h>
using namespace std; 
//https://codeforces.com/contest/2131/problem/C
int main () {
    int test_cases;
    cin >> test_cases;
    while (test_cases--) 
    {
        int length, steps;
        cin >> length >> steps;
        multiset <int> s1;
        multiset <int> s2;
        for (int i = 0; i < length; i++) {
            int x;
            cin >> x;
            x = x % steps;
            s1.insert(min(x, steps - x));
        }
        for (int i = 0; i < length; i++) {
            int x;
            cin >> x;
            x = x % steps;
            s2.insert(min(x, steps - x));
        }
        if (s1 == s2) {
            cout << "YES" << endl;
        } 
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}