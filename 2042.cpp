#include <iostream>
using namespace std;


int main() {
	int N;
	while (cin >> N) {
		for (int i = 0; i < N; i++) {
			int a;
			cin >> a;

			long long sheep = 3;
			for (int j = 0; j < a; j++) {
				sheep = (sheep-1)*2;
			}

			cout << sheep << endl;
		}
	}


	return 0;
}