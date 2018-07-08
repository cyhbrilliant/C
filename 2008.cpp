#include <iostream>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		if (n == 0) {
			break;
		}
		int neg = 0;
		int zero = 0;
		int pos = 0;
		for (int i = 0; i < n; i++) {
			double number;
			cin >> number;
			if (number > 0) {
				pos++;
			}else if (number < 0) {
				neg++;
			}else {
				zero++;
			}
		}
		cout << neg << " " << zero << " " << pos << endl;
	}
}