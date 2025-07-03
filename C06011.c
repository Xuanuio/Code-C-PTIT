#include<stdio.h>
#include<string.h>

#define print printf

int ck(char s[]){
    int n = strlen(s), sum = 0;
    if(s[0] != '8' || s[n-1] != '8') return 0;
    for(int i=0; i<n; i++){
        if(s[i] != s[n-i-1]) return 0;
        sum += (s[i] - '0');
    }
    return sum % 10 == 0;
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