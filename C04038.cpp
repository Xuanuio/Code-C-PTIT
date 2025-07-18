#include<stdio.h>
#include<math.h>
#include<string.h>

#define ll long long
#define print printf

int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(int i=0; i<n-1; i++){
		int vt = i;
		for(int j=i+1; j<n; j++){
			if(a[j] < a[vt]){
				vt = j;
			}
		}
		int tmp = a[i];
		a[i] = a[vt];
		a[vt] = tmp;
		for(int j=0; j<n; j++){
			print("%d ", a[j]);
		}
		print("\n");
	}
}

