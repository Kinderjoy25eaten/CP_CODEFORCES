#include <bits/stdc++.h>
using namespace std; 
//https://codeforces.com/contest/2131/problem/D
int main () {
    int test_cases;
    cin >> test_cases;
    while (test_cases--)
    {
       int nodes;
        cin >> nodes;
        vector<int> degree(nodes + 1 ,0) , singles(nodes + 1, 0);
        set<pair<int, int>> edges;
        int singles_count = 0;

        for (int i = 0; i < nodes -1; i++) {
            int u,v;
            cin >> u >> v;
            edges.insert(make_pair(u,v));
            edges.insert(make_pair(v,u));
            degree[u]++;
            degree[v]++;
        }
        if (nodes ==2)
        {
            cout<<0<<endl;
            continue;
            
        }
        for (int i = 1; i <= nodes; i++) {
            if (degree[i] == 1) {
              int j =  edges.lower_bound(make_pair(i, 0))->second;
              singles[j]++;
            singles_count++;
            }
        }
        auto maxi = max_element(singles.begin(), singles.end());
        
        cout<<singles_count- *maxi<<endl;     
    } 

    return 0;
}