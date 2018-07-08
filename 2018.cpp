#include <iostream>
using namespace std;

int main() {
	int list[56];
	list[1] = 1;
	list[2] = 1;
	list[3] = 1;
	list[4] = 1;
	for (int i = 5; i < 56; i++) {
		list[i] = list[i-1]+list[i-3];
	}
	int n;
	while (cin >> n) {
		if (n == 0) {
			break;
		}else if (n > 0 && n < 55) {
			int sum = 0;
			for (int i = 1; i <= n; i++) {
				sum += list[i];
			}
			cout << sum << endl;
		}

	}


	return 0;
}