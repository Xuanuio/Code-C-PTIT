#include <stdio.h>
#include <math.h>

void solve(){
    int m, n;
    scanf("%d%d", &m, &n);

    int l = ceil(sqrt((double)m));
    int r = floor(sqrt((double)n));

    if (l > r) {
        printf("0\n");
        return;
    }

    printf("%d\n", r - l + 1);
    for (int i = l; i <= r; i++) {
        printf("%d\n", i * i);
    }
    return;
}

int main() {
    solve();
}
