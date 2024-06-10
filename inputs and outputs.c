#include <stdio.h> 
#include <math.h>

int main() {
    int a=2,b=5,c=8,d=10,e,z;

    //Calculating Sum;
    e=a+b+c+d;
    printf("Sum=%d\n",e);

    //Calculating Remainder;
    z=c%b;
    printf("Remainder=%d\n",z);

    //Calculating the increment;
    z=++z;
    printf("++z=%d\n",z);

    //Calculating decrement;
    z=--z;
    printf("--z=%d\n",z);

    return 0;
}


