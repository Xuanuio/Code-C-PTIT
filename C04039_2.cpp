#include <stdio.h>
#include <stdlib.h>

#define ll long long
#define print printf

ll max_dist(int k) {
    ll t = k / 2;
    if (k % 2 == 0)
        return t * (t + 1);
    else
        return (t + 1) * (t + 1);
}

int min_steps(ll d) {
    int l = 1, r = 1e5, res = 1e5;
    while (l <= r) {
        int m = (l + r) / 2;
        if (max_dist(m) >= d) {
            res = m;
            r = m - 1;
        } else
            l = m + 1;
    }
    return res;
}

int main() {
    ll x, y;
    while (scanf("%lld%lld", &x, &y) != EOF) {
        ll d = llabs(y - x);
        print("%d\n", min_steps(d));
    }
}
