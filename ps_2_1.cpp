#include <bits/stdc++.h>
using namespace std; 
//https://codeforces.com/contest/2131/problem/A
int main () {
    int test_cases;
    cin >> test_cases;
    while (test_cases--) {
        int length ;
        cin >> length;
        vector<int> arr1(length);
        vector<int> arr2(length);
        for (int i = 0; i < length; i++) {
            cin >> arr1[i];
        }
        int count =1;
        for (int i = 0; i < length; i++) {
            cin >> arr2[i];
            if(arr1[i]>= arr2[i]) {
                count+= arr1[i] - arr2[i];
            };
        }
        cout << count << endl;
    }
    return 0;
}