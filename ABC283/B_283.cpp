#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, q;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    string s;
    for(int i = 0; i < q; i++) cin >> s;
    int c = 0;
    for(int i = 0; i < q; i++) {
        c = s[i].size();
        for(int i = 0; i < c; i++) {
            if(c == 2) {
                cout << a[s[1]] << endl;
            } else if(c == 3) {
                a[s[1]] = s[2];
            }
        }
        
    }
    return 0;
}