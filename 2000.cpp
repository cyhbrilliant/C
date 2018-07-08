#include <iostream>
using namespace std;

char *sort(char *a, int x, int y) {
    if (a[x] > a[y]) {
        char temp = a[x];
        a[x] = a[y];
        a[y] = temp;
    }
    return a;
}

int main() {
    char *a = new char(3);
    while (cin >> a[0] >> a[1] >> a[2]) {
        a = sort(a, 0 ,1);
        a = sort(a, 0 ,2);
        a = sort(a, 1, 2);
        cout << a[0] << " " << a[1] << " " << a[2] << endl;
    }
    return 0;
}

