#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++) {
        cout << toupper(s[i] - 32);
    }
    cout << endl;
    return 0;
}