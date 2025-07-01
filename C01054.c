#include<stdio.h>
#include<math.h>

#define ll long long
#define print printf
#define maxn 2000006

int min_pr[maxn];

void seive(){
    for(int i=2; i<maxn; i++){
        if(!min_pr[i]){
            for(int j=i; j<maxn; j+=i){
                if(!min_pr[j]) min_pr[j] = i;
            }
        }
    }
}

ll sum(int n){
    ll sum = 0;
    while(n > 1){
        int x = min_pr[n];
        while(n % x == 0){
            sum += x;
            n /= x;
        }
    }
    return sum;
}

int main(){
    int t, n;
    scanf("%d", &t);
    seive();
    ll ans = 0;
    while(t--){
        scanf("%d", &n);
        ans += sum(n);
    }
    print("%lld", ans);
}