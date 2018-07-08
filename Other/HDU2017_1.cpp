#include <iostream>
#include <cmath>
using namespace std;

bool ACC(int x, int y) {
	int num = pow(x-y, 2)+x-y+41;
	for (int i = 2; i <= sqrt(num); i++) {
		if (num%i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int A[4];
	while (cin >> A[0] >> A[1] >> A[2] >> A[3]) {
		bool OK = true;
		for (int i = 0; i < 4; i++) {
			if (A[i] <= 0 || A[i] >= 50) {
				OK = false;
				break;
			}
		}
		if (OK) {
			break;
		}
	}

	bool win = true;
	int Gen = 1;
	for (int i = 1; i < 4; i++) {
		if(!ACC(A[0], A[i])) {
			win = false;
			break;
		}
	}
	if (win) {
		cout << "WIN" << endl;
	}else {
		cout << Gen << endl;
	}







	return 0;
}