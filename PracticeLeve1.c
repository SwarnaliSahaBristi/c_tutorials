/*
🟢 Level 1 - Variables & Input/Output


3.Take a float representing Celsius and convert it to Fahrenheit.
4.Take a character as input and print its ASCII value.
5.Swap two integers using a third variable.
6.Swap two integers without using a third variable.
*/

#include<stdio.h>
#include<math.h>

//1.Take an integer as input and print its square.
// int main(){
//     int x;
//     printf("enter the value of x: ");
//     scanf("%d", &x);
//     printf("X value's square is: %f \n", pow(x,2)); //pow() ফাংশনটি সাধারণ int বা পূর্ণসংখ্যা নিয়ে কাজ করে না, এটি double বা দশমিক সংখ্যা নিয়ে কাজ করে
//     return 0;
// }

/*
2.Take two integers and print:
Sum
Difference
Product
Quotient (integer division)
Remainder
*/
int main(){
    int a, b;
    printf("enter value of a: ");
    scanf("%d", &a);

    printf("enter value of b: ");
    scanf("%d", &b);

    // printf("sum is: %d \n", a+b);
    printf("difference is: %d \n", a-b);
    return 0;
}