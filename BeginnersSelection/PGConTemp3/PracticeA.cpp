#include<iostream>
#include<vector>
using namespace std;

#define rep(i, a, b) for(int i = a; i < b; i++)
#define Rep(i, a, b) for(int i = a; i <= b; i++)
#define sz(s) (int)s.size()

int main() {
    string str;
    cin >> str;
    int size = sz(str);
    int cnt = 0;
    rep(i, 0, size) {
        char c = str[i];
        if (c == '1') cnt++;
    }
    cout << cnt << "\n";

    return 0;
}