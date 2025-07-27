#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

#define ll long long
#define print printf

int main() {
	char s[1003], cnt[26];
	scanf("%s", s);
	memset(cnt, 0, sizeof(cnt));
	int n = strlen(s), c = 0;
	for(int i=0; i<n; i++){
		cnt[s[i] - 'a']++;
	}
	for(int i=0; i<26; i++){
		if(cnt[i]) c++;
	}
	print("%d", c);
}

