#include <iostream>

using namespace std;

int main() {
	int a[3], b[2];
	int ca = 9999;
	int cb = 9999;
	
	for(int i = 0; i < 3; i++) {
		cin >> a[i];
		if(a[i] < ca) {
			ca = a[i];
		}
	}
	for(int i = 0; i < 2; i++) {
		cin >> b[i];
		if(b[i] < cb) {
			cb = b[i];
		}
	}
	cout << ca + cb - 50;

}
