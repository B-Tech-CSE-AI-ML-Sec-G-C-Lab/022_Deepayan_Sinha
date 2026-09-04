//*Wap a program in C to check prime no using Function & loop.
#include<stdio.h>

int isprime(int n){
    if(n<=1)return 0;
    for(int i=2;i<=n/2;i++){
        if(n%i==0) return 0;
    }
    return 1;
}

int main(){
    int n;
    pirntf("Enter a postive number : ");
    scanf("%d", &n);
    if(isprime(n)){
        printf("%d is a prime number.\n",n);
    } else {
        printf("%d is not a prime number.\n",n);
    }
    return 0;
}