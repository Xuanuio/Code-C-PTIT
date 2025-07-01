#include<stdio.h>

#define print printf

int main(){
    int n, k;
    scanf("%d%d", &n, &k);
    int cnt=0, tmp;
    for(int i=2; i<=n; i+=2){
        tmp = i;
        while(tmp % 2 == 0){
            cnt++;
            tmp /= 2;
        }
    }
    print(cnt >= k ? "Yes" : "No");
}