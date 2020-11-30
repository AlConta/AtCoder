#include<iostream>
#include<vector>
using namespace std;

#define rep(i, a, b) for(int i = a; i < b; i++)
#define Rep(i, a, b) for(int i = a; i <= b; i++)
#define sz(s) (int)s.size()

int main() {
    int N;
    cin >> N;
    vector<long> V;
    rep(i, 0, N) {
        int A;
        cin >> A;
        V.push_back(A);
    }
    int roop = 0;
    while (1) {
        bool all = true;
        for (auto& c : V) {
            int amari = c % 2;
            if (amari == 1) {
                all = false;
                break;
            }
            else {
                c = c / 2;
            }
        }
        if (all) roop++;
        else break;
    }

    cout << roop << "\n";

    return 0;
}