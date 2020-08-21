#include <iostream>

using namespace std;

int main() {
	int n, firstnum, secondnum, sumnum,
	 result, count = 0;
	
	cin >> n;
	
	if(n < 10)
		n *= 10;
	
	result = n;
	cout << result << "\n";
	
	while(1) {
		firstnum = result / 10 ;
		cout << "first num : " << firstnum << "\n";
		secondnum = result % 10;
		cout << "second num : " << secondnum << "\n";
		sumnum = firstnum + secondnum;
		cout << "sum num : " << sumnum << "\n";
		result = (secondnum * 10) + (sumnum % 10);
		cout << "result : " << result << "\n";
		
		count++;
		cout << "count : " << count << "\n\n";
		
		if(n == result) {
			break;
		}
	}
	cout << count;
}
