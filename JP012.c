#include<stdio.h>

#define print printf
#define ll long long

ll fb[95];

void solve(){
    fb[0] = 0;
    fb[1] = fb[2] = 1;
    for(int i = 3; i<=93; i++){
        fb[i] = fb[i-2] + fb[i-1];
    }
}

int main(){
    solve();
    int t;
    scanf("%d", &t);
    while(t--){
        int a, b;
        scanf("%d%d", &a, &b);
        if(a > b){
            a = a^b;
            b = b^a;
            a = a^b;
        }
        for(int i=a; i<=b; i++){
            print("%lld ", fb[i]);
        }
        print("\n");
    }
}