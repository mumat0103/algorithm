#include <iostream>

using namespace std;

int main() {
	int a, b;
	int o1, o2, o3;
	
	cin >> a;
	cin >> b;
	
	o1 = b / 100;
	o2 = (b / 10) % 10;
	o3 = b % 10;
	
	cout << a * o3 <<"\n";
	cout << a * o2 <<"\n";
	cout << a * o1 <<"\n";
	cout << a * b <<"";
	
	//3 * 100 + 8 * 10 + 5
}
