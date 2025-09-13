#include <bits/stdc++.h>
using namespace std; 
//https://codeforces.com/contest/2132/problem/C
int main () {
    int test_cases;
    cin >> test_cases;
    while (test_cases--) {
        int number;
        cin >> number;
        long long int coins=0;
        int count =0;
        while(number>0)
        {
         int  remainder = number % 3;
         number = number / 3;
         coins += remainder*(count*pow(3, count -1) + pow(3, count +1)) ;  
            count++; 
        }
        cout << coins << endl;

    }
        return 0;
}