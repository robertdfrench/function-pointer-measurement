#include <stdio.h>

#include "common.h"

int main() {
	long long j = 0;
	for (long long i = 0; i < ROUNDS; i++) {
		if (j % 3 == 0) {
			j += 7;
		} else {
			j += 5;
		}
	}
	printf("%llu\n", j);
	return 0;
}
