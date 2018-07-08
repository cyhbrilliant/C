#include <iostream>
#include <vector>
using namespace std;


int main() {
	char S[1000];
	while (cin >> S) {
		vector<int> index;
		char max = 'A';
		int count = 0;
		for (int i = 0; S[i] != '\0'; i++) {
			if (S[i] > max) {
				max = S[i];
			}
			count++;
		}

		for (int i = 0; S[i] != '\0'; i++) {
			if (S[i] == max) {
				index.push_back(i);
			}
		}

		int bias = 0;
		for (int i = 0; i < index.size(); i++) {
			for (int j = count; j > index[i]+bias; j--) {
				S[j+5] = S[j];
			}
			S[index[i]+bias+1] = '(';
			S[index[i]+bias+2] = 'm';
			S[index[i]+bias+3] = 'a';
			S[index[i]+bias+4] = 'x';
			S[index[i]+bias+5] = ')';
			count += 5;
			bias +=5;
			
		}
		cout << S << endl;

	}

	return 0;
}