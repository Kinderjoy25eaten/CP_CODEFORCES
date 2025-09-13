#include <bits/stdc++.h>
using namespace std; 
//https://codeforces.com/contest/2134/problem/A
int main () {
    int test_cases ;
    cin >>test_cases ;
    while (test_cases --)
    {
         int n,a ,b;
         cin >>n>>a>>b;
      if (n%2 == b%2 && (n%2 == a%2 || b > a))
      {cout <<"YES\n";}
      else
      { cout<< "NO\n";};
    }

    return 0;
}