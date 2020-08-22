#include <iostream>

using namespace std;

int main() {
	int a[5], total = 0;
	for(int i = 0; i < 5; i++) {
		cin >> a[i];
		if(a[i] < 40) {
			a[i] = 40;
		}
		total += a[i];
		
	}
	cout << total / 5;
	
}
