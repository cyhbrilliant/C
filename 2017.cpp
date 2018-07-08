#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		for (int i = 0; i < n; i++) {
			string a;
			cin >> a;
			int num = 0;
			for (int j = 0; j < a.length(); j++) {
				if (a[j] >= '0' && a[j] <= '9') {
					num++;
				}
			}
			cout << num << endl;

		}
	}
	return 0;
}
