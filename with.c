#include <stdio.h>

#include "common.h"

void f(long long* j) {
	*j += 7;
}

void g(long long* j) {
	*j += 5;
}

void math(long long* j, void (*even)(long long*), void (*odd)(long long*)) {
	if (*j % 3 == 0) {
		even(j);
	} else {
		odd(j);
	}
}

int main() {
	long long j = 0;
	long long r = ROUNDS;
	for (long long i = 0; i < r; i++) {
		math(&j, f, g);
	}
	printf("%llu\n", j);
	return 0;
}
