#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, t;
    cin >> n >> t;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int musicTime = 0;
    int musicIndex = 0;
    while(musicTime <= 600) {
        for(int i = 0; i < n; i++) {
            musicTime += a[i];
            musicIndex = i;
        }
        if()
    }
    musicTime -= t;
    cout << musicIndex << ' ' << musicIndex << endl;
    return 0;
}