#include<stdio.h>
#include<math.h>

#define print printf

int main() {
	int n, l = 0, x = 0, Min = 55555;
	scanf("%d", &n);
	int up[n], down[n];
	for(int i=0; i<n; i++){
		scanf("%d%d", &up[i], &down[i]);
		l += up[i];
		x += down[i];
		Min = fmin(Min, down[i]);
	}
	Min += fmax(l, x);
	print("%d", Min);
}

