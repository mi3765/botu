#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    vector<int> n(t);

    // 2次元配列の行方向のサイズだけ指定
    vector<vector<int>> a(t);
    for(int i = 0; i < t; i++) {
        cin >> n[i];

        // 列方向のサイズを指定
        a[i].resize(n[i]);
        int count = 0;
        for(int j = 0; j < n[i]; j++) {
            cin >> a[i][j];
            if(a[i][j] % 2 == 1) count++;
        }
        cout << count << endl;
    } 
}