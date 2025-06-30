#include<stdio.h>
#include<string.h>

int main(){
    char c[100001];
    scanf("%s", c);
    int vt = 0, n = strlen(c);
    while(vt < n){
        char tmp = c[vt];
        int last = vt;
        for(int i = vt; i < n; i++){
            if(c[i] > tmp){
                tmp = c[i];
            }
        }
        for(int i = vt; i < n; i++){
            if(c[i] == tmp){
                printf("%c", c[i]);
                last = i;
            }
        }
        vt = last + 1;
    }
}