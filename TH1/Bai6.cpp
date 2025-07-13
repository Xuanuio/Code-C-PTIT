#include<stdio.h>

#define print printf

void solve(int n, char a, char b, char c){
	if(n == 1) print("%c -> %c\n", a, c);
	else {
		solve(n-1, a, c, b);
		print("%c -> %c\n", a, c);
		solve(n-1, b, a, c);
	}
}

int main() {
	int n;
	scanf("%d", &n);
	solve(n, 'A', 'B', 'C');
}

