#include <iostream>
using namespace std;


int main() {
	int T;
	while (cin >> T) {
		for (int i = 0; i < T; i++) {
			char X;
			double Y;
			cin >> X >> Y;
			if (X >= 'A' && X <= 'Z') {
				Y += X-'A'+1;
			}else {
				Y -= X-'a'+1;
			}
			cout << Y << endl;
		}

	}

	return 0;
}