#include<iostream>
#include<vector>
using namespace std;

#define rep(i, a, b) for(int i = a; i < b; i++)
#define Rep(i, a, b) for(int i = a; i <= b; i++)
#define sz(s) (int)s.size()

bool isDreamBegin(string & str, int start = 0) {
    if ((int)str.size() < 5 + start) return false;
    string strB = str.substr(start, 5);
    if (strB == "dream") return true;
    return false;
}

bool isEraseBegin(string& str, int start = 0) {
    if ((int)str.size() < 5 + start) return false;
    string strB = str.substr(start, 5);
    if (strB == "erase") return true;
    return false;
}

bool isErBegin(string& str, int start, int erSize, string erStr) {
    if ((int)str.size() < erSize + start) return false;
    string strB = str.substr(start, erSize);
    if (strB == erStr) {
        if (isEraseBegin(str, start)) return false;
        else return true;
    }
    return false;
}

int main() {
    string str;
    cin >> str;
    while(!str.empty()){
        if (isDreamBegin(str, 0)) {
            if (isErBegin(str, 5, 2, "er")) str = str.substr(7, (int)str.size() - 7);
            else str = str.substr(5, (int)str.size() - 5);
        }
        else if (isEraseBegin(str, 0)) {
            if (isErBegin(str, 5, 1, "r")) str = str.substr(6, (int)str.size() - 6);
            else str = str.substr(5, (int)str.size() - 5);
        }
        else break;
    }
    if (str.empty()) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}