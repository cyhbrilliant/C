#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;


int main() {
	int n, m;
	while (cin >> n >> m) {
		double Save[55][10];
		double avgStu[55];
		double avgLe[10];
		for (int i = 0; i < 55; i++) {
			avgStu[i] = 0;
		}
		for (int i = 0; i < 10; i++) {
			avgLe[i] = 0;
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> Save[i][j];
				avgStu[i] += Save[i][j];
				avgLe[j] += Save[i][j];
			}
		}
		// for (int i = 0; i < n; i++) {
		// 	cout << setiosflags(ios::fixed) << setprecision(2) << avgStu[i] << " ";
		// }
		// cout << endl;
		// for (int i = 0; i < m; i++) {
		// 	cout << setiosflags(ios::fixed) << setprecision(2) << avgLe[i] << " ";
		// }
		// cout << endl;

		for (int i = 0; i < n; i++) {
			avgStu[i] /= (double)m;
			// cout << setiosflags(ios::fixed) << setprecision(2) << avgStu[i];
			printf("%.2lf", avgStu[i]);

			if (i != n-1) {
				cout << " ";
			}
		}
		cout << endl;

		for (int i = 0; i < m; i++) {
			avgLe[i] /= (double)n;
			// cout << setiosflags(ios::fixed) << setprecision(2) << avgLe[i];
			printf("%.2lf", avgLe[i]);
			if (i != m-1) {
				cout << " ";
			}
		}
		cout << endl;

		int num = 0;
		for (int i = 0; i < n; i++) {
			bool is = true;
			for (int j = 0; j < m; j++) {
				if (Save[i][j] < avgLe[j]) {
					is = false;
					break;
				}				
			}
			if (is) {
				num++;
			}
		}
		cout << num << endl << endl;
	}
	return 0;
}