#include <iostream>
#include <vector>
using namespace std;

struct Point {
	int x;
	int y;
};

int main() {
	int H, W;
	int Mat[100][100];
	int V_Mat[100][100];
	while (cin >> H >> W) {
		for (int i = 0; i < H; i++) {
			for (int j = 0; j < W; j++) {
				cin >> Mat[i][j];
			}
		}
		for (int i = 0; i < H; i++) {
			for (int j = 0; j < W; j++) {
				V_Mat[i][j] = 0;
			}
		}

		int num = 0;
		for (int i = 0; i < H; i++) {
			for (int j = 0; j < W; j++) {
				if (V_Mat[i][j] == 0) {
					num++;
					vector<Point> Next;
					Point p;
					p.x = i;
					p.y = j;
					Next.push_back(p);
					while (!Next.empty()) {
						Point Ip = Next.back();
						Next.pop_back();
						int Ipx = Ip.x;
						int Ipy = Ip.y;
						V_Mat[Ipx][Ipy] = 1;
						if (Ipx > 0) {
							if (V_Mat[Ipx-1][Ipy] == 0 && Mat[Ipx-1][Ipy] == Mat[Ipx][Ipy]) {
								Point Inp;
								Inp.x = Ipx-1;
								Inp.y = Ipy;
								Next.push_back(Inp);
							}
						}
						if (Ipx < H-1) {
							if (V_Mat[Ipx+1][Ipy] == 0 && Mat[Ipx+1][Ipy] == Mat[Ipx][Ipy]) {
								Point Inp;
								Inp.x = Ipx+1;
								Inp.y = Ipy;
								Next.push_back(Inp);
							}
						}
						if (Ipy > 0) {
							if (V_Mat[Ipx][Ipy-1] == 0 && Mat[Ipx][Ipy-1] == Mat[Ipx][Ipy]) {
								Point Inp;
								Inp.x = Ipx;
								Inp.y = Ipy-1;
								Next.push_back(Inp);
							}
						}
						if (Ipy < W-1) {
							if (V_Mat[Ipx][Ipy+1] == 0 && Mat[Ipx][Ipy+1] == Mat[Ipx][Ipy]) {
								Point Inp;
								Inp.x = Ipx;
								Inp.y = Ipy+1;
								Next.push_back(Inp);
							}
						}
					}
				}
			}
		}

		cout << num << endl;







	}



	return 0;
}