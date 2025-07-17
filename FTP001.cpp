#include<stdio.h>
#include<math.h>
#include<string.h>

#define ll long long
#define print printf

int main() {
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(j <= i) print("0 ");
			else print("%d ", j-i);
		}
		print("\n");
	}
}

