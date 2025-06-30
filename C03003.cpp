#include<stdio.h>

int pr[1300000];

int main(){
	pr[0] = pr[1] = 1;
	for(int i=2; i*i<1300000; i++){
		if(!pr[i]){
			for(int j=i*i; j<1300000; j+=i){
				pr[j] = 1;
			}
		}
	}
	int t;
	scanf("%d", &t);
	for(int i=2; i<1300000; i++){
		if(!t) break;
		if(!pr[i]){
			printf("%d\n", i);
			t--;
		}
	}
}

