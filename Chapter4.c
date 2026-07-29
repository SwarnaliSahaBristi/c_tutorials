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

    //increment operator
    //++i i++
    
    for(int i=0; i<=10; i++){
        printf("%d \n", i);
    }
    return 0;
}