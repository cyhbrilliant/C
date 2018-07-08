#include <iostream>
#include <vector>
using namespace std;

bool isnum(char a) {
	if (a >= '0' && a <= '9') {
		return true;
	}else {
		return false;
	}
}
int main() {
	char str[10000];
	while (cin >> str) {
		vector<int> NS;
		for (int i = 0; str[i] != '\0'; i++) {
			if (isnum(str[i])) {
				int num = 0;
				while (isnum(str[i+num])){
					num++;
				}
				int sum = 0;
				int base = 1;
				for (int k = i+num-1; k >= i; k--) {
					sum += (int)(str[k]-'0')*base;
					base *= 10;
				}
				if (i > 0) {
					if (str[i-1] == '-') {
						NS.push_back(-sum);
					}
				}else {
					NS.push_back(sum);
				}
				i = i+num-1;
			}
		}
		int Asum = 0;
		for (vector<int>::iterator it = NS.begin(); it != NS.end(); it++) {
			Asum += *it;
		}
		cout << NS.size() << " " << Asum << endl; 
	}
	return 0;
}