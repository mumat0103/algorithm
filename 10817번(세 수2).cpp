#include <iostream>

using namespace std;

int main() {
	int a[3], temp;
	for(int i = 1; i < 3; i++) {
		cin >> a[i];
		if(a[i] < a[i-1]) {
			temp = a[i-1];
			a[i-1] = a[i];
			a[i] = temp;
		}
	}			
	cout << a[1];
}
