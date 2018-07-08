#include <iostream>
using namespace std;

int main() {
	int C;
	while (cin >> C) {
		for (int i = 0; i < C; i++) {
			int N, M;
			cin >> N >> M;//cal C N N-M = C N M
			long long X = 1;
			for (int k = N; k > N-M; k--) {
				X *=k;
			}
			for (int k = M; k > 0; k--) {
				X /=k;
			}
			long long P;
			if (M == 2) {
				P = 1;
			}else {
				long long T[30] = {0, 0, 1};
				for (int k = 3; k <= M; k++) {
					T[k] = (k-1)*(T[k-1]+T[k-2]);
				}
				P = T[M];
			}
			cout << X*P << endl;

		}



	}



	return 0;
}
