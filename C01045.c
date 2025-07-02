#include<stdio.h>
#include<string.h>

#define print printf

int main(){
    char c[10];
    scanf("%s", c);
    int n = strlen(c) - 1;
    print("%c %c", c[0], c[n]);
}