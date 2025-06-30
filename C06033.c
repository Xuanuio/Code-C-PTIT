#include<stdio.h>
#include<string.h>

void merge(char s1[], char s2[], char s12[], int n){
    int j = 0;
    for(int i = 0; i < n; i++){
        s12[j++] = s2[i];
        s12[j++] = s1[i];
    }
    s12[j] = '\0';
}

void split(char s1[], char s2[], char s12[], int n){
    int j = 0;
    for(int i = 0; i < n; i++) s1[i] = s12[j++];
    for(int i = 0; i < n; i++) s2[i] = s12[j++];
}

int solve(int n){
    char s1[n], s2[n], s12[2 * n + 1], tmp[2 * n + 1];
    scanf("%s%s%s", s1, s2, s12);
    char tmp1[n], tmp2[n];
    strcpy(tmp1, s1);
    strcpy(tmp2, s2);
    int cnt = 0;
    while(1){
        cnt++;
        merge(s1, s2, tmp, n);
        if(strcmp(s12, tmp) == 0) return cnt;
        split(s1, s2, tmp, n);
        if(!strcmp(s1, tmp1) && !strcmp(s2, tmp2)) return -1;
    }
}

int main(){
    while(1){
        int n; 
        scanf("%d", &n);
        if(!n) break;
        printf("%d\n", solve(n));
    }
}