#include <stdio.h>
#include <math.h>
int main(){
    // printf("%f \n", 2.0 * 2);
    printf("%f \n", 2.0 * 2.0);

    printf("%d \n", 2/3);
    printf("%f \n", 2.0 / 2.0);

    // Explicit conversion

    int a = (int) 1.999999;  // forcfully converted to int = 1 (it removes all decimal no and only takes 1)
    printf("%d \n", a);

    int b = 4 + 9 * 10;
    printf("%d \n", b);  // 94


    //Associative 

    int c = 4 * 10 / 3 * 2; //left to right
    printf("%d \n", c);  // 26

// Operators






    return 0;
}