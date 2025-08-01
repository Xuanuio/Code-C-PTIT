#include <stdio.h>
#include <string.h>

#define print printf

void reverse(int a[], int n){
    int l = 0, r = n - 1;
    while(l < r){
        a[l] ^= a[r];
        a[r] ^= a[l];
        a[l] ^= a[r];
        l++; r--;
    }
} 

void add(char a[], char b[]) {
    int n1 = strlen(a), n2 = strlen(b);
    int x[n1], y[n1], z[n1+1];
    int n = 0;
    for(int i = 0; i < n1; i++) x[i] = a[i] - '0';
    for(int i = 0; i < n2; i++) y[i] = b[i] - '0';
    reverse(x, n1);
    reverse(y, n2);
    for(int i = n2; i < n1; i++) y[i] = 0;
    int nho = 0;
    for(int i = 0; i < n1; i++) {
        int tmp = x[i] + y[i] + nho;
        z[n++] = tmp % 10;
        nho = tmp / 10;
    }
    if(nho) z[n++] = nho;
    for(int i = n - 1; i >= 0; i--)
        print("%d", z[i]);
}

int main() {
    int t, n;
    scanf("%d", &t);
    while(t--){
        char c[505], d[505];
        scanf("%s %s", c, d);
        if(strlen(c) >= strlen(d)) add(c, d);
        else add(d, c);
        print("\n");
    }
}
