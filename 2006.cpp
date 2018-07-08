#include <iostream>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		int result = 1;
		for (int i = 0; i < n; i++) {
			int mul;
			cin >> mul;

			if (mul%2 != 0) {
				result = result*mul;
			}
		}
		cout << result << endl;

	}

}