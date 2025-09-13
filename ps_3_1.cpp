#include <bits/stdc++.h>
using namespace std; 
//https://codeforces.com/contest/2132/problem/A
int main () {
    int test_cases;
    cin >> test_cases;
    while (test_cases--) {
        int length , new_length;
        cin >> length;
        string basic , adder , opeator ,prefix, suffix;
        cin >> basic ;
        cin >> new_length;
        cin >> adder;   
        cin >> opeator;
        for (int i = 0; i < new_length; i++) {
            if(opeator[i] == 'V') {
                prefix += adder[i];
            } else {
                suffix += adder[i];
            }
        }
        reverse(prefix.begin(),prefix.end());
        cout<<prefix+basic+suffix<<endl;
    }
    return 0;
}