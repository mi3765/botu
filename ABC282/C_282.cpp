#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    string s;
    cin >> n >> s;
    bool flag = true;
    for(int i = 0; i < n; i++) {
        if(flag && s[i] == ',') s[i] = '.';
        if(s[i] == '"') flag = !flag;
    }
    cout << s << endl;
    return 0;
}