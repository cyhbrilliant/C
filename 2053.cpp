#include <iostream>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		int num = 0;
		for (int i = 1; i <= n; i++) {
			if (n%i == 0) {
				num ++;
			}
		}
		cout << num%2 << endl; 
	}

	return 0; 
}