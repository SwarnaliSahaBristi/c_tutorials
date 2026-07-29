// loop control instructions -> for, while, do while

#include<stdio.h>

/*for loop
for(initialisation; condition; updation){

//do something

}*/

//print the numbers from 0 to 10
// int main(){
//     //iterator ; counter
//     //i=i+1 shorthand i++

//     // for(int i=0; i<=10; i++){
//     //     printf("%d \n", i);
//     // }

//     //increment operator
//     //++i (pre-increment)
//     //i++ (post-increment)

//     //--i (pre-decrement)
//     //i-- (post-decrement)

//     // int i=1;
//     // printf("%d \n", i++); //use, then increase
//     // printf("%d \n", i);

//     // printf("%d \n", i--);
//     // printf("%d \n", i);

//     // printf("%d \n", ++i); //increase then use
//     // printf("%d \n", i);

//     // printf("%d \n", --i);
//     // printf("%d \n", i);

//     //loop counter can be float or character
//     // for(float i=1.0; i<=5; i++){
//     //     printf("%f \n", i);
//     // }
    
//     // for(char ch='a'; ch<='z';ch++){
//     //     printf("%c \n", ch);
//     // }
    
//     return 0;
// }

//while loop

/*
while(condition){
   do something
}
*/

//print the numbers from 0 to n, if n is give by user n=4

int main(){
    // int i=1;
    // while(i<=5){
    //     printf("Hello world \n");
    //     i++;
    // }

    int n;
    printf("enter number: ");
    scanf("%d", &n);

    int i=0;
    while (i<=n)
    {
       printf("%d \n", i);
       i++;
    }
    
    return 0;
}