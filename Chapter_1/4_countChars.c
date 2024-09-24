#include <stdio.h>

main(){
    
    long nc=0;

    while(getchar() != EOF)    // EOF = End of line (Ctrl + C)
        nc++;

    printf("He contado %ld caracteres.\n", nc);

}