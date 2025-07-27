#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

#define ll long long
#define print printf

int cnta[26];
int cntb[26];

int ck(char a[], char b[]){
	memset(cnta, 0, sizeof(cnta));
	memset(cntb, 0, sizeof(cntb));
	int n = strlen(a), m = strlen(b);
	if(n != m) return 0;
	for(int i=0; i<n; i++){
		cnta[a[i] - 'a']++;
		cntb[b[i] - 'a']++;
	}
	for(int i=0; i<26; i++){
		if(cnta[i] != cntb[i]) return 0;
	}
	return 1;
}

int main() {
	int t;
	scanf("%d", &t);
	for(int k=1; k<=t; k++){
		char s[5005], t[5005];
		scanf("%s", s);
		scanf("%s", t);
		print("Test %d: ", k);
		print(ck(s, t) ? "YES\n" : "NO\n");
	}
}
