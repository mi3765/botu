#include <bits/stdc++.h>
using namespace std;

void shiftRow() {
    
}

void shiftColum() {

}


int main() {
    int ha, wa;
    cin >> ha >> wa;
    vector<string> a(ha);
    for(int i = 0; i < ha; i++) {
        cin >> a[i];
    }
    int hb, wb;
    cin >> hb >> wb;
    vector<string> b(hb);
    for(int i = 0; i < hb; i++) {
        cin >> b[i];
    }
    int hx, wx;
    cin >> hx >> wx;
    vector<string> x(hx);
    for(int i = 0; i < hx; i++) {
        cin >> x[i];
    }
    vector<string> c(30, ".............................");
    for(int i = 0; i < ha; i++) {
        for(int j = 0; j < wa; j++) {
            c[i + 5][j + 5] = a[i][j];
        }
    }
    for(int i = 0; i < hb; i++) {
        for(int j = 0; j < wb; j++) {
            c[i + 5][j + 5] = b[i][j];
        }
    }
    int maxH = 0, maxW = 0, minH = 0, minW = 0;
    for(int i = 0; i < 20; i++) {
        for(int j = 0; j < 20; j++) {
            if(c[i][j] == '#') {
                maxH = max(maxH, i);
                maxW = max(maxW, i);
                minH = min(minH, i);
                minW = min(minW, i);
            }
        }
    }
    for(int i = minH; i < maxH; i++) {
        for(int j = minW; j < maxW; j++) {
            if(c[i][j] == x[i - minH][j- minW]) cout << "Yes" << endl;
                else {
                    shiftRow();
                    shiftColum();
                }
        }
    }
    return 0;
}