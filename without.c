#include <stdio.h>

#include "common.h"

void f(long long* j) {
	*j += 7;
}

void g(long long* j) {
	*j += 5;
}

int main() {
	long long j = 0;
	for (long long i = 0; i < ROUNDS; i++) {
		if (j % 3 == 0) {
			f(&j);
		} else {
			g(&j);
		}
	}
	printf("%llu\n", j);
	return 0;
}
