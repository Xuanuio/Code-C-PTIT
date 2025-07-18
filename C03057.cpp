#include<stdio.h>
#include<math.h>
#include<string.h>

#define ll long long
#define print printf

ll Max(char s[]){
	ll m = 0, n = strlen(s);
	for(int i=0; i<n; i++){
		ll c = s[i] - '0';
		m = m * 10 + c;
		if(c == 5) m++;
	}
	return m;
}

ll Min(char s[]){
	ll m = 0, n = strlen(s);
	for(int i=0; i<n; i++){
		ll c = s[i] - '0';
		m = m * 10 + c;
		if(c == 6) m--;
	}
	return m;
}

int main() {
	int t, n;
	scanf("%d", &t);
	while(t--){
		char x1[20], x2[20];
		scanf("%s%s", &x1, &x2);
		print("%lld %lld\n", Min(x1) + Min(x2), Max(x1) + Max(x2));
	}
}

