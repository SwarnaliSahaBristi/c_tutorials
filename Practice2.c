// write a program to check if a number is divisible by 2 or not.
 #include<stdio.h>
 #include<math.h>

//  int main(){
//     int x;
//     printf("enter a number : ");
//     scanf("%d", &x);
//     printf("%d \n", x % 2 == 0);
//     return 0;
//  }

 //write a program to check if a number is odd or even.

// int main(){
    //even -> 1
    //odd -> 0
//     int x;
//     printf("enter a number : ");
//     scanf("%d", &x);
//     printf("%d \n", x % 2 == 0);
//     return 0;
// }

//if it's sunday & it's snowing -> true

// int main(){
//     int isSunday = 1;
//     int isSnowing = 0;
//     printf("%d \n", isSunday && isSnowing);
//     return 0;
// }

//if it's monday or it's raining -> true
 
// int main(){
//     int isMonday = 1;
//     int isRaining = 0;
//     printf("%d \n", isMonday || isRaining);
//     return 0;
// }

//if a number is greater than 9 & less than 100 -> true (2 digit number)

// int main(){
//     int x;
//     printf("enter number : ");
//     scanf("%d", &x);
//     printf("%d \n", x>9 && x<100);
//     return 0;
// }

//Write a program to print the average of 3 numbers.

int main(){
    int x,y,z;
    printf("enter the value of x: ");
    scanf("%d", &x);

    printf("enter the value of y: ");
    scanf("%d", &y);

    printf("enter the value of z: ");
    scanf("%d", &z);

    printf("The average is: %f \n", (x+y+z)/3.0);
    return 0;
}