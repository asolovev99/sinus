#include <iostream>
long int factorial (int n){
    int i;
    long int result = 1;
    if (n < 0) exit(0);
    if (n >= 2)
    {
        for (i = 2; i <= n; i++){
            result = result * i;
        }
    }
    return (result);
}
double stepen (double x, int n){
    int i;
    double x_n = x;
    if (n <= 0) {
        exit (0);
    }
    else {
          if (n > 1) {
                for (i = 2; i <= n; i++) {
                    x_n = x_n * x;
                }
          }

    }
    return (x_n);
}
double my_sin (double x, int n){
    int i;
    double sin = x;
    if (n < 0){
        exit (0);
    }
    else {
        if (n == 0) {
            sin = 0;
        }
        else {
            if (n > 1) {
                for (i = 2; i <= n; i++) {
                    if (i % 2 == 0){
                        sin = sin - (stepen(x,2*i - 1)/factorial(2*i-1));
                    }
                    else {
                        sin = sin + (stepen(x,2*i - 1)/factorial(2*i-1));
                    }
                }
            }
        }
    }
    return (sin);
}
int main() {
    int n;
    double x;
    scanf("%lf%i",&x,&n);
    printf("%li %lf \n",factorial(2*n-1),stepen(x,2*n - 1));
    printf("%lf",my_sin(x, n));
    return 0;
}