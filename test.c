/* Starting the project with demo program */

/*
    Convert QBASIC code into C Code
    Date: 21 Feb 2019

    Programmer: Pradeep Ubale

    To compile use command:
    $ gcc program_name.c -lm

 */


/* Header Files */
#include<stdio.h>
#include<math.h>

#define PI 3.141592653

double FNSINH(double X){
    return ((exp(X) - exp(-X))/2);
}

double FNCOSH(double X){
    return ((exp(X) + exp(-X))/2);
}

int main()
{
    // REM screq2
    double SPI = sqrt(PI);

    double U[16], W[16];

    printf("Enter 16 values of U and W array:\n");
    for(int x = 0; x < 16; x++){
        scanf("%lf", &U[x]);
        scanf("%lf", &W[x]);
    } 

    // REM q for PR<1
    // INPUT T, PR, EK, LB, SC, N, N1 as float
    double T, PR, EK, LB, SC, N, N1;
    T = 0.2;
    PR = 0.71;
    EK = 0.3;
    LB = 0.2;
    SC = 0.3;
    N = 0.5;
    N1 = 0.0;

    printf("Printing all values of the variables:\n");
    printf("T: %lf \t PR: %lf \t EK: %lf \t LB: %lf \t SC: %lf \t N: %lf \t N1: %lf \n", T, PR, EK, LB, SC, N, N1);
    
    double X, Z1, Z2;
    X = 0.32658945;
    Z1 = FNSINH(X);
    Z2 = FNCOSH(X);

    // Day 2: 22 Feb 2019
    double R1 = LB * T;
    double R2 = 2 * T * EK;
    double R3 = R1 * R1;
    double R4 = R2 * R2;
    double R5 = R3 + R4;
    double R6 = sqrt(R5);
    double R7 = sqrt(R6);
    double R8 = 0.5 * atan(R2/R1);
    double R9 = cos(R8);
    double R10 = R7 * R9;
    double R11 = sin(R8);
    double R12 = R7 * R11;
    
    X = N1;
    double Y = R10;
    double Z = R12;

    // GOSUB 1600 is not coded.
    //double R13 = 

    return 0;
}