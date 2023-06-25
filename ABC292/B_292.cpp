#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, q;
    cin >> n >> q;
    vector<int> event(q), player(q);
    for(int i = 0; i < q; i++) cin >> event[i] >> player[i];
    vector<int> yellowCard(n), redCard(n);
    for(int i = 0; i < q; i++) {
        int count = 0;
        if(event[i] == 1) {
            count++;
            yellowCard[player[i] - 1] += count;
        } else if(event[i] == 2) {
            count++;
            redCard[player[i] - 1] += count;
        } else {
            if(yellowCard[player[i] - 1] >= 2 || redCard[player[i] - 1] >= 1) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}