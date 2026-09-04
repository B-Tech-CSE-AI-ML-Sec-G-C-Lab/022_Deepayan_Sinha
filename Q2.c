//*Wap in C to find prime numbers in a given range using Function & loop.
#include<stdio.h>

//Function to check if a number is prime 
int isPrime(int num)
{
    int i;
    if(num <=1 )
        return 0;
    for(i = 2; i < num;)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main(
)