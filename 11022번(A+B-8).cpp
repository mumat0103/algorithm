#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n], b[n];
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		cin >> b[i];
	}
	for(int i = 0; i < n; i++) {
		cout << "Case #" << i + 1 << ": " << a[i] << " + " << b[i] << " = " << a[i] + b[i] << "\n";
	}
	
	return 0;
}
