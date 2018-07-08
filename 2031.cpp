#include <iostream>
#include <vector>
#include <cmath>
using namespace std;



int main() {
	int N;
	int R;
	while (cin >> N >> R) {
		bool sign;
		if (N >= 0) {
			sign = true;
		}else {
			sign = false;
		}
		N = abs(N);

		int baseT = 0;
		while ((N-pow(R,baseT)) > 0) {
			baseT++;
		}

		if (baseT == 0) {
			cout << '0' << endl;
		}else {
			vector<int> result;
			for (int i = baseT-1; i >= 0; i--) {
				int re = N/pow(R,i);
				result.push_back(re);

				if (re > 0) {
					N = N%(int)pow(R, i);
				}
			}
			if (!sign) {
				cout << '-';
			}
			for (int i = 0; i < result.size(); i++) {
				if (result[i] == 10) {
					cout << 'A';
				}else if (result[i] == 11) {
					cout << 'B';
				}else if (result[i] == 12) {
					cout << 'C';
				}else if (result[i] == 13) {
					cout << 'D';
				}else if (result[i] == 14) {
					cout << 'E';
				}else if (result[i] == 15) {
					cout << 'F';
				}else {
					cout << result[i];
				}
			}
			cout << endl;


		}


	}


	return 0;
}