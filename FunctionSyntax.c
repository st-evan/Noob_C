#include <stdio.h>

int main()
{
    //Using While loop to Convert temperature (*F->*C) using C=(5/9)(F-32)
    void while_loop_section()
    {
        float fahr, celsius;
        int lower, upper, step; //Must declare the type of var before use.
        
        //var initialization
        lower = 0; //lower temp limit
        upper = 100; //upper bound
        step = 20; //step size
        fahr = lower;
        
        printf("Using while loop to convert F to C\n"); //Header message
        while (fahr <= upper) //loop condition
        {
            celsius = (5.0/9.0) * (fahr-32.0);
            printf("%3.0f\t%6.1f\n",fahr,celsius); //<\t> indicates a tab
            fahr = fahr + step; 
        }
    }

    //Using For loop to Convert temperature (*C->*F) using F = C(9/5)+32
    void for_loop_section() //Declaring own function for_loop_section as void bcuz it takes no input
    {
        int celsius; //Initialized Celsius as int bcuz we want it as int
        printf("\nUsing For loops to convert C to F\n"); //Header message
        
        for (celsius = 0; celsius <= 100; celsius = celsius + 20)
        printf("%3d\t%6.1f\n",celsius, (celsius*(9.0/5.0))+32.0);
    }

    //Using proper constant definition
    void Constant_definition_section()
    {
        #define PI 3.141592 //Do not use ; to end constant definition statements
        float radius = 4.5;

        //Calculate circumference without using a var to hold circumference value
        printf("\nCircumference of the cirle is: %3.1f\n",(2*PI*radius));
        
        //Calculating area but assigning value of area to a var
        float area = (PI*(radius*radius));
        printf("Whilst the area is %3.1f\n", area);
    }
    //Calling own func(s) from within main() scope
    while_loop_section();
    for_loop_section(); 
    Constant_definition_section();
    return 0;//Must return 0 within main scope to terminate the entire program
}

/*
IN WHILE LOOP SECTION
--> 5/9 as in C=(5/9)(F-32) defaults to integer division. Fractionals are discarded/-
and as such 5/9 will result in a zero which would affect the entire loop output./-
which is why the values must be of float type
--> % is a placeholder for where an arg will be placed in the str output of printf./-
%f ,for instance, indicates an arg with float value. it must match properly by n0/-
of incoming arg and its type. %3f specifies a field 3digits wide for the val of the/-
float val of the arg and %6.1f specifies a 6digit width with 1digit after the decimal

IN FOR LOOP SECTION
-->for (celsius = 0; celsius <= 100; celsius = celsius + 20) The values of upper, lower/-
and step vars appear as constant conditions in the for loop which allows us eliminate /-
most of the var and the computed var of Fahr now appears as the 3rd arg in printf().
THEREFORE: IN ANY CONTEXT WHERE IT IS PERMISSIBLE TO USE THE VAL OF A VAR OF SOME TYPE/-
YOU CAN USE A MORE COMPLICATED EXPRESSION OF THAT TYPE.

IN THE CONSTANT DEFINITION SECTION
#define <CONSTANT NAME> <constant val> is how contants are properly defined in C rather than
'<var name> = val'. <CONSTANT NAME> must be written in uppercase by convention and no semi-colons (;)
*/