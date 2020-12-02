#include<iostream>
#include<vector>
using namespace std;

#define rep(i, a, b) for(int i = a; i < b; i++)
#define Rep(i, a, b) for(int i = a; i <= b; i++)
#define sz(s) (int)s.size()

const int MAXSIZE = 200005;
vector<int> checked(MAXSIZE);

int main() {
    int N;
    cin >> N;
    int errA(-1), errB(-1);
    Rep(i, 1, N) {
        int A;
        cin >> A;
        if (checked[A] == 1) {
            errA = A;
        }
        else checked[A] = 1;
    }

    if (errA > 0) {
        Rep(j, 1, N) {
            if (checked[j] == 0) {
                errB = j;
                break;
            }
        }
        cout << errA << " " << errB << "\n";
    }
    else cout << "Correct\n";

    return 0;
}