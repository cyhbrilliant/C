#include <iostream>
using namespace std;

int main() {
	int n;
	int list[100];
	while (cin >> n) {
		if (n == 0) {
			break;
		}
		for (int i = 0; i < n; i++) {
			cin >> list[i];
		}


		int low = list[0];
		int index_low = 0;
		for (int i=1; i < n; i++) {
			if (list[i] < low) {
				low = list[i];
				index_low = i;
			}
		}
		int temp = list[index_low];
		list[index_low] = list[0];
		list[0] = temp;

		for (int i=0; i < n; i++) {
			cout << list[i];
			if (i != n-1) {
				 cout << " ";
			}
		}
		cout << endl;
	}
}