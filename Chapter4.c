// loop control instructions -> for, while, do while

#include<stdio.h>

/*for loop
for(initialisation; condition; updation){

//do something

}*/

//print the numbers from 0 to 10
int main(){
    //iterator ; counter
    for(int i=0; i<=10; i=i+1){
        printf("%d \n", i);
    }
    return 0;
}