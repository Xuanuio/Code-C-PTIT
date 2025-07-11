#include<stdio.h>
#include<math.h>

#define print printf

int main(){
	int n, m, k, t;
	scanf("%d%d", &n, &m);
	for(int i=1; i<=n; i++){
		k = fmin(i, m);
		t = k;
		if(i > m) k++;
		for(int j=1; j<=m; j++){
			if(j <= m-i+1) print("%c", (64 + t++));
			else print("%c", (64 + --k));
		}
		print("\n");
	}
}
