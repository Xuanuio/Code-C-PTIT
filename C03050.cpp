#include<stdio.h>

#define print printf

int a[100005];

int main(){
	int n, m, x, ok = 1;
	scanf("%d", &n);
	for(int i=1; i<n; i++){
		scanf("%d%d", &m, &x);
		a[m]++;
		a[x]++;
	}
	for(int i=0; i<=100000; i++){
		if(a[i] == n-1){
			print("Yes");
			ok = 0;
			break;
		}
	}
	if(ok) print("No");
}
