#include<stdio.h>
#include<math.h>

#define print printf

int main(){
    int n, Min;
    scanf("%d", &n);
    for(int i=1; i<2*n; i++){
        for(int j=1; j<2*n; j++){
            Min = fmin(fmin(i-1, 2*n-i-1), fmin(j-1, 2*n-j-1));
            print("%d", n-Min);
        }
        print("\n");
    }
}