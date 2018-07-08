#include <iostream>
using namespace std;


int main() {
	int A;
	int B;
	while (cin >> A >> B) {
		if (A == 0 && B == 0) {
			break;
		}else {
			int result = 1;
			for (int i = 0; i < B; i++) {
				result = ((A%1000) * result)%1000;
			}
			cout << result << endl;
		}
	}

	return 0;
}