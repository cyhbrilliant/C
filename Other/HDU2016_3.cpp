#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;

struct Student{
	char name[20];
	int num;
	int CH;
	int MA;
	int EN;
};

bool comp(Student a, Student b) {
	int AS = a.CH+a.MA+a.EN;
	int BS = b.CH+b.MA+b.EN;
	cout << AS << BS << endl;

	if (AS != BS) {
		return AS > BS;
	}else {
		return a.num < b.num;
	}
}


int main() {
	vector<Student> S;
	ifstream ifs("score.txt");
	char a[1000];
	ifs.getline(a, 1000);

	Student stu;
	while (ifs >> stu.name >> stu.num >> stu.CH >> stu.MA >> stu.EN) {
		S.push_back(stu);
	}

	sort(S.begin(), S.end(), comp);
	cout << S[0].name << S[0].num << S[0].CH << S[0].MA << S[0].EN << endl;


	return 0;
}