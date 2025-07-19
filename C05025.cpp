#include <stdio.h>

#define print printf

int main() {
    int t, n, m;
    scanf("%d", &t);
    for (int te = 1; te <= t; te++) {
        scanf("%d%d", &n, &m);
        int a[n][m];
        int check[10000]= {};
		int Max=-1;
		for(int i=0; i<n; i++) {
			for(int j=0; j<m; j++) {
				scanf("%d",&a[i][j]);
				check[a[i][j]]++;
				if(a[i][j] > Max) Max=a[i][j];
			}
		}

		for(int i=0; i<n; i++) {
			for(int j=0; j<m; j++) {
				for(int l=i; l<n; l++) {
					for(int k=j; k<m; k++) {
						if(a[i][j]>a[l][k]) {
							a[i][j] ^= a[l][k];
							a[l][k] ^= a[i][j];
							a[i][j] ^= a[l][k];
						}
					}
				}
			}
		}

        print("Test %d:\n", te);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                print("%d ", a[i][j]);
            }
            print("\n");
        }
    }
}

