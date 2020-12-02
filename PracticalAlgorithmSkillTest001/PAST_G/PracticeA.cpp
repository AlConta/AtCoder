#include<iostream>
#include<vector>
using namespace std;

#define rep(i, a, b) for(int i = a; i < b; i++)
#define Rep(i, a, b) for(int i = a; i <= b; i++)
#define sz(s) (int)s.size()

typedef long long ll;
const int MAXN = 11;
ll HAPPY[MAXN][MAXN];
ll getGroupHappySum(vector<int>& g) {
    ll sum = 0;
    int size = (int)g.size();
    for (int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            sum += HAPPY[g[i]+1][g[j] + 1];
        }
    }
    return sum;
}
int main() {
    int N;
    cin >> N;
    Rep(i, 1, N) {
        Rep(j, i+1, N) {
            ll A;
            cin >> A;
            HAPPY[i][j] = A;
        }
    }

    bool first = true;
    ll sumH = 0;
    for (int bit = 0; bit < (1 << N); ++bit) {
        int sum1 = 0;
        int bitMask = 0;
        vector<int> g1, g2, g3;
        vector<int> gRemain;
        for (int i = 0; i < N; ++i) {
            if (bit & (1 << i)) g1.push_back(i);
            else {
                gRemain.push_back(i);
                bitMask |= (1 << i);
            }
        }
        int N2 = sz(gRemain);
        for (int bit2 = 0; bit2 < (1 << N2); ++bit2) {
            for (int j = 0; j < N2; ++j) {
                if (bit2 & (1 << j)) g2.push_back(gRemain[j]);
                else g3.push_back(gRemain[j]);
            }

            ll sum = getGroupHappySum(g1) + getGroupHappySum(g2) + getGroupHappySum(g3);
            if (first) {
                sumH = sum;
                first = false;
            }
            else if(sumH < sum) sumH = sum;

            g2.clear();
            g3.clear();
        }


    }

    cout << sumH << "\n";

    return 0;
}