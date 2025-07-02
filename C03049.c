#include<stdio.h>
#include<string.h>

#define print printf

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char c[20];
        scanf("%s", c);
        int n = strlen(c), l = 0;
        for(int i=0; i<n; i++){
            if((c[i]-'0') % 2) l++;
        }
        print(l > n / 2 ? "YES\n" : "NO\n");
    }
}