#include<stdio.h>
#include<math.h>

#define print printf

int main(){
	int n;
	scanf("%d", &n);
	for(int i=2; i<=sqrt(n); i++){
		if(n % i == 0){
			while(n % i == 0){
				print("%d", i);
				n/=i;
				if(n > 1) print("x");
			}
		}
	}
	if(n > 1) print("%d", n);
}
