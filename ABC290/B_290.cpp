#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == 'o') count++;
        if(count == k) {
            for(int j = i + 1; j < n; j++) {
                if(s[j] == 'o') s[j] = 'x';
            }
            break;
        }
    }
    cout << s << endl;
    return 0;
}