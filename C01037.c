#include<stdio.h>
#include<math.h>

int main(){
    int l, r;
    scanf("%d%d", &l, &r);
    if(l > r){
        int tmp = r;
        r = l;
        l = tmp;
    }
    long long ans = 0;
    ans += (r - l + 1) * (r + l) / 2;
    printf("%lld", ans);
}