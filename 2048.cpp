#include <iostream>
#include <iomanip>
using namespace std;


// bool Like(long long *Arr, int n) {
// 	for (int i = 0; i < n; i++) {
// 		if (Arr[i] == i) {
// 			return false;
// 		}
// 	}
// 	return true;
// }

int main() {
	int C;
	while (cin >> C) {
		for (int i = 0; i < C; i++) {
			double n;
			cin >> n;
			if (n == 2.0) {
				cout << "50.00%" << endl;
			}else {
				double A[30];
				double B[30];
				A[1] = 0;
				A[2] = 0.5;
				B[2] = 1.0;

				for (int k = 3; k <= n; k++) {
					B[k] = 1.0/(k-1.0)*A[k-2]+(k-2.0)/(k-1.0)*B[k-1];
					A[k] = (k-1.0)/(double)k*B[k];
				}
				cout << setiosflags(ios::fixed) << setprecision(2) << A[(int)n]*100.0 << "%" << endl; 
			}
			
		}
	}



}