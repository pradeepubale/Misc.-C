/*
    Handling Complex numbers with C.
    Date: 22 Feb 2019

*/

// Header Files.
#include<stdio.h>           /* standard input output liabrary */
#include<complex.h>         /* standard liabrary of complex numbers */

int main()
{
    // declaring complex variables.
    double complex z1 = 1.0 + 3.0 * I;
    double complex z2 = 1.0 - 4.0 * I;

    printf("Working with complex numbers:\n\v");
    printf("Starting values: Z1 = %.2f + %.2fi \t Z2 = %.2f %+.2fi \n", creal(z1), cimag(z1), creal(z2), cimag(z2));

    double complex sum = z1 + z2;
    printf("The Sum: Z1 + Z2 = %.2f %+.2fi \n", creal(sum), cimag(sum));

    double complex difference = z1 - z2;
    printf("The Difference: Z1 - Z2 = %.2f %+.2fi \n", creal(difference), cimag(difference));

    double complex product = z1 * z2;
    printf("The Product: Z1 * Z2 = %.2f %+.2fi \n", creal(product), cimag(product));

    double complex quotient = z1 / z2;
    printf("The Quotient: Z1 / Z2 = %.2f %+.2fi \n", creal(quotient), cimag(quotient));

    double complex conjugate = conj(z1);
    printf("The conjugate of Z1 = %.2f %+.2fi \n", creal(conjugate), cimag(conjugate));

    double complex conjugate1 = conj(z2);
    printf("The conjugate of Z2 = %.2f %+.2fi \n", creal(conjugate1), cimag(conjugate1));

    return 0;
}