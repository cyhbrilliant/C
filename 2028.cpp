#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		vector<int> stack;
		long long mul = 1;
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			mul *= x;
			stack.push_back(x);
		}

		
		for (long long i = 1; i <= mul; i++) {
			bool is = true;
			for (int j = 0; j < stack.size(); j++) {
				if (i%stack[j] != 0) {
					is = false;
					break;
				}
			}
			if (is) {
				cout << i << endl;
				break;
			}
		}


	}

	return 0;
}