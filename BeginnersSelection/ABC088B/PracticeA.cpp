#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

#define rep(i, a, b) for(int i = a; i < b; i++)
#define Rep(i, a, b) for(int i = a; i <= b; i++)
#define sz(s) (int)s.size()

int main() {
    int N;
    cin >> N;
    vector<int> vCard;
    rep(i, 0, N) {
        int a;
        cin >> a;
        vCard.push_back(a);
    }
    std::sort(vCard.begin(), vCard.end(), std::greater<int>());

    int sumAlice = 0;
    int sumBob = 0;
    rep(i, 0, N) {
        if (i % 2 == 0) sumAlice += vCard[i];
        else sumBob += vCard[i];
    }

    cout << sumAlice - sumBob << "\n";

    return 0;
}