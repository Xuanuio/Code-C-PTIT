#include<stdio.h>
#include<math.h>

#define print printf

int nt(int n){
    if(n < 2) return 0;
    for(int i=2; i<=sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int ck(int n){
    int sum = 0, r;
    while(n){
        r = n % 10;
        if(r != 2 && r != 3 && r != 5 && r != 7) return 0;
        sum += r;
        n /= 10;
    }
    if(nt(sum)) return 1;
    return 0;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int a, b, cnt=0;
        scanf("%d%d", &a, &b);
        for(int i=a; i<=b; i++){
            if(nt(i) && ck(i)) cnt++;
        }
        print("%d\n", cnt);
    }
}