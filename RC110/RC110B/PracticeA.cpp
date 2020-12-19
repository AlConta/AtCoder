#include<iostream>
#include<vector>
using namespace std;

#define rep(i, a, b) for(int i = a; i < b; i++)
#define Rep(i, a, b) for(int i = a; i <= b; i++)
#define sz(s) (int)s.size()

const int INF = 1e9;

using ll = long long;

template<class T> bool chmin(T& a, T& b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template<class T> bool chmax(T& a, T& b) {
    if (a < b) {
        a = b; return true;
    }
    return false;
}

int main() {
    int N;
    cin >> N;
    string T;
    cin >> T;
    ll summary = 0;
    ll cnt0 = 1e10;
    ll cnt1 = 1e10 * 2;
    ll cntL = 1e10 * 3;

    if (N == 1) {
        if (T[0] == '0') summary = cnt0;
        else if (T[0] == '1') summary = cnt1;
        else summary = 0;
    }
    else if (N == 2) {
        string sub = T.substr(0, 2);
        if (sub == "11") summary = cnt0;
        else if (sub == "10") summary = cnt0;
        else if (sub == "01") summary = cnt0 - 1;
        else summary = 0;
    }
    else if (N == 3) {
        string sub = T.substr(0, 3);
        if (sub == "110") summary = cnt0;
        else if (sub == "101") summary = cnt0 - 1;
        else if (sub == "011") summary = cnt0 - 1;
        else summary = 0;
    }
    else if (N >= 4) {
        int diff = 0;
        bool err = false;
        string sub = T.substr(0, 3);
        if (sub != "110" && sub != "101" && sub != "011") err = true;
        else {
            char first = T[0];
            char second = T[1];
            char third = T[2];
            if (sub == "101") diff = 1;
            else if (sub == "011") diff = 2;

            for (int i = 0; i < N; i++) {
                int amari = i % 3;
                if (amari == 0) {
                    if (T[i] != first) err = true;
                }
                else if (amari == 1) {
                    if (T[i] != second) err = true;
                }
                else if (amari == 2) {
                    if (T[i] != third) err = true;
                }

                if (err) break;
            }
        }
        if (!err) {
            summary = 1 + (cntL - N - diff) / 3;
        }
        else summary = 0;
    }

    cout << summary << "\n";
    return 0;
}
