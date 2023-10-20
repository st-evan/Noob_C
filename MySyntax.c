//My first ever ANSI_C program
#include <stdio.h> //calls standard io library

int main() //main() has a return type of int by convention
{//function scope
    printf("Hello mom. Hey dad.\n"); //must end a statement with ; and include newline with \n
    return 0; //Returning 0 indicates a successful function execution
}
/*
Manually Compile--> gcc <enter filename.c> -o <re-enter filename[NoExtension]>
Then--> ./<enter exe filename[NoExtension]>
Note: for every change made to the source file. You must recompile before running your code again
*/