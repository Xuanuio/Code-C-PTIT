#include<stdio.h>

int pr[1000006];

int main(){
	int t;
	scanf("%d", &t);
	pr[0] = pr[1] = 1;
	for(int i=2; i<=1001; i++){
		if(!pr[i]){
			for(int j=i*i; j<=1000000; j+=i){
				pr[j] = 1;
			}
		}
	}
	for(int i=2; i<=t; i++){
		if(!pr[i])
			printf("%d\n", i);
	}
}

