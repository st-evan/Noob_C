#include <stdio.h>
/*A simple program to read character input from a user and print 
it back on the screen and count num of tabs, blanks,newline and words*/

int main(){
    #define IN 1 //Inside a word
    #define OUT 0 //Outside a word
    
    long c,nw,nc,nl,blk,tab,state;
    nw = blk = tab = nl = nc = 0;
    
    state = OUT;
    while ((c = getchar()) != EOF)
    {
        putchar(c);
        ++nc;
        if (c=='\n')//count newlines by counting new line characters
            ++nl;
        if (c==' ')//count blanklines by counting blankline characters
            ++blk;
        if (c=='\t')//count tabs by counting tab characters
            ++tab;
        //Since a word is a string without a newline,tab or whitespace between individual characters
        if (c == ' ' || c == '\t' || c == '\n'){// OR == ||
            state = OUT;
        }else if(state == OUT){
            state = IN;
            ++nw;
        }     
    }
    printf("Num characters: %1d\nNum Newline: %1d\nNumblank %1d\nNumtab %1d\n",nc,nl,blk,tab);
    printf("Num of words: %1d",nw);
    return 0;
}
/*Or we could do the same in a for loop

int main(){
    #define OUT 1
    #define IN 0
    

    long c,nc,nl,nw,state;
    state = OUT;

    //initialized nc to 0; got char and returned to c, checked the condition != and/-
    //incremented nc before displaying char

    for (nc = nw = nl = 0; (c = getchar()) != EOF; ++nc){
        putchar(c);
        if (c=='\n'){ 
            ++nl;
        } 
        if (c == ' ' || c == '\t' || c == '\n'){
            state = OUT;
        }else if(state == OUT){
            state = IN;
            ++nw;
        }     
    }
    printf("Num of characters are: %1d\nNum of words; %1d",(nc-1),nw);
}

getchar() reads the next character from a text stream and returns that to the var c/-
the character may come from the keyboard or files.
EOF represents the 'end of file' value.
putchar() prints the content of the long integer var c as a character. you can also say putchar(\n)/-
to insert a new line space after every individual character.
A text stream is a sequence of characters divided into lines consisting of 0 or more/-
characters followed by a newline character\n.
Whilst DT char is built to store charater data any integer (long,short,int) type can be used./-
Here long was used bcuz getchar() returns a unique value when there is no more input ie EOF./-
c must then be declared to be a type big enough to hold ANY value getchar() returns.
nc var counts the total number of characters calculated in the while loop inluding blanks/-
\n \t \b characters etc.
NOTE: characters in a machine are represented by the machine's characterset numerical value
'A' is a single character (DT: char) in the ASCII characterset 65('\n\t'\b all escape characters)
*/