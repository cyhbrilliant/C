#include <iostream>
using namespace std;

int main() {
	int N;
	while (cin >> N) {
		if (N == 1) {
			cout << "3" << endl;
		}else {
			long long result = 1;
			long long A = 1;
			long long B = 1;
			for (int i = 1; i < N; i++) {
				A = 2*A+B;
				B = A-B;
				
			}
			
			cout << (2*A+B) << endl;
		}
	}

	return 0;
}