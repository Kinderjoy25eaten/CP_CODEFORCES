#include <bits/stdc++.h>
using namespace std; 
//https://codeforces.com/contest/2140/problem/A
int main () {
    int test_cases;
    cin >> test_cases;
    while (test_cases--)
    {
       int n;
       cin >> n;
       int zeros =0;
       string s;

         cin >> s;
         for(int i=0; i<n; i++) {

            if(s[i]=='0') {
                zeros++;
            }
         }
         int count = 0;
         for (int i=0; i<zeros; i++) 
         {
            if(s[i]=='1') {
                count++;
            }
         }
         
         cout<<count<<"\n";

    }
    return 0;
}