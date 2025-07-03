#include<stdio.h>
#include<string.h>

#define print printf

int c(char c){
    int kt = c - '0';
    return c % 2;
}

int ck(char s[]){
    int n = strlen(s);
    for(int i=0; i<n; i++){
        if(c(s[i]) || c(s[n-i-1]) || s[i] != s[n-i-1]) return 0;
    }
    return 1;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char s[505];
        scanf("%s", s);
        print(ck(s) ? "YES\n" : "NO\n");
    }
}