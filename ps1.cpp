#include <bits/stdc++.h>
using namespace std;
//https://codeforces.com/contest/2127/problem/A


int main()
{
    int test_cases;
    cin >> test_cases;
    while (test_cases--)
    {
        int length;
        cin >> length;
        int sequence[length];
        int checker = -1;
        bool isValid = true;
        
        for (int i = 0;i < length; i++)
        {
            cin >> sequence[i];
            if(sequence[i]==0)
            {
                isValid = false;
                    }
            else if (sequence[i] == -1)
            {
               continue ;
            }
            else if (checker == -1)
            {
                checker = sequence[i];
            }
            else if (sequence[i] != checker)
            {
               
                isValid = false;
             
            };
            
        }
        if(isValid)
            {
                cout << "YES" << endl;
            }
          else {cout<<"NO"<<endl;};  
    }
    return 0;
}