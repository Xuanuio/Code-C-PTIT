#include<stdio.h>
#include<string.h>

#define ll long long
#define print printf

int solve( char s[]){
	int n = strlen(s);
	if(n < 3) return 0;
	int vt = -1;
	for(int i=1; i<n; i++){
		if(s[i] == s[i-1]) return 0;
		else if(s[i] < s[i-1]){
			vt = i;
			break;
		}
	}
	if(vt == -1) return 1;
	for(int i=vt; i<n-1; i++){
		if(s[i+1] >= s[i]) return 0;
	}
	return 1;
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		char s[20];
		scanf("%s", &s);
		print(solve(s) ? "YES\n" : "NO\n");
	}
}

