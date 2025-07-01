#include<stdio.h>
#include<string.h>
#include<math.h>

#define print printf

int rev(int n){
    int tmp = n, prev=0, r;
    while(n){
        r = n % 10;
        if(r == 9) return 0;
        prev = prev * 10 + r;
        n /= 10;
    }
    return tmp == prev;
}

int main(){
    int n, cnt=0;
    scanf("%d", &n);
    for(int i=2; i<=n; i++){
        if(rev(i)){
            print("%d ", i);
            cnt++;
        }
    }
    print("\n%d", cnt);
}