#include <iostream>
using namespace std;


int main() {
	int n;
	while (cin >> n) {
		int YH[30][30];
		for (int i = 0; i < 30; i++) {
			for (int j = 0; j < 30; j++) {
				YH[i][j] = 0;
			}
		}
		for (int i = 0; i < n; i++) {
			YH[i][0] = 1;
		}
		for (int i = 1; i < n; i++) {
			for (int j = 1; j < i+1; j++) {
				YH[i][j] = YH[i-1][j-1]+YH[i-1][j];
			}
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < i+1; j++) {
				cout << YH[i][j];
				if (j != i) {
					cout << " ";
				}
			}
			cout << endl;
		}
		cout << endl;


	}


	return 0;
}