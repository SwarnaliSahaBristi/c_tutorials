//conditional statements types => if-else & switch

//ternary

/*
write a program to check if a student passed or failed 
marks > 30 is pass
marks <= 30 is fail
*/

#include<stdio.h>

int main(){
    int marks;
    printf("enter number(0-100) : ");
    scanf("%d", &marks);

    if(marks > 30 && marks <= 100){
        printf("PASSED \n");
    } else if(marks >=0 && marks <= 30) {
        printf("FAILED \n");
    } else {
        printf("WRONG MARKS");
    }
    return 0;
}