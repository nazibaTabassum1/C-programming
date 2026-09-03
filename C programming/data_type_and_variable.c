/*
    Computer memory te data store korar jonno variable use kori.

    ~Example: 
    ekta box e pen ache, ekta box e pencil ache, ekta box e ereser ache.
    Each box er gaye alada alada nam lekha ache so that we can find things easily.

    Computer variable is like this.

    Variable Memory er specific space, where we can store data and use that data using that variable name.

    age = 20;   age--> variable name
                20---> Variable e store kora value[stored value]
                : "age" nam use kore variable ke refer korte parchi
    
    ~Why need Data type?
    age-->   16 
    GPA-->   5.00
    Grade--> A

    Sob data same type na. 16 Integer number/ 5.00 decimal number/ A is a letter
    Then how computer understand whcich is number, which is decimal, which is letter ?
    So we use data type.

    Data type says ekta variable e ki dhoroner data thakbe.

    ~Primary Data Type:
    __data type__   __store__
        int           Integer            [purno sonkha-kono dosomik thake na]
        float         decimal            [. er por 6 significant digit]
        char          Character          [single Quote('')]
        double   more precise decimal    [. er por 16 significant digit]
        string       word/sentence      [double Quote("")]


    ~Variable Declare: data_type Variable_name;
    ~variable Declare + value Assign = data_type variable_name = value;

    ~Variable naming Rules:
    1. letter/underscore diye suru kote hobe. [int age/ int _age]
    2. Name er majhe Letter/number/underscore use kora jabe. [int age1/ int student_marks]
    3. Variable name case sensitive [int age/ int Age : 2ta alada variable]
    4. keyword variable name hisebe use kora jabe na [int int / char return]

    ~Constant
        variable er value chaile change korte pari.
        But emnon kichu variable er value thake jegula change kora uchit na.

        Pi = 3.1416
        Gravity = 9.8
        Maximum marks = 100

        constant holo sthir value jegula program cholar time e change kora jay na.
        [const data_type variable_name = value]

        constant make korar arekta way #define
        [#define CONSTANT_NAME value]


*/

#include<stdio.h>
int main(){

    int age = 20;
    int marks=85;
    int student=40;
    int temperature = -3;

    float gpa = 5.00;
    float price= 99.99;
    float radius = 3.5;
    float temperature = 36.7;
    float number = 5.75;

    char grade = 'A';
    char section= 'B';
    char gender = 'M';

    double pi = 3.141592653589793;
    double accountBalance = 123456.789123;

    int age;      // Declaration
    int age = 20;   // Initialization

    const int MAX_MARKS = 100;
    const float PI = 3.1416;
    const char GRADE = 'A';

    #define MAX_MARKS 100
    #define PI 3.1416

    return 0;
}