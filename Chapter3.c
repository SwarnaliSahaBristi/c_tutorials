//conditional statements types => if-else & switch

//ternary

/*
write a program to check if a student passed or failed 
marks > 30 is pass
marks <= 30 is fail
*/

#include<stdio.h>

// int main(){
//     int marks;
//     printf("enter number(0-100) : ");
//     scanf("%d", &marks);

//     // if(marks > 30 && marks <= 100){
//     //     printf("PASSED \n");
//     // } else if(marks >=0 && marks <= 30) {
//     //     printf("FAILED \n");
//     // } else {
//     //     printf("WRONG MARKS");
//     // }

//     // ternary
//     // marks <= 30 ? printf("FAILED \n") : printf("PASSED \n");

//     if(marks < 30) {
//         printf("C \n"); 
//     } else if (marks >= 30 && marks < 70) {
//         printf("B \n");
//     } else if (marks >= 70 && marks < 90) {
//         printf("A \n");
//     } else {
//         printf("A+ \n");
//     }
    
    
//     return 0;
// }

//write a program to find if  character entered by user is upper case or not

int main(){
    char ch;
    printf("Enter character: ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z'){
        printf("UPPER CASE \n");
    } else if( ch >= 'a' && ch <= 'z'){
        printf("LOWER CASE \n");
    } else{
        printf("Not English");
    }
    return 0;
}