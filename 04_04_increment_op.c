#include<stdio.h>

int main(){
    int i = 5;
    printf("The value after i++ is %d\n", ++i);
    i++; //pahle print fir increment
    ++i; //pahle increment kre fir print kre
    printf("The value of i is i is %d\n", i);
    i+=10;
    printf("The value of i is i is %d\n", i);

    return 0;
}