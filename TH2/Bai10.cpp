#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

#define ll long long
#define print printf

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		char s[100005];
		scanf("%s", s);
		ll Max = -1, n = strlen(s), m;
		for(int i=0; i<strlen(s); i++){
			if(s[i] >= '0' && s[i] <= '9'){
				m = 0;
				while(i < n && s[i] >= '0' && s[i] <= '9'){
					m = m * 10 + (s[i] - '0');
					i++;
				}
				Max = fmax(Max, m);
			}
		}
		print("%lld\n", Max);
	}
}
