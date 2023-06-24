#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(7 * n);
    for(int i = 0; i < 7 * n; i++) cin >> a[i];
    long long sum = 0;
    for(int i = 0; i < 7 * n; i++) {
        sum += a[i];
        if(i != 0 && i % 7 == 6) {
            cout << sum;
            sum = 0;
            if(i != 7 * n - 1) cout << ' ';
                else cout << endl;
        }
    } 
    return 0;
}