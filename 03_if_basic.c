
//c program to check wether tha no. is odd or even
#include<stdio.h>

int main(){
    
    int a, b;
    printf("Enter a number\n");
    scanf("%d", &a);
    if(a%2==0){
    printf("%d id even\n",a);
}
    else {
        printf("%d is odd\n" ,a);
    }
    return 0;
    }
