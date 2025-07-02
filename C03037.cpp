#include<stdio.h>
#include<string.h>

#define print printf

int a[10];

int main(){
	char c[20];
	scanf("%s", c);
	int n = strlen(c);
	for(int i=0; i<n; i++){
		int b = c[i] - '0';
		if(b == 2 || b == 3 || b == 5 || b == 7) a[b]++;
	}
	for(int i=0; i<n; i++){
		int b = c[i] - '0';
		if(a[b]){
			print("%d %d\n", b, a[b]);
			a[b] = 0;
		}
	}
}
