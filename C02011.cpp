#include<stdio.h>

#define print printf

int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	for(int i=1; i<=n; i++){
		int cnt = i, ok = 0;
		for(int j=1; j<=m; j++){
			print("%d", cnt);
			if(cnt >= m || ok){
				ok = 1;
				cnt--;
			}
			else cnt++;
		}
		print("\n");
	}
}
