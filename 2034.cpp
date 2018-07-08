#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool find(int *X, int length, int value) {
	for (int i = 0; i < length; i++) {
		if (X[i] == value) {
			return true;
		}
	}
	return false;

}

int main() {
	int n;
	int m;
	while (cin >> n >> m) {
		if (n == 0 && m == 0) {
			break;
		}else {
			int A[100];
			int B[100];

			for (int i = 0; i < n; i++) {
				cin >> A[i];
			}
			for (int i = 0; i < m; i++) {
				cin >> B[i];
			}

			vector<int> C;
			for (int i = 0; i < n; i++) {
				if (!find(B, m, A[i])) {
					C.push_back(A[i]);
				}
			}

			if (C.empty()) {
				cout << "NULL" << endl;
			}else {
				stable_sort(C.begin(), C.end());
				for (int i = 0; i < C.size(); i++) {
					cout << C[i] << " ";
				}
				cout << endl;
			}



		}
	}

	return 0;
}