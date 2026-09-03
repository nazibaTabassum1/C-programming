/*
    variable er upor logical operation er jonno jei symbol use kori.

    ~Arithmetic Operator: + - * / %
        + : int a =10, b = 20;
            int sum = a+b;
        - : int a = 20, b = 10;
            int difference a-b;
        * : int a = 5, b=6;
            int product = a*b;
        / : int a = 20, b = 4;
            int quotient = a/b;
        % : int a = 20, b = 3;
            int reminder = a%b;


    ~Relational Operator: == , != , > , <  [boolean value return kore : 0(false), 1(true)]
        a = 10, b = 20
        == : a==b [0]
        != : a!=b [1]
        > :  a>b  [0]
        < :  a<b  [1]
        >= : a>=b  [0]
        <= : a<=b  [1]

    ~Logical Operator: && , || , !
    
    ~Bitwise Operator: AND(&) , OR(|), XOR(^), NOT(~), left-shift(<<), right-shift(>>)
*/

// Arithmetic Operator
#include<stdio.h>
int main()
{
    int a=20, b=3;
    int sum, difference, product, quotient, reminder;

    sum = a+b;
    difference = a-b;
    product = a*b;
    quotient = a/b;
    reminder = a%b;

    printf("Sum: %d\n", sum);
    printf("difference: %d\n", difference);
    printf("product: %d\n", product);
    printf("quotient: %d\n", quotient);
    printf("reminder: %d\n", reminder);
    return 0;
}

// Relational Operator
#include<stdio.h>
int main()
{
    int a=10, b=20;
    
    if(a==b)
        printf("a is equal to b\n");
    else 
        printf("a is not equal to b.\n");

    if(a!=b)
        printf("a is not equal to b.\n");
    
    if(a>b)
        printf("a is greater than b.\n");
    else 
        printf("a is not greater than b.\n");
        
    if(a<b) 
        printf("a is less than b.\n");
        
    if(a>=b)
        printf("a is greater than or equal to b.\n");
    else 
        printf("a is not greater than or equal to b.\n");

    
    if(a<=b) 
        printf("a is less than or equal to b.\n");

    return 0;
}


// Logical Operator
#include<stdio.h>
int main()
{
    int a=20, b=3;

    if(a>5 && b <30) printf("Both conditions are true (AND).\n");

    if(a>15 || b<30) printf("At least one condition is true (OR).\n");

    if(!(a>15)) printf("The condition is false, but NOT makes it true(NOT).\n");

    return 0;
}

// Bitwise Operator
#include<stdio.h>
int main()
{
    int a = 5 ;
    int  b = 3;

    printf("a & b = %d\n", a&b);
    printf("a | b = %d\n", a|b);
    printf("a^b = %d\n", a^b);
    printf("~a = %d\n", ~a);
    printf("a<<1 = %d\n", a<<1);
    printf("a>>1 = %d\n", a>>1);

    return 0;
}
