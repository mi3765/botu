#include <bits/stdc++.h>
using namespace std;
int main() {

    // s の何番目を取ってくれるかの指定方法がわからなかったのでmapを使用
    int n;
    cin >> n;
    string s;
    map<int, string> mp;
    for(int i = 0; i < n; i++) {
        cin >> s;
        mp[i] = s;
    }
    for(int i = n - 1; i >= 0; i--) {
        cout << mp[i] << endl;
    }
    return 0;
}