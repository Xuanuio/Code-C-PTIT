#include<stdio.h>

#define print printf

int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	for(int i=1; i<=n; i++){
		int cnt = i;
		if(cnt <= m){
			while(cnt <= m){
				print("%d", cnt);
				cnt++;
			}
			for(int j=i-1; j>=1; j--){
				print("%d", j);
			}
		}
		else{
			print("%d", i);
			for(int j=m-1; j>=1; j--){
				print("%d", j);
			}
		}
		print("\n");
	}
}
