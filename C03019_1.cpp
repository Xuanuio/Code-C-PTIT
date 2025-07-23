#include<stdio.h>
#include<math.h>

#define print printf

int is_palindrome(int n) {
    int reversed = 0, original = n;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed == original;
}

int sum_digits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int t, n, start, end, cnt;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        cnt = 0;
        start = 1;
        for (int i = 1; i < n; ++i) start *= 10;
        end = start * 10 - 1;
        for (int i = start; i <= end; i++) {
            if (is_palindrome(i) && sum_digits(i) % 10 == 0) {
                cnt++;
            }
        }
        print("%d\n", cnt);
    }
}
