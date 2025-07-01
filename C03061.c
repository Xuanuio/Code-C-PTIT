#include<stdio.h>
#include<string.h>

#define print printf

int solve(char s[]){
    int n = strlen(s);
    int d = s[0] - '0';
    int c = s[n-1] - '0';
    if(d != 2 * c && c != 2 * d) return 0;
    for(int i=1; i<n-1; i++){
        if(s[i] != s[n-i-1]) return 0;
    }
    return 1;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char c[20];
        scanf("%s", c);
        print(solve(c) ? "YES\n" : "NO\n");            
    }
}