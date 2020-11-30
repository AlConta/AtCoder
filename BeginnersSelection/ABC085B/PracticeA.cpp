#include<iostream>
#include<vector>
#include<set>
using namespace std;

#define rep(i, a, b) for(int i = a; i < b; i++)
#define Rep(i, a, b) for(int i = a; i <= b; i++)
#define sz(s) (int)s.size()

int main() {
    int N;
    cin >> N;
    set<int> mochi;
    rep(i, 0, N) {
        int d;
        cin >> d;
        mochi.insert(d);
    }

    cout << (int)mochi.size() << "\n";

    return 0;
}