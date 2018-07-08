#include <iostream>
using namespace std;


int main() {
	int C;
	while (cin >> C) {
		for (int i = 0; i < C; i++) {
			int n;
			cin >> n;
			long long X[10010] = {0, 2, 7};
			if (n < 3) {
				cout << X[n] << endl;
			}else {
				for (int i = 3; i <= n; i++) {
					X[i] = X[i-1]+(i-1)*4+1;
				}
				cout << X[n] << endl;
			}
		}
	}

	return 0;
}