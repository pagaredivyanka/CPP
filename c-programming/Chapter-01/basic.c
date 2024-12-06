// chapter 1 - veriables, data types, input and output

#include <stdio.h>  //preprocessor directives
int main() {
    // int number = 25;
    
    // int age1 = 21;
    // printf("age is %d \n", age1);
    // age1 = 24;  //we can change the value

    // float pi = 3.14;
    // printf("pi %f \n", pi);

    // char star = '*';
    // printf("star is %c \n", star);


//--------------------------------------

    int age;
    printf("enter age ");
    scanf("%d", &age);
    printf("age is : %d\n",age);

    return 0;

}