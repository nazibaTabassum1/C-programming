/*
    input:- user theke data neya
    output:- screen e value/info show kora


    ~Format Specifier
    _data Type_     _format specifier_
      int              %d
      float            %f
      double           %lf
      char              %c


     ~~
     scanf() ---> user theke input ney
     scanf("format_specifier", &variable);

     scanf("%d", &age); [user theke integer input ney]
                        [value age varibale e store hoy]

    ~ tumi kaoke bolle ei boi ta rekhe dao. 
    but tumi thik jaiga dekhale na. se boi ta kothay rakhbe ?
    scanf() ke bolte hoy --> variable kon memory location e value rakhbe.
     &age --> age variable er memeory address

     age --> variable er moddhe value
     &age --> variable er memory address
*/

#include<stdio.h>
int main(){

    printf("Hello World");

    int age =20;
    printf("%d",age);

    return 0;
}


#include<stdio.h>
int main(){
    
    int age = 20;
    float gpa = 5.00;
    double bigNumber = 123456.789;
    char grade = 'A';
    
    printf("%d\n", age);
    printf("%f\n", gpa);
    printf("%lf\n", bigNumber);
    printf("%c\n", grade);
    
    return 0;
}


#include<stdio.h>
int main(){

    int age ;
    scanf("%d", &age);
    printf("Your age: %d", &age);

    return 0;
}



