#include <stdio.h>
#include <stdlib.h>

#define ll long long
#define print printf

ll a[100005];
int cnt = 0;

int cmp(const void *x, const void *y) {
    ll a = *(ll *)x;
    ll b = *(ll *)y;
    if (a < b) return -1;
    if (a > b) return 1;
    return 0;
}

int bin_search(ll x) {
    int l = 0, r = cnt - 1;
    while (l <= r) {
        int m = (l + r) / 2;
        if (a[m] == x) return m;
        if (a[m] < x) l = m + 1;
        else r = m - 1;
    }
    return -1;
}

void generate() {
    a[cnt++] = 1;
    for (int i = 0; i < 60; i++) {
        ll p2 = 1LL << i;
        if (p2 > 1e18) break;
        for (int j = 0; j < 38; j++) {
            ll p3 = 1;
            for (int jj = 0; jj < j; jj++) p3 *= 3;
            if (p2 * p3 > 1e18) break;
            for (int k = 0; k < 26; k++) {
                ll p5 = 1;
                for (int kk = 0; kk < k; kk++) p5 *= 5;
                ll num = p2 * p3 * p5;
                if (num > 1e18) break;
                if (bin_search(num) == -1) a[cnt++] = num;
            }
        }
    }
    qsort(a, cnt, sizeof(ll), cmp);
}

int main() {
    generate();
    int t;
    scanf("%d", &t);
    while (t--) {
        ll n;
        scanf("%lld", &n);
        int idx = bin_search(n);
        if (idx == -1) print("Not in sequence\n");
        else print("%d\n", idx);
    }
    return 0;
}
