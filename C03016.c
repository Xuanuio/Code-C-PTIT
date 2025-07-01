#include<stdio.h>
#include<string.h>

#define print printf
#define ll long long

ll fb[93];

void ktao(){
    fb[0] = 0, fb[1] = 1;
    for(int i=2; i<93; i++){
        fb[i] = fb[i-2] + fb[i-1];
    }
}

int main(){
    ktao();
    int t;
    scanf("%d", &t);
    while(t--){
        ll n, ck = 0;
        scanf("%lld", &n);
        for(int i=0; i<93; i++){
            if(n == fb[i]) ck = 1;
        }
        print(ck ? "YES\n" : "NO\n");
    }
}