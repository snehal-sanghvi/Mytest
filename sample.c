#include <stdio.h>
#include <stdbool.h>

// Compute and print the sum of the first 4 prime numbers
int main(void)
{
	int count = 0;      // number of primes found
	int num = 2;        // current number to test
	int sum = 0;        // running sum of primes

	while (count < 4) {
		bool is_prime = true;
		for (int i = 2; i * i <= num; i++) {
			if (num % i == 0) {
				is_prime = false;
				break;
			}
		}
		if (is_prime) {
			sum += num;
			count++;
		}
		num++;
	}

	printf("Sum of first 4 prime numbers = %d\n", sum);
	return 0;
}

