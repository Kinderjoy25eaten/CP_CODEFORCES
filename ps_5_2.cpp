#include <bits/stdc++.h>
using namespace std; 
//https://codeforces.com/contest/2134/problem/B
int main () {
    int test_cases;
    cin >> test_cases;
    while (test_cases--)
    {
         long long int n ,k ;
        cin>>n>>k;
        for (int i =0 ; i<n ; i++)
        {
           long long  int x;
            cin>>x;
            x = x + (x%(k+1))*k;
            cout<<x<<" ";
        }
        cout<<endl;

    }
    return 0;
}