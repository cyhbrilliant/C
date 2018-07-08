#include <iostream>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		for (int i = 0; i < n; i++) {
			int A[3];
			int B[3];
			cin >> A[0] >> A[1] >> A[2] >> B[0] >> B[1] >> B[2];

			int ce = 0;
			int C[3];
			C[2] = A[2]+B[2];
			ce = C[2]/60;
			C[2] = C[2]%60;

			C[1] = A[1]+B[1]+ce;
			ce = C[1]/60;
			C[1] = C[1]%60;

			C[0] = A[0]+B[0]+ce;

			cout << C[0] << " " << C[1] << " " << C[2] << endl;

		}


	}

	return 0;
}