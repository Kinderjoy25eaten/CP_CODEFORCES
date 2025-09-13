#include <bits/stdc++.h>
using namespace std; 
//https://codeforces.com/contest/2131/problem/B
int main () {
    int test_cases;
    cin >> test_cases;
    while (test_cases--) {
        int length ;
        cin >> length;
            bool flag = true;
            for (int i = 0; i < length -1 ; i++) {
                if (flag)
                {
                    cout<<-1<<" ";
                }
                else
                {
                    cout<<3<<" ";
                }
                flag = !flag;  
        }
        if (flag)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<2<<endl;
        }

    }
    return 0;
}