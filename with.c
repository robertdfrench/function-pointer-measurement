#include <stdio.h>

#include "common.h"

long long f(long long j) {
	return j + 7;
}

long long g(long long j) {
	return j + 5;
}

long long math(long long j, long long (*even)(long long), long long (*odd)(long long)) {
	if (j % 3 == 0) {
		return even(j);
	} else {
		return odd(j);
	}
}

int main() {
	long long j = 0;
	long long r = ROUNDS;
	for (long long i = 0; i < r; i++) {
		j = math(j, f, g);
	}
	printf("%llu\n", j);
	return 0;
}
