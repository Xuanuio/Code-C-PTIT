#include<stdio.h>

#define print printf

int ck(int n){
	int tmp = n, prev = 0;
	while(n){
		prev = prev * 10 + n % 10;
		n /= 10;
	}
	if(tmp == prev) return 1;
	return 0;
}

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int c = ck(a) + ck(b);
	print(c == 1 ? "YES\n" : "NO\n");
}
