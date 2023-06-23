#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    set<int> box;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        box.insert(a[i]);
    }

    for(int i = 0; i < k; i++) {
        if(box.find(i) == box.end()) {
            cout << i << endl;
            return 0;
        }
    }
    cout << k << endl;
    return 0;
}