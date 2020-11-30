#include<iostream>
#include<vector>
using namespace std;

#define rep(i, a, b) for(int i = a; i < b; i++)
#define Rep(i, a, b) for(int i = a; i <= b; i++)
#define sz(s) (int)s.size()

int sumOrderValue(int num) {
    int sumValue = 0;
    int preS = num / 10000;
    int preA = num % 10000;
    sumValue += preS;
    for (int i = 3; i >= 0; i--) {
        int order = 1;
        rep(j, 0, i) order *= 10;
        preS = preA / order;
        preA = preA % order;
        sumValue += preS;
    }
    return sumValue;
}

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    int sum = 0;
    Rep(i, 1, N) {
        int sumOrderNum = sumOrderValue(i);
        if (sumOrderNum >= A && sumOrderNum <= B) sum += i;
    }

    cout << sum << "\n";
    return 0;
}