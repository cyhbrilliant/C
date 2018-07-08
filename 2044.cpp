#include <iostream>
using namespace std;

long long fib[50];
int main() {
	fib[0] = 1;
	fib[1] = 1;
	for (int i = 2; i < 50; i++) {
		fib[i] = fib[i-1]+fib[i-2];
	}
	int N;
	while (cin >> N) {
		for (int i = 0; i < N; i++) {
			int A, B;
			cin >> A >> B;
			cout << fib[B-A] << endl;

		}
	}

	return 0;
}