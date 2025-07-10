#include<stdio.h>
#include<math.h>

#define print printf

int main(){
	int n, m, k, res;
	scanf("%d%d", &n, &m);
	k = fmax(n, m);
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			res = 97 + k - fmin(i, j);
			print("%c", res);
		}
		print("\n");
	}
}
