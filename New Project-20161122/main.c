#include <stdio.h>
#include <conio.h>

unsigned long long int factorial(unsigned int num){
    if(num<=1)
        return 1;
    return num*factorial(num-1);
}

int main()
{
    unsigned int n=10;
    clrscr();
    printf("%u! = %llu\n",n,factorial(n));
    return 0;
}

