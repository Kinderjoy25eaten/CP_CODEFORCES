#include <bits/stdc++.h>
using namespace std; 
//https://codeforces.com/contest/2127/problem/C
int main () {
   int test_cases;
   cin >> test_cases;
    while (test_cases--) 
    {
    int length , steps;
    cin >> length >> steps;
    int s1[length];
    int s2[length];
    long long int value = 0;

    for (int i = 0; i < length; i++) {
        cin >> s1[i];}
    for( int i = 0; i < length; i++) {
        cin >> s2[i];
        value += abs(s1[i] - s2[i]);
    }
    pair<int, int> p[length];
    for (int i = 0; i < length; i++) {
        p[i] = make_pair(max(s1[i], s2[i]), min(s1[i], s2[i]));  }
    sort(p, p + length);
    long long int max_change = 2e9; 
    for (int i = 0; i < length - 1; i++) {
        if (p[i].first >= p[i + 1].second) {
            max_change = 0;
            break;
        }
        else {
            max_change = min(max_change, (long long int)(p[i + 1].second - p[i].first));
        };
    }
cout <<value +2*max_change<<endl;
    } 
    return 0;
}