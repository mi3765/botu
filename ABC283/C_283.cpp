#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    
    // この問題は 0 が2回連続したときに操作回数が1回減るという仕組み

    int ans = 0;
    // sが空でなければループ
    while(!s.empty()) {
        // 末尾入力
        char back = s.back();
        // 末尾取り出し
        s.pop_back();
        // back(前の末尾)が 0 かつ s.back()(現在の末尾)が 0
        // つまり 100 でいう下2桁が 0 なら末尾取り出し
        if(back == '0' && s.back() == '0') s.pop_back();
        // sが空になるまでのカウント
        ans++;
    }
    cout << ans << endl;
    return 0;
}