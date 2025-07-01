#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

#define MAX_PRIME 1000000
#define MAX_SPECIAL 1500000

long long special[MAX_SPECIAL];
int total = 0;
bool isPrime[MAX_PRIME + 1];
int digits[] = {2, 3, 5, 7};

void sieve() {
    for (int i = 0; i <= MAX_PRIME; i++) isPrime[i] = true;
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= MAX_PRIME; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= MAX_PRIME; j += i)
                isPrime[j] = false;
        }
    }
}

int is_prime(long long n) {
    if (n <= MAX_PRIME) return isPrime[n];
    if (n < 2) return 0;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

void generate(long long num, int depth) {
    if (depth > 10 || num > 1000000000LL) return;
    if (num != 0) special[total++] = num;
    for (int i = 0; i < 4; i++) {
        generate(num * 10 + digits[i], depth + 1);
    }
}

int sum_digits(long long n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    sieve();
    generate(0, 0);

    int t;
    scanf("%d", &t);
    while (t--) {
        long long a, b;
        int cnt = 0;
        scanf("%lld %lld", &a, &b);
        for (int i = 0; i < total; i++) {
            long long x = special[i];
            if (x < a || x > b) continue;
            if (is_prime(x) && is_prime(sum_digits(x))) cnt++;
        }
        printf("%d\n", cnt);
    }
}