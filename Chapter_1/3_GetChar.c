#include <stdio.h>

main(){
    int c;

    c = getchar();
    while(c != EOF){    // EOF = End of line (Ctrl + C)
        putchar(c);
        c = getchar();
    } 
}