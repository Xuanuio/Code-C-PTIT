#include<stdio.h>
#include<math.h>
#include<string.h>

#define print printf

int main() {
    char s[52];
    scanf("%s", s);
    int n = strlen(s);
    int dp[n];
    for(int i = 0; i < n; i++) dp[i] = 1;
    for(int i = 1; i < n; i++) {
        for(int j = 0; j < i; j++) {
            if(s[i] > s[j]) {
                dp[i] = fmax(dp[i], dp[j] + 1);
            }
        }
    }
    int res = 0;
    for(int i = 0; i < n; i++) {
        if(dp[i] > res) res = dp[i];
    }
    print("%d", 26 - res);
}

