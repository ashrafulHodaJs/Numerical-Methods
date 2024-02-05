#include <stdio.h>
#include <math.h>

#define f(x) (x*x - 5*x + 6)  
#define df(x) (2*x - 5)

int main() {
    double x0, x1;
    int N;

    printf("Enter your initial guess: ");  //any float number other than root of the polynomial
    scanf("%lf", &x0);

    printf("Enter the number of iterations: "); // more iteration == more accurate
    scanf("%d", &N);                    

    printf("*******Using Newton's method********\n");

    for (int i = 0; i < N; i++) {
        x1 = x0 - f(x0) / df(x0);
        x0 = x1;
    }

    printf("The root of the given polynomial is: %lf\n", x0);

    return 0;
}
