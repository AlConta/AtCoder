#include<iostream>
#include<vector>
#include<set>
using namespace std;

#define rep(i, a, b) for(int i = a; i < b; i++)
#define Rep(i, a, b) for(int i = a; i <= b; i++)
#define sz(s) (int)s.size()

const int MAX_N = 105;
int sns[MAX_N][MAX_N];

int main() {
    int N, Q;
    cin >> N >> Q;
    set<int> checked;
    rep(i, 0, Q) {
        int n, a, b;
        cin >> n;
        switch (n) {
        case 1:
            cin >> a >> b;
            sns[a][b] = 1;
            break;
        case 2:
            cin >> a;
            Rep(j, 1, N) {
                if(sns[j][a]==1) checked.insert(j); 
            }
            for (auto& c : checked) {
                sns[a][c] = 1;
            }            
            break;
        case 3:
            cin >> a;
            Rep(j, 1, N) {
                if (j != a && sns[a][j] == 1)  checked.insert(j);
            }
            for (auto& c : checked) {
                Rep(k, 1, N) {
                    if (k != a && sns[c][k] == 1) {
                        sns[a][k] = 1;
                    }
                }
            }
            break;
        default: break;
        }
        checked.clear();
    }
    Rep(i, 1, N) {
        Rep(j, 1, N) {
            if (sns[i][j] == 1) cout << "Y";
            else cout << "N";
        }
        cout << "\n";
    }

    return 0;
}