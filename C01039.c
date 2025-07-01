#include<stdio.h>
#include<string.h>

#define print printf

int main(){
    char c[10];
    scanf("%s", c);
    print("%d", strlen(c));
}