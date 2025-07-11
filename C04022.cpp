#include<stdio.h>
#include<math.h>
#include<string.h>

#define ll long long
#define print printf

int main() {
	int n, m1=-1, m2=-1;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++) scanf("%d", &a[i]);
	for(int i=0; i<n; i++){
		if(a[i] > m1){
			m1 = a[i];
		}
	}
	for(int i=0; i<n; i++){
		if(a[i] > m2 && a[i] != m1){
			m2 = a[i];
		}
	}
	print("%d %d", m1, m2);
}

