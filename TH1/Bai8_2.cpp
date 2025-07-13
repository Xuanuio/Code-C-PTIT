#include <stdio.h>

int countWays(int n) {
    int count = 0;
    for (int start = 1; start < n; ++start) {
        int sum = 0;
        for (int k = start; sum < n; ++k) {
            sum += k;
            if (sum == n) {
                count++;
                break;
            }
        }
    }
    return count;
}

int main() {
    int t, n;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        printf("%d\n", countWays(n));
    }
}