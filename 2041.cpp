#include <iostream>
using namespace std;


int FlS[50];
// int Floor(int now, int limit) {
// 	int Method = 0;
// 	if (now+1 == limit) {
// 		Method++;
// 	}
// 	if (now+2 == limit) {
// 		Method += 2;
// 	}

// 	if (now+2 < limit) {
// 		Method += Floor(now+2, limit);
// 		Method += Floor(now+1, limit);
// 	}
// 	return Method;
// }

void Floor(int X) {
	if (FlS[X-1] != 0) {
		FlS[X] += FlS[X-1];
	}else {
		Floor(X-1);
		FlS[X] += FlS[X-1];
	}
	if (FlS[X-2] != 0) {
		FlS[X] += FlS[X-2];
	}else {
		Floor(X-2);
		FlS[X] += FlS[X-2];
	}
}


int main() {
	int N;
	while (cin >> N) {
		for (int i = 0; i < N; i++) {
			int M;
			cin >> M;
			for (int j = 0; j < 50; j++) {
				FlS[j] = 0;
			}
			FlS[1] = 0;
			FlS[2] = 1;
			FlS[3] = 2;

			if (M > 3) {
				Floor(M);
			}
			cout << FlS[M] << endl;

		}
	}


	return 0;
}