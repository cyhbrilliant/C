#include <iostream>
using namespace std;

int Cost[6] = {100, 50, 10, 5, 2, 1};
int main() {
	int n;
	while (cin >> n) {
		if (n ==0) {
			break;
		}
		if (n > 0 && n < 100) {
			int num = 0;
			for (int i = 0; i < n; i++) {
				int money;
				cin >> money;
				for (int j = 0; j < 6; j++) {
					int t = money/Cost[j];
					if (t == 0) {
						continue;
					}
					num += t;
					money = money%Cost[j];
				}

			}
			cout << num << endl;
		}
	}

	return 0;
}