#include<stdio.h>
#include<math.h>

#define print printf

int main(){
	int n, m, k;
	scanf("%d%d", &n, &m);
	for(int i=1; i<=n; i++){
		k = fmin(i, m);
		for(int j=1; j<=m; j++){
			if(j <= m-i) print("%c", (63 + k++));
			else print("%c", (63 + k));
		}
		print("\n");
	}
}
