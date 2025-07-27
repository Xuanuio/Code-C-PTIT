#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

#define ll long long
#define print printf

int main() {
	char p[28];
	for(int i=0; i<26; i++){
		p[i] = ('A' + i);
		// print("%c", p[i]);
	}
	p[26] = '_', p[27] = '.';
	while(1){
		int k;
		scanf("%d", &k);
		if(k == 0) break;
		char s[1003], a[1003];
		scanf("%s", s);
		int n = strlen(s);
		for(int i=0; i<n; i++){
			if(s[i] != '_' && s[i] != '.') s[i] = p[(s[i] - 'A' + k) % 28];
			else if(s[i] == '_') s[i] = p[(26 + k) % 28];
			else s[i] = p[(27 + k) % 28];
		}
		for(int i=n-1; i>=0; i--) print("%c", s[i]);
		print("\n");
	}
}
