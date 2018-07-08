#include <iostream>
using namespace std;

int main() {
	int n, m;
	while (cin >> n >> m) {
		if (n == 0 && m == 0) {
			break;
		}else if (n <= 100) {
			bool needin = true;
			for (int i = 0; i < n; i++) {
				int t;
				cin >> t;
				if (m < t && needin) {
					cout << m << " " << t;
					needin = false;
				}else {
					cout << t;
				}

				if (i != (n-1)) {
					cout << " ";
				}
			}
			cout << endl;
		}
	}

	return 0;
}