#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, q;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    cin >> q;
    for(int i = 0; i < q; i++) {
        int first;
        cin >> first;
        if(first == 1) {
            int k, l;
            cin >> k >> l;
            a[k - 1] = l;
        } else {
            int k;
            cin >> k;
            cout << a[k - 1] << endl;
        }
    }
    return 0;
}