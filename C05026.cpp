#include<stdio.h>
#include<math.h>
#include<string.h>

#define ll long long
#define print printf

int nt(int n){
	for(int i=2; i<=sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return n > 1;
}

int main() {
	int n, cnt, Max = -1;
	scanf("%d", &n);
	int a[n+1][n+1];
	for(int i=1; i<=n; i++){
		cnt = 0;
		for(int j=1; j<=n; j++){
			scanf("%d", &a[i][j]);
			if(nt(a[i][j])) cnt++;
		}
		a[i][0] = cnt;
		Max = fmax(Max, cnt); 
	}
	for(int i=1; i<=n; i++){
		if(a[i][0] == Max){
			print("%d\n", i);
			for(int j=1; j<=n; j++){
				if(nt(a[i][j])) print("%d ", a[i][j]);
			}
			break;
		}
	}
}

