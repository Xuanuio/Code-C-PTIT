#include<stdio.h>
#include<math.h>
#include<string.h>

#define ll long long
#define print printf

int main() {
	int t, n;
	scanf("%d", &t);
	while(t--){
		char s[20];
		scanf("%s", &s);
		int n = strlen(s), cnt = 0, ok = 0;
		for(int i=0; i<n/2; i++){
			if(s[i] != s[n-i-1]) cnt++;
		}
		if(cnt == 1) ok = 1;
		else if(cnt == 0 && n % 2) ok = 1;
		print(ok ? "YES\n" : "NO\n");
	}
}

