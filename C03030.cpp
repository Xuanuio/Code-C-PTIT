#include<stdio.h>

#define print printf

int skg(int n){
    int a=9, b;
    while(n){
        b = n % 10;
        n /= 10;
        if(a < b) return 0;
        else a = b;
    }
    return 1;
}

int main() {
	int t, n, start, end;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		start = 1;
		for(int i=1; i<n; i++) start *= 10;
		end = start * 10 - 1;
		for(int i=start; i<=end; i++){
			if(skg(i)) print("%d ", i);
		}
		print("\n");
	}
}

