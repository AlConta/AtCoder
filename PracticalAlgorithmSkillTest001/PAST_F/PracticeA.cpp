#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

#define rep(i, a, b) for(int i = a; i < b; i++)
#define Rep(i, a, b) for(int i = a; i <= b; i++)
#define sz(s) (int)s.size()

struct DIC_INDEX {
	int id;
	string textBase;
	string textLower;

	bool operator<(const DIC_INDEX& right) const {
		return textLower == right.textLower ? textBase < right.textBase : textLower < right.textLower;
	}
};

vector<DIC_INDEX> vsDIC;


int main() {
	string str;
	cin >> str;
	int size = sz(str);


	int start = -1;
	rep(i, 0, size) {
		char c = str[i];
		if (isupper(c)) {
			if (start != -1) {
				string sub = str.substr(start, i - start + 1);
				
				DIC_INDEX ind;
				ind.textBase = sub;
				std::transform(sub.begin(), sub.end(), sub.begin(), ::tolower);

				ind.textLower = sub;

				vsDIC.push_back(ind);

				start = -1;
			}
			else start = i;
		}
	}

	sort(vsDIC.begin(), vsDIC.end());

	string out;
	for (auto& c : vsDIC) {
		out += c.textBase;
	}

	cout << out << "\n";
	return 0;
}