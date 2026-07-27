/*
instructions 
types --> 1. Type Declaration Instructions
          2. Arithmetic Instructions => b^c ❌ pow(b,c)🟢 => pow comes from math.h
          3. Control Instructions

int op int -> int
2    *  2  -> 4

int op float-> float
2.0  *    2  -> 4.0

float op  float -> float
2.0    *    2.0 -> 4.0
*/

#include<stdio.h>
#include<math.h>

int main(){
    // power operator
    // int b, c;
    // b = c = 1;
    // int a = b = c;
    // int power = b^c;❌
    // int power = pow(b,c);🟢
    // printf("%d", power);

    //modular operator(vagsesh/reminder) => work only for integer
    // printf("%d", -13%10);

    // printf("%d \n", 2 / 2);
    // int a = (float) 1.999999;
    // int a = 5 + 2 / 2 * 3;
    // printf("%d \n", a);

    //no true false in c language if true = 1 or if false = 0
    // ! means not
    // printf("%d \n", 4 != 4); 

    //logial operator
    // && AND 
    // || OR
    // ! NOT
    printf("%d \n", !(3 > 4 && 5 > 2));
    return 0;
}
