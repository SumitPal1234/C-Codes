//program for greater than equals to condition

#include<stdio.h>

int main(){
    int age;
    printf("Enter your age\n"); 
    scanf("%d", &age);
    if (age>=70){
    //if (age!=70){
        printf(" You are above 70, you cannot drive");
    }
    else{
        printf("You can drive");
    }

    if (age==50){
        printf("Half century");
    }
    return 0;
}