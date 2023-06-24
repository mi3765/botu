#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    for(int i = 0; i < n; i++) cin >> s[i];
    bool flag = false;
    int count = 0;
    for(int k = 0; k < n; k++) {
        for(int i = k + 1; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(s[k][j] == 'o' || s[i][j] == 'o') {
                    flag = true;
                } else {
                    flag = false;
                    break;
                }
            }
            if(flag) count++;
        }
    }

    cout << count << endl;
    return 0;
}