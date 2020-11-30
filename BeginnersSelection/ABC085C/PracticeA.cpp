#include<iostream>
#include<vector>
using namespace std;

#define rep(i, a, b) for(int i = a; i < b; i++)
#define Rep(i, a, b) for(int i = a; i <= b; i++)
#define sz(s) (int)s.size()

int main() {
    int N, Y;
    cin >> N >> Y;
    bool find = false;
    int i(0), j(0), k(0);
    for (i = N; i >= 0; --i) {
        for (j = N -i; j >= 0; --j) {
            k = N - i - j;
            if (10000 * i + 5000 * j + 1000 * k == Y) find = true;
            if (find) break;
        }
        if (find) break;
    }
    if (!find) i = j = k = -1; 
    
    printf("%d %d %d\n", i, j, k);

    return 0;
}