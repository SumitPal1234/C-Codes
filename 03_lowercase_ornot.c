#include<stdio.h>

int main(){
    //97 = a-z ASCII VALUES
    char ch;
    printf("Enter the character\n");
    scanf("%c",&ch);
    if (ch<=122 && ch >=97){
        printf("It is lower case\n");
    }
    else {
        printf("It is not lowercase");
        }
    return 0;
}