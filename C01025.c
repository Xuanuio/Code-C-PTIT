#include<stdio.h>
#include<math.h>

int xuly(int a, int b, int c, int d){
    int Min = 1000, Max = -1000;
    if(a < Min) Min = a;
    if(a > Max) Max = a;
    if(b < Min) Min = b;
    if(b > Max) Max = b;
    if(c < Min) Min = c;
    if(c > Max) Max = c;
    if(d < Min) Min = d;
    if(d > Max) Max = d;
    return abs(Max - Min);
}

int main(){
    int a, b, c, d, x, y, z, t;
    scanf("%d%d%d%d%d%d%d%d", &a, &x, &b, &y, &c, &z, &d, &t);
    a = xuly(a, b, c, d);
    x = xuly(x, y, z, t);
    if(x > a) a = x;
    printf("%d", a * a);
}