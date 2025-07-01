#include<stdio.h>

#define print printf

int sum(int n){
	int sum = 0;
	while(n){
		sum += n %  10;
		n /= 10;
	}
	return sum;
}

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	if(sum(b) < sum(a)){
		a = a^b;
		b = b^a;
		a = a^b;
	}
	print("%d %d", a, b);
}
