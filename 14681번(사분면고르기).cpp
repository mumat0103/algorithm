#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	
	if( a > 0 && b > 0) {
		printf("%d", 1);
	}
	if ( a < 0 && b > 0) {
		printf("%d", 2);
	}
	if ( a < 0 && b < 0) {
		printf("%d", 3);
	}
	if ( a > 0 && b < 0) {
		printf("%d", 4);
	}	
	return 0;
} 
