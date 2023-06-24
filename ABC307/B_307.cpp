#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    for(int i = 0; i < n; i++) cin >> s[i];
    bool flag = false;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) continue;
            string sum = s[i] + s[j];
            int middle = sum.size() / 2;
            for(int l = 0; l < middle; l++) {
                if(sum[l] == sum[sum.size() - 1 - l]) {
                    flag = true;
                } else {
                    flag = false;
                    break;
                }
            }
            if(flag) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}