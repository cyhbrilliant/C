#include <iostream>
using namespace std;
int H, W, KH, KW;
char A[100][100], K[100][100];

bool Occupy(int Rest[100][100], int x, int y) {
	bool occ = true;
	for (int i = x; i < x+KH; i++) {
		for (int j = y; j < y+KW; j++) {
			if (Rest[i][j] == 1) {
				occ = false;
				break;
			}
		}
	}
	return occ;
}

bool Same(int x, int y) {
	bool same = true;
	for (int i = x; i < x+KH; i++) {
		for (int j = y; j < y+KW; j++) {
			if (A[i][j] != K[i-x][j-y]) {
				same = false;
				break;
			}
		}
	}
	return same;
}

void SetVisit(int Rest[100][100], int x, int y) {
	for (int i = x; i < x+KH; i++) {
		for (int j = y; j < y+KW; j++) {
			Rest[i][j] = 1;
		}
	}
}

void Copy(int M[100][100], int N[100][100]) {
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			M[i][j] = N[i][j];
		}
	}
}

int MAXPATCH(int Rest[100][100], int x, int y) {
	while (!Occupy(Rest, x, y) || !Same(x, y)) {
		if (y == W-KW) {
			if (x == H-KH) {
				return 0;
			}else {
				y = 0;
				x++;
			}
		}else {
			y++;
		}
	}
	int Xc = x;
	int Yc = y;
	if (y == W-KW) {
		if (x == H-KH) {
			return 0;
		}else {
			y = 0;
			x++;
		}
	}else {
		y++;
	}
	// cout << x << " " << y << endl;

	int RestC[100][100];
	Copy(RestC, Rest);
	int C1 = MAXPATCH(RestC, x, y);
	SetVisit(Rest, Xc, Yc);
	cout << Xc << " " << Yc << endl;
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			cout << Rest[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	int C2 = MAXPATCH(Rest, x, y)+1;
	if (C1 > C2) {
		return C1;
	}else {
		return C2;
	}
}

int main() {
	cin >> H >> W; 
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			cin >> A[i][j];
		}
	}
	cin >> KH >> KW; 
	for (int i = 0; i < KH; i++) {
		for (int j = 0; j < KW; j++) {
			cin >> K[i][j];
		}
	}
	int Rest[100][100];
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			Rest[i][j] = 0;
		}
	}
	cout << MAXPATCH(Rest, 0, 0);

	return 0;
}