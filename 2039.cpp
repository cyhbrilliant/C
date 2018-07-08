#include <iostream>
using namespace std;

int main() {
	int M;
	while (cin >> M) {
		for (int i = 0; i < M; i++) {
			double A, B, C;
			cin >> A >> B >> C;
			bool is = true;

			if (A+B <= C) {
				is =false;
			}
			if (A+C <= B) {
				is =false;
			}
			if (C+B <= A) {
				is =false;
			}
			if (is) {
				cout << "YES" << endl;
			}else {
				cout << "NO" << endl;
			}

		}
	}



	return 0;
}