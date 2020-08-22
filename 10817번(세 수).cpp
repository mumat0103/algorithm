#include <iostream>

using namespace std;

int main() {
	int a[3], index, temp, min;
	for(int i = 0; i < 3; i++) {
		cin >> a[i];
		}
	
	for(int i = 0; i < 3; i++) {
		min = 9999;
		for(int j = i; j < 3; j++) {
			if(min > a[j]) {
				min = a[j];
				index = j;
			}
		}
		temp = a[i];
		a[i] = a[index];
		a[index] = temp;
	}
	
	cout << a[1];
	
	
	
}
