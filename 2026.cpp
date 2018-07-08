#include <iostream>
using namespace std;

int main() {

	char S[101];
	while (cin.getline(S, 100)) {
		S[0] -= ('a'-'A');
		for (int i = 1; S[i] != '\0'; i++) {
			if (S[i] == ' ') {
				S[i+1] -= ('a'-'A');
			}
		}
		cout << S << endl;
	}


	return 0;
}
