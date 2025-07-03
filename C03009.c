#include<stdio.h>
#include<math.h>

#define print printf

int perfect(int n){
    int sum = 1;
    for(int i=2; i<=sqrt(n); i++){
        if(n % i == 0){
            sum += i;
            if(i != n / i) sum += n/i;
        }
    }
    return sum == n;
}

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    if(a > b){
        a = a^b;
        b = b^a;
        a = a^b;
    }
    for(int i=a; i<=b; i++){
        if(perfect(i)) print("%d ", i);
    }
}