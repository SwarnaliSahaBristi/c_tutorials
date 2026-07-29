// loop control instructions -> for, while, do while

#include<stdio.h>

/*for loop
for(initialisation; condition; updation){

//do something

}*/

//print the numbers from 0 to 10
int main(){
    //iterator ; counter
    //i=i+1 shorthand i++

    // for(int i=0; i<=10; i++){
    //     printf("%d \n", i);
    // }

    //increment operator
    //++i (pre-increment)
    //i++ (post-increment)

    int i=1;
    // printf("%d \n", i++); //use, then increase
    // printf("%d \n", i);

    printf("%d \n", ++i); //increase then use
    printf("%d \n", i);
    
    return 0;
}