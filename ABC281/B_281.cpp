#include <bits/stdc++.h>
using namespace std;
string s;
bool flag = false;
int a = 0;

bool eight(int e) {
    if(e != 8) return flag = false;
        else return flag = true;
}

bool one_seven(char s) {
    if(!(s - 'A' >= 0 && s - 'A' < 26)) return flag = false;
        else return flag = true;
}

bool two(char s) {
    if((s - '0' == 0)) return flag = false;
        else return flag = true;
}

bool two_six(char s) {
    if(!(s = '0' >= 0 && s - '0' < 10)) return flag = false;
        else return flag = true;
}

int main() {
    cin >> s;
    a = s.size();
    if(!eight(a)) {
        cout << "No" << endl;
        return 0;
    }
    if(!one_seven(s[0])) {
        cout << "No" << endl;
        return 0;
    }
    if(!one_seven(s[7])) {
        cout << "No" << endl; 
        return 0;
    }
    if(!two(s[1])) {
        cout << "No" << endl;
        return 0;
    }
    for(int i = 1; i < 7; i++) {
        if(!two_six(s[i])) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}

// B 別解
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     string s;
//     cin >> s;
//     regex pattern("^[A-Z][1-9][0-9]{5}[A-Z]$");
//     string result = regex_match(s, pattern) ? "Yes" : "No";
//     cout << result << endl;
//     return 0;
// }