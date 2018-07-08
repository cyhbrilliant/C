#include <iostream>
using namespace std;

int main() {
	int N;
	while (cin >> N) {
		long long A[60] = {1 ,2, 3};
		for (int i = 3; i < N; i++) {
			A[i] = A[i-1]+A[i-2];
		}
		cout << A[N-1] << endl;
	}

	return 0;
}