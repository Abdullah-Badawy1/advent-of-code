#include "main.h"

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int summm(int first, ...) {
    va_list args;
    va_start(args, first);
    int sum = 0;

    int num = first;
    while(num != 0) {
        sum += num;
        num = va_arg(args, int); 
    }

    va_end(args);
    return sum;
}
double summ(double ints){
    return ints;}

int main() {
    printf("Sum of numbers is %d\n", summm(15, 16, 10, 11, 0));
    printf("%d\n", summ(3.5));
    printf("%d\n", summ(3.0));
    int sum2 = summ(14, 14, 14,0);
    printf("%d\n", sum2);

    return EXIT_SUCCESS;
}
