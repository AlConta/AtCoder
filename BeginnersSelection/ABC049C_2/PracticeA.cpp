#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

#define rep(i, a, b) for(int i = a; i < b; i++)
#define Rep(i, a, b) for(int i = a; i <= b; i++)
#define sz(s) (int)s.size()

const string Dream_ = "maerd";
const string Dreamer_ = "remaerd";
const string Erase_ = "esare";
const string Eraser_ = "resare";
int main() {
    string str;
    cin >> str;

    std::reverse(str.begin(), str.end());
    bool err = false;
    while (!str.empty() && !err) {
        int size = (int)str.size();
        switch (str[0]) {
        case 'm': 
            if (size >= 5) {
                string strR = str.substr(0, 5);
                if (strR == Dream_) str = str.substr(5, (int)str.size());
                else err = true;
            }
            break;        
        case 'e': 
            if (size >= 5) {
                string strR = str.substr(0, 5);
                if (strR == Erase_) str = str.substr(5, (int)str.size());
                else err = true;
            }
            break;        
        case 'r': 
            if (size >= 6) {
                if (str[2] == 'm') {
                    if (size >= 7) {
                        string strR = str.substr(0, 7);
                        if (strR == Dreamer_) str = str.substr(7, (int)str.size());
                        else err = true;
                    }
                }
                else if (str[2] == 's') {
                    if (size >= 6) {
                        string strR = str.substr(0, 6);
                        if (strR == Eraser_) str = str.substr(6, (int)str.size());
                        else err = true;
                    }
                }
                else err = true;
            }
            break;        
        default: 
            err = true;
            break;
        }
    }

    if (str.empty()) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}