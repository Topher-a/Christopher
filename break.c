#include <stdio.h>

int main() {
	int i;

	for (i = 1; i <= 20 ; i++) {
		if (i == 16) {
			continue;
		} else {
			printf("%d", i);
		}
	}

	return 0;
}
