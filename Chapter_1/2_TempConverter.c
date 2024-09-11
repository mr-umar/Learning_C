/*
Convert from Fº to Cº

Vars, expressions and iterations
*/

#include <stdio.h>

// prints fah-cel table

main(){
int fahr, celsius;          //Definition
int lower, upper, step;     //Definition

lower = 0;                  //Init
upper = 300;                //Init
step = 20;                  //Init

fahr = lower;

printf("F\t|\tC\n");
while (fahr <= upper)
{
    celsius = 5 * (fahr - 32) / 9;
    printf("%d\t|\t%d\n", fahr, celsius);
    fahr += step;
}
}