#include "funcf.c"
#include "funcg.c"
#include<stdio.h>

int main(){
    double x;

    printf("Enter the number: ");
    scanf("%lf", &x);

    printf("f(%f) = %lf\n", x, f(x));
    printf("g(%f) = %lf", x, g(x));

    return 0;
}