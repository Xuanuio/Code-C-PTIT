#include<stdio.h>
#include<string.h>

#define print printf

int nt(char c){
    if(c == '2' || c == '3' || c == '5' || c == '7') return 1;
    return 0;
}

int ck(char s[]){
    int n = strlen(s);
    for(int i=0; i<n; i++){
        if(!nt(s[i]) || s[i] != s[n-i-1]) return 0;
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