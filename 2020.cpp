#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		if (n == 0) {
			break;
		}else if (n <= 100) {
			int x[100];
			int abs_x[100];
			for (int i = 0; i < n; i++) {
				cin >> x[i];
				abs_x[i] = abs(x[i]);
			}

			for (int i = 0; i < n; i++) {
				int index = i;
				int high = abs_x[i];
				for (int j = i+1; j < n; j++) {
					if (abs_x[j] > high) {
						high = abs_x[j];
						index = j;
					}
				}
				// cout << index << endl;
				int t = abs_x[i];
				abs_x[i] = abs_x[index];
				abs_x[index] = t;
				t = x[i];
				x[i] = x[index];
				x[index] = t;

				// for (int i = 0; i < n; i++) {
				// 	cout << x[i];
				// 	if (i != n-1) {
				// 		cout << " ";
				// 	}
				// }
				// cout << endl;
			}

			for (int i = 0; i < n; i++) {
				cout << x[i];
				if (i != n-1) {
					cout << " ";
				}

			}
			cout << endl;

		}
	}

	return 0;
}