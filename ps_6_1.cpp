#include <bits/stdc++.h>
using namespace std; 
//https://codeforces.com/contest/2136/problem/A
int main () {
    int test_cases;
    cin >> test_cases;
    while (test_cases--) 
    {
       int a ,b ,c,d;
       cin >> a >> b >> c >> d;
       if(max(a,b)>2*(1+min(a,b)))
       {
           cout << "No" << endl;
       }
       else if (max (c-a,d-b) >2* (1+min(c-a , d-b)))
       {
           cout << "NO" << endl;
       }
       else
       {
           cout << "YES" << endl;
       }

    }
    return 0;
}