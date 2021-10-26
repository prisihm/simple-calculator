/*****************
Create a calculator program that will accept two numbers and compute the sum,difference,quotient, product and modulus of the two numbers

 INPUTS;
 -num1,num2

 OUTPUTS
 -sum
 -diff
 -pro
 -quot
 -mod

 Computations
 -sum=num1 + num2
 -diff=num1-num2
 -pro=num1*num2
 -quot=num1/num2
 -mod=num1%num2

STORAGE
num1,num2,sum diff,pro,quot and mode
****************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variable declaration
    int num1,num2,sum,diff,pro,mod;
    float quot;

    //ASSIGNMENTS
    num1=200;
    num2=56;

    //COMPUTATION
    sum=num1 + num2;
    diff=num1-num2;
    pro=num1*num2;
    quot=num1/num2;
    mod=num1%num2;

    //OUTPUT

    //sum;result
    //3+5=8
    printf("%d + %d=%d\n",num1,num2,sum);
    printf("%d - %d=%d\n",num1,num2,diff);
    printf("%d * %d=%d\n",num1,num2,pro);
    printf("%d / %d=%d\n",num1,num2,quot);
    printf("%d mod %d=%d\n",num1,num2,mod);


    return 0;
}

