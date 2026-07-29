// loop control instructions -> for, while, do while

#include<stdio.h>

/*for loop
for(initialisation; condition; updation){

//do something

}*/

int main(){
    for(int i=10; i>=1; i=i-1){
        printf("%d \n", i);
    }
    return 0;
}