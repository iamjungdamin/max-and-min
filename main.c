#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main(void) {
	srand((unsigned)time(NULL));

	int n[SIZE];
	for (int i = 0; i < SIZE - 1; i++)
		n[i] = rand() % 100 + 1;

	int max = n[0];
	for (int i = 0; i < SIZE - 1; i++)
		if (n[i + 1] > n[i])
			max = n[i + 1];

	int min = n[0];
	for (int i = 0; i < SIZE - 1; i++)
		if (n[i + 1] < n[i])
			min = n[i + 1];

	printf("최대값은 %d\n최소값은 %d\n", max, min);
	return 0;
}