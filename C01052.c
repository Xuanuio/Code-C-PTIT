#include<stdio.h>
#include<math.h>

#define print printf

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int ans = 0;
        for(int i=1; i<=sqrt(n); i++){
            if(n % i == 0){
                if(i % 2 == 0) ans++;
                if(i != n/i && n/i % 2 == 0) ans++;
            }
        }
        print("%d\n", ans);
    }
}