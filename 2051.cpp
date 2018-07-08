#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


int main() {
	int n;
	while (cin >> n) {
		vector<int> BIN;
		int base = 0;
		while (pow(2, base) <= n) {
			base++;
		}
		for (int i = base-1; i >= 0; i--) {
			// if (n == 0) {
			// 	break;
			// }
			if (n >= pow(2, i)) {
				BIN.push_back(1);
				n = n%(int)pow(2, i);
			}else {
				BIN.push_back(0);
			}
		}
		for (vector<int>::iterator it = BIN.begin(); it != BIN.end(); it++) {
			cout << *it;
		}
		cout << endl;
	}
}