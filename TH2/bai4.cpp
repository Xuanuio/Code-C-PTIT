#include <stdio.h>
#include <string.h>

#define MAX 1005

void strip_leading_zeros(char *s) {
    int i = 0;
    while (s[i] == '0') i++;
    if (s[i] == '\0') { 
        s[0] = '0'; s[1] = '\0';
    } else {
        memmove(s, s + i, strlen(s + i) + 1);
    }
}

int compare(char *a, char *b) {
    int la = strlen(a), lb = strlen(b);
    if (la > lb) return 1;
    if (la < lb) return -1;
    return strcmp(a, b);
}

void subtract(char *a, char *b, char *res) {
    int la = strlen(a), lb = strlen(b);
    int i = la - 1, j = lb - 1, k = 0, borrow = 0;
    int tmp;

    while (i >= 0 || j >= 0) {
        int digit_a = (i >= 0) ? a[i] - '0' : 0;
        int digit_b = (j >= 0) ? b[j] - '0' : 0;

        tmp = digit_a - digit_b - borrow;
        if (tmp < 0) {
            tmp += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }

        res[k++] = tmp + '0';
        i--; j--;
    }

    while (k > 1 && res[k - 1] == '0') k--;

    res[k] = '\0';

    for (int i = 0; i < k / 2; i++) {
        char tmp = res[i];
        res[i] = res[k - 1 - i];
        res[k - 1 - i] = tmp;
    }
}

int main() {
    char A[MAX], B[MAX], result[MAX];

    fgets(A, MAX, stdin);
    fgets(B, MAX, stdin);

    A[strcspn(A, "\n")] = '\0';
    B[strcspn(B, "\n")] = '\0';

    strip_leading_zeros(A);
    strip_leading_zeros(B);

    int cmp = compare(A, B);
    if (cmp == 0) {
        printf("0\n");
    } else if (cmp > 0) {
        subtract(A, B, result);
        printf("%s\n", result);
    } else {
        subtract(B, A, result);
        printf("-%s\n", result);
    }
}
