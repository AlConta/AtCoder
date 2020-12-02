#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

#define rep(i, a, b) for(int i = a; i < b; i++)
#define Rep(i, a, b) for(int i = a; i <= b; i++)
#define sz(s) (int)s.size()

int main() {
    vector<int> number;
    rep(i, 0, 6){
        int n;
        cin >> n;
        number.push_back(n);
    }

    std::sort(number.begin(), number.end());

    cout << number[(int)number.size() - 3] << "\n";

    return 0;
}