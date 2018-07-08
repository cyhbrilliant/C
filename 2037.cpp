#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct CH{
	int S;
	int E;
};

bool comp(const CH &a, const CH &b){
	return a.E <= b.E;
}

int main() {
	int n;
	while (cin >> n) {
		if (n == 0) {
			break;
		}else {
			vector<CH> chs;
			CH ch;
			for (int i =0; i < n; i++) {
				cin >> ch.S >> ch.E;
				chs.push_back(ch);
			}
			// sort(chs.begin(), chs.end(), comp);
			// chs.erase(chs.begin());
			int num = 0;
			while (!chs.empty()){
				sort(chs.begin(), chs.end(), comp);
				int Endt = chs[0].E;
				num++;
				for (vector<CH>::iterator it = chs.begin(); it != chs.end(); it++) {
					if ((*it).S < Endt) {
						chs.erase(it);
						it--;
					}
				}
				// for (vector<CH>::iterator it = chs.begin(); it != chs.end(); it++) {
				// 	cout << (*it).S << " " << (*it).E << endl;
				// }
				// cout << endl;
			}
			cout << num << endl;

			// for (vector<CH>::iterator it = chs.begin(); it != chs.end(); it++) {
			// 	cout << (*it).S << " " << (*it).E << endl;
			// }
		}


	}

	return 0;
}
