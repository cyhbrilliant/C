#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


struct Point {
	int x;
	int y;
};
bool comp(double a, double b) {
	return a < b;
}

double dist(Point a, Point b) {
	return sqrt(pow(a.x-b.x, 2)+pow(a.y-b.y,2));
}

int main() {
	int N;
	while (cin >> N) {
		vector<Point> P; 
		for (int i = 0; i < N; i++) {
			Point pt;
			cin >> pt.x >> pt.y;
			P.push_back(pt);
		}
		vector<double> D;
		for (int i = 0; i < N-1; i++) {
			for (int j = i+1; j < N; j++) {
				D.push_back(dist(P[i], P[j]));
			}
		}
		stable_sort(D.begin(), D.end(), comp);
		cout << D[0] << endl;
	}

}