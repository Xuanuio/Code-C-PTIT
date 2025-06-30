#include <stdio.h>
#include <math.h>

int cp(int n) {
    int x = sqrt(n);
    if (x * x == n) return x;
    return 0;
}

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int a, b, c, d, e, f;
    scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
    int s = a * b + c * d + e * f;
    int x = cp(s);
    if (!x) printf("NO\n");
    else {
        if (a > b) swap(&a, &b);
        if (c > d) swap(&c, &d);
        if (e > f) swap(&e, &f);
        if (b == d && d == f && f == x) printf("YES\n");
        else {
            if (d > b) { swap(&a, &c); swap(&b, &d); }
            if (f > b) { swap(&a, &e); swap(&b, &f); }
            if (b == x) {
                if (c + e == x || d + f == x || c + f == x || d + e == x) printf("YES\n");
                else printf("NO\n");
            } else printf("NO\n");
        }
    }
}