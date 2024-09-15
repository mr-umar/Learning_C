/*
Convert from C to F

Vars, expressions and iterations
*/

#include <stdio.h>

// prints fah-cel table

/*
main(){
float fahr, celsius;          //Definition
int lower, upper, step;     //Definition

lower = 0;                  //Init
upper = 10;                //Init
step = 3;                  //Init

celsius = lower;

printf("F\t|\tC\n");
while (celsius <= upper)
{   
    fahr = (celsius) * (9.0/5.0) + 32.0; // Bad formula :P
    printf("%.1f\t|\t%.1f\n", fahr, celsius);
    celsius += step;
}
}

*/

main(){
    int fahr;

    for (fahr=0;fahr<=300; fahr=fahr+20)
    {
        printf("%3d %6.1f\n",fahr,(5.0/9.0)*(fahr-32));
    }

}