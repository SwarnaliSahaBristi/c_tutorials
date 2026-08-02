/*🟢 Level 1 - Variables & Input/Output*/

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
Product গুণফল
Quotient (integer division) ভাগফল
Remainder
*/
// int main(){
//     int a, b;
//     printf("enter value of a: ");
//     scanf("%d", &a);

//     printf("enter value of b: ");
//     scanf("%d", &b);

//     // printf("sum is: %d \n", a+b);
//     // printf("difference is: %d \n", a-b);
//     // printf("product is: %d \n", a*b);
//     // printf("quotient is: %d \n", a/b);
//     printf("reminder is: %d \n", a%b);
//     return 0;
// }

//3.Take a float representing Celsius and convert it to Fahrenheit.
// int main(){
//     float C;
//     printf("Enter C: ");
//     scanf("%f", &C);

//     float Fahrenheit = (C*1.8) + 32;
//     printf("Fahrenheit value F is: %f \n", Fahrenheit);
//     return 0;
// }

//4.Take a character as input and print its ASCII(American Standard Code for Information Interchange) value.
int main(){
    char ch;
    printf("enter character: ");
    scanf("%c", &ch);
    printf("ASCII value: %d \n", ch);
    return 0;
}

// 5.Swap two integers using a third variable.
// 6.Swap two integers without using a third variable.
