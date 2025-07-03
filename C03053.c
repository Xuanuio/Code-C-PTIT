#include<stdio.h>
#include<math.h>

#define print printf

int nt(int n){
    for(int i=2; i<=sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return n > 1;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        for(int i=2; i<=n/2; i++){
            if(nt(i) && nt(n-i)) print("%d %d ", i, n-i);
        }
        print("\n");
    }
}