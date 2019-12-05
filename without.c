#include <stdio.h>

#include "common.h"

long long f(long long j) {
	return j + 7;
}

long long g(long long j) {
	return j + 5;
}

int main() {
	long long j = 0;
	for (long long i = 0; i < ROUNDS; i++) {
		if (j % 3 == 0) {
			j = f(j);
		} else {
			j = g(j);
		}
	}
	printf("%llu\n", j);
	return 0;
}
