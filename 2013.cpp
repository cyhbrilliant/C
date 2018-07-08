#include <iostream>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		if (n > 1 && n < 30) {
			int sum = 1; 
			for (int i = 0; i < n-1; i++) {
				sum = (sum+1)*2;
			}
			cout << sum << endl;
		}
		
	}

	return 0;
}