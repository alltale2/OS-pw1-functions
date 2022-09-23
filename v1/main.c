#include<math.h>
#include<stdio.h>

double f(double x) {
    return exp(-1 * fabs(x)) * sin(x);
}

double g(double x) {
    return exp(-1 * fabs(x)) * cos(x);
}

int main(){
    double x;

    printf("Number: ");
    scanf("%lf", &x);

    printf("f(%f) = %lf\n", x, f(x));
    printf("g(%f) = %lf", x, g(x));

    return 0;
}