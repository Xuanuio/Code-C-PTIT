#include<stdio.h>
#include<string.h>

#define print printf
#define ll long long

int solve(){
    char c[20];
    scanf("%s", c);
    for(int i=0; i<strlen(c)-1; i++){
        if((c[i+1] - '0') < (c[i] - '0')) return 0;
    }
    return 1;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        print(solve() ? "YES\n" : "NO\n");
    }
}