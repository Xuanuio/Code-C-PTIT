#include<stdio.h>
#include<math.h>

#define print printf

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    for(int i=1; i<=n; i++){
        int k = fmax(n, m) - i + 1;
        int ck = 0;
        for(int j=1; j<=m; j++){
            print("%d", k);
            if(!ck){
                if(k == 1){
                    ck = 1;
                    k++;
                }
                else k--;
            }
            else k++;
        }
        print("\n");
    }
}