#include <stdio.h>
#include <math.h>

void solve() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a == 0) {
        if (b == 0) {
            printf(c ? "NO" : "Vo So Nghiem");
            return;
        }
        printf("%.2f", -1.0 * c / b);
        return;
    }
    int delta = b * b - 4 * a * c;
    if (delta < 0) {
        printf("NO");
        return;
    }
    float x1 = (-b - sqrt(delta)) / (2 * a);
    if (delta == 0) {
        printf("%.2f", x1);
        return;
    }
    float x2 = (-b + sqrt(delta)) / (2 * a);
    printf("%.2f %.2f", x2, x1);
}

int main() {
    solve();
}