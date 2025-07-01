#include<stdio.h>
#include<math.h>

#define print printf

int pr[100005];

void ktao(){
    pr[0] = pr[1] = 1;
    for(int i=2; i<=sqrt(100000); i++){
        if(!pr[i]){
            for(int j=i*i; j<=100000; j+=i){
                pr[j] = 1;
            }
        }
    }
}

int ck(int n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    if(sum % 5 == 0) return 0;
    return 1;
}

void solve(){
    for(int i=2; i<=100000; i++){
        if(!pr[i]){
            pr[i] = ck(i);
        }
    }
}

int main(){
    ktao();
    solve();
    int n;
    scanf("%d", &n);
    int cnt = 0;
    for(int i=5; i<=n; i++){
        if(!pr[i]){
            print("%d ", i);
            cnt++;
        }
    }
    print("\n%d", cnt);
}