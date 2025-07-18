#include<stdio.h>
#include<math.h>
#include<string.h>

#define ll long long
#define print printf

void solve(){
	char s[1003];
	scanf("%s", &s);
	if(s[0] == '0') {
		print("INVALID\n");
		return;
	}
	int n = strlen(s), c=0, l=0;
	for(int i=0; i<n; i++){
		char a = s[i];
		if(a >= '0' && a <= '9'){
			if((a - '0') % 2) l++;
			else c++;
		}
		else {
			print("INVALID\n");
			return;
		}
	}
	if(n % 2 == 0 && c > l){
		print("YES\n");
	}
	else if(n % 2 && l > c) print("YES\n");
	else print("NO\n");
} 

int main() {
	int t, n;
	scanf("%d", &t);
	while(t--){
		solve(); 
	}
}

