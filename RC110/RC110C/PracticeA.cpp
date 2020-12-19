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

    cout << N << "\n";
    return 0;
}

2 4 1 5 3  6 9 10 7 8

2 3 5 1 4
1 5 4 2 3
2 1 3 5 4
4 2 1 5 3

2 4 1 3 5 6

54321

123
132
213 OK
231 OK
321 N
312 OK
