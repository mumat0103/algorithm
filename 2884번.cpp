#include <stdio.h>

int main() {
	int h, m;
	
	scanf("%d %d", &h, &m);
	if (m - 45 < 0 && h - 1 < 0) {
		printf("%d %d", 24 + (h - 1), 60 + (m - 45));
	} else if (m - 45 < 0) {
		printf("%d %d", h - 1, 60 + (m - 45));
	} else  {
		printf("%d %d", h, m - 45);
	}
}
