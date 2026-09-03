/*
    ~ jeta sorto onujayi decision ney.
    sorto true hole ekta kaj korbe, flase hole onno kaj or kichui korbe na.
    Example: 
        basay mehoman aslo. bollo bazar theke mangso kine ante. 
        jodi hash pao tahole hash nahole murgi kinba.
        tomar kaj holo mangso kine ana, kintu tomake sorto deya hocche je jodi hash pao 
        tahole hash nahole murgi. 
        to sorto onujayi first e check korba je hash ache kina then na thakle murgi kinba.

        ~ 3 types: 
            1. if statement 
            2. if-else statement 
            3. else if statement

        1. if statement: kono korto true hole code block execute kore.
            if(condition){
                // code block
            }
            green light jolle gari cholbe. 
            if(light == green){
               // car moves.
            }
        
        2. if+else statement: jokhon number 10 er theke boro tokhonoi code execute hoyeche. 
                    mane condition true chilo. 
                        if statement jokhon false thake tokhon code execute hoy ni. 
                    jodi chai je true te if condition execute hocche temoni jodi false hole kono 
                    code block execute hoto.
                    thats why amader else statement proyojon. 
            : condition true hole ekta code block execute kore, 
            false hole arekta code block execute kore. 

            condition(true) ---> if block execute
            condition(flase) ---> else block execute

            if(num>10){
                printf("Greater than 10");
            }
            else {
                printf("Not greater than 10");
                }

        3. Else-if statement:
            jodi onek gula sorto thake, number 0 er theke choto hole bolbo "negative",
            zero er equal hole "zero" bolbo, zero er boro hole bolbo "Positive".

            : ekadhik sorto er jonno use kora hoy. 

            first e if er condition check kore, false hole else if er condition check kore,
            evebe sob condition false hole else bolck er code execute hoy.

            first condition true ----> if block code execute
              ||    ||      flase ----> else if condition check
              all condition false -----> else block code execute

            ~~~~ If else ladder ~~~~~
            if(condition){
            
            }
            else if(condition){
            
            }
            else {
            
            }

    ~Switch - Case:
        ekta variabler er value onyjayi code block execute korar jonno use kori.
        program ekta value ke different case er sathe milaye dekhe,
        jei case er value mile jay, sei case er code execute hoy.
        kono case er sathe na mille default block er code execute hoy.

        case er sathe mille         ---->           case er code cholbe
        kono case er sathe na mille -----> default block er code cholbe

        switch(choice){
            case value1: 
                // code block;
                break;
            case value2: 
                // code block;
                break;
            default:
                // code block;
        }

    ~~Ternary Operator:
        -- ekta condition check kore 2ta value er majhe 1ta return kore. 
        if-else er short form.

        condition ? experssion1 : expression2;

        condition--> ture --> return expression1
        condition--> false --> return expression2

        (weather == rain)? "take an umbrella" : "No umbrella";

*/


    // 1. If statement 
    #include<stdio.h>
    int main(){

        int num = 15;
        if(num>10){
            printf("Greater NUmber\n");
        }

        return 0;
    }

    // 2. If + else statement
    #include<stdio.h>
    int main(){

        int num = 15;
        if(num>10){
            printf("Greater than 10\n");
        }
        else {
            printf("Not greater than 10\n");
        }

        return 0;
    }

    // 3. Else - if statement:
    #include<stdio.h>
    int main(){

        int num = 0;
        if(num<0){
            printf("Negative");
        }
        else if(num==0){
            printf("Zero");
        }
        else {
            printf("Positive");
        }
        
        return 0;
    }

    // Switch - Case
    #include<stdio.h>
    int main(){

        int day = 3;
        switch(day)
        {
            case 1:
                printf("Monday\n");
                break;
            case 2:
                printf("Tuesday\n");
                break;
            case 3:
                printf("Wednesday\n");
                break;
            default:
                printf("Invalid day\n");
        }
        
        return 0;
    }


    // Ternary operator:
    #include<stdio.h>
    int main(){

        int a = 10, b= 20;
        int max = (a>b) ? a : b;
        printf(" Maximum value is: %d\n", max);
        
        return 0;
    }





