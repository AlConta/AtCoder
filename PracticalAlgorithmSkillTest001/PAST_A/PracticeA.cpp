#include<iostream>
#include<vector>
using namespace std;

#define rep(i, a, b) for(int i = a; i < b; i++)
#define Rep(i, a, b) for(int i = a; i <= b; i++)
#define sz(s) (int)s.size()

int main() {
    string str;
    cin >> str;
    bool findErr = false;
    rep(i, 0, sz(str)) {
        char c = str[i];
        if (isalpha(c)) {
            findErr = true;
            break;
        }
    }
    if (findErr) cout << "error\n";
    else {
        int num = atoi(str.c_str());
        cout << 2 * num << "\n";
    }

    return 0;
}