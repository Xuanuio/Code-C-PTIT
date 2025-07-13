#include<stdio.h>

#define ll long long
#define print printf

ll fb[100];

void ktao(){
	fb[1] = fb[2] = 1;
	for(int i=3; i<93; i++){
		fb[i] = fb[i-1] + fb[i-2];
	}
}

int main() {
	ktao();
	int t, a, b;
	scanf("%d", &t);
	while(t--){
		scanf("%d%d", &a, &b);
		for(int i=a; i<=b; i++){
			print("%lld ", fb[i]);
		}
		print("\n");
	}
}

