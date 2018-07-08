#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int N;
	while (cin >> N) {
		bool is = true;
		for (int i = 2; i <= sqrt(N); i++) {
			if (N%i == 0) {
				is = false;
			}
		}
		if (is) {
			cout << "YES" << endl;
		}else {
			cout << "NO" << endl;
		}
	}

	return 0;
}