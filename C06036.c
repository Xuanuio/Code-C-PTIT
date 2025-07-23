#include<stdio.h>
#include<string.h>

#define print printf

int main(){
    char s[100005];
    gets(s);
    print("%d", strlen(s) - 1);
}