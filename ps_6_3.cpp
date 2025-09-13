#include <bits/stdc++.h>
using namespace std; 
//https://codeforces.com/contest/2136/problem/C
int main () {
    int test_cases;
    cin >> test_cases;
    while (test_cases--) 
    {
        int n ;
        cin >> n;
        vector<vector<int>> matrix(n+1);
        int score[n +1];
        score[0]=0;

        for (int i = 1; i < n +1; i++)
        {
            int x;
            cin >> x;
            matrix[x].push_back(i-1);
            if(size(matrix[x])>=x)
            {
                 score[i]= max(score[i-1], score[matrix[x][size(matrix[x])-x]] +x);
            }
            else
            {
                score[i]=score[i-1];
            }
           
        }
        cout << score[n] << endl;

    }


    return 0;
}