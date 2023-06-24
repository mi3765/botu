#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<vector<int>> g;
vector<int> vis;

// 深さ優先探索関数
void dfs(int c) {
    // 現在の頂点 c を訪れたので、訪問状態を true にする
    vis[c] = true;

    // 現在の頂点 c に隣接する頂点を順に訪れる
    for (auto& d : g[c]) {
        // 隣接する頂点 d が既に訪れているならスキップして次の頂点へ進む
        if (vis[d]) continue;

        // 隣接する頂点 d がまだ訪れていない場合は再帰的に dfs() を呼び出す
        dfs(d);
    }
}

int main() {
    cin >> n >> m;
    g.resize(n);

    // 辺の情報を受け取り、隣接リストを構築する
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        u--, v--;

        // 点 u と点 v が繋がっていることを表す辺を追加する
        g[u].push_back(v);
        g[v].push_back(u);
    }

    int ans = 0;
    vis.resize(n);
    for (int i = 0; i < n; i++) {
        // まだその頂点 i を訪れていない場合、ans をインクリメントし、dfs() を呼び出す
        if (!vis[i]) {
            ans++;
            dfs(i);
        }
    }

    cout << ans << endl;
    return 0;
}