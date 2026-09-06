/* 
    Loop : a process to execute a code again and again.
        kono sorto puron na hoya porjonto or nirdisto konkhok bar code run hoyar jonno loop use kori.

    3 Types: 
        1. for loop       --> age theke jana thake koibar loop cholbe
        2. while loop      --> jotokkhon condition true thake totokkhon loop cholbe.
        3. do - while loop  -> age code execute hoy, then condition check hoy.

    for(initialization; condiiton; update){
        // code block
    }
    
    while(condition){
        // code block
    }
    
    do{
        // code block
    } while(condition)

    ~ For Loop:
        --besi use kori, jokhon age theke jana thake kotobar loop cholbe tokhon for loop use kori.
        initialization- loop surur age ekbar chole (i=1).
        condition - each dhap e check kore, true hole code chole.
        update - each dhap sesh e chole ( i++; i er value ek baray).

    ~ While Loop:
        -- condition true thakle loop chole , false hole loop close hoye jay.

        initialization- loop er baire korte hoy.
        condition- each dhap e check kroe, true hole loop chole.
        update- loop er vitore korte hoy, naile infite loop hoy.

        int i=1;
        while(condition){
            // code block
        }
        
        --- while loop e i++ vule gele infinite loop hobe. 
    ~Infinite Loop: je loop er condition false hoy na, bar bar cholte thake.

    ~ do-while loop:
        --- code block ta surute ekbar chole, then conditon check kore, 
            condition true hole cholte thake, false hole close hoye jay.

        --- mane loop at least 1bar cholbe then conditoin check korbe.
        Example: khawar age vat nao, 
                then dekho aro khabe kina
                khabe hole abar vat nao, 
                nahole thamo.

    ~Break: loop theke ber hoye asar jonno. 
            -- loop ke sathe sathe close kore dey & loop theke ber hoye jay.
    ~Continue: loop er present iteration bad diye next iteration e jawa.
            -- roll call kora.
*/

// for loop
#include<stdio.h>
int main(){
    for(int i=1; i<=5; i= i+1){
        printf("%d\n", i);
    }
    return 0;
}

// while loop
#include<stdio.h>
int main(){
    int i=1;
    while(i<=5){
        printf("%d\n", i);
        i++;
    }
    return 0;
}

// do-while loop
#include<stdio.h>
int main(){
    int i=1;
    do{
        printf("%d\n", i);
        i++;
    }while(i<=5);
    return 0;
}

// break

#include<stdio.h>
int main(){
    for(int i=1; i<=10; i= i+1){
        if(i==5) break;
        printf("%d\n", i);
    }
    return 0;
}

// continue 
#include<stdio.h>
int main(){
    for(int i=1; i<=5; i= i+1){
        if(i==3) continue;
        printf("%d\n", i);
    }
    return 0;
}
