#include<stdio.h>
#include<math.h>
#include<string.h>

#define print printf

int main(){
    char c[10];
    scanf("%s",c);
    int n = strlen(c);
    if(c[n-1] != '0'){
        print("%c", c[n-1]);
    }
    for(int i=1; i<n-1; i++){
        print("%c", c[i]);
    }
    print("%c", c[0]);
}