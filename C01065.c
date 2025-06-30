#include<stdio.h>
#include<string.h>

#define print printf

int main(){
    char c[15];
    scanf("%s", c);
    int a[10] = {0};
    for(int i=0; i<strlen(c); i++){
        int r = (c[i] - '0');
        if(r == 2 || r == 3 || r == 5 || r == 7) a[r]++;
    }
    for(int i=0; i<strlen(c); i++){
        int r = (c[i] - '0');
        if(r == 2 || r == 3 || r == 5 || r == 7){
            if(a[r]){
                print("%d %d\n", r, a[r]);
                a[r] = 0;
            }
        }
    }
}