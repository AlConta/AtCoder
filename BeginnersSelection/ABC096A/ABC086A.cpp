#include<iostream>
#include<vector>
using namespace std;

#define rep(i, a, b) for(int i = a; i < b; i++)
#define Rep(i, a, b) for(int i = a; i <= b; i++)
#define sz(s) (int)s.size()

int main() {
    int a, b;
    cin >> a >> b;
    if ((a * b) % 2 == 0) cout << "Even\n";
    else cout << "Odd\n";

    return 0;
}