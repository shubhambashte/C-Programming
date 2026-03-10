/*
C Output
#include <stdio.h>
int main()
{

    // Displays the string inside quotations
    printf("C Programming");
    return 0;
    
}
    
Integer Output
#include <stdio.h>
int main() {

    int testInteger = 5;
    printf("Number = %d", testInteger);
    return 0;
}

float and double output 
#include <stdio.h>
int main() {
    float number1 = 18.5;
    double number2 = 45.3;

    printf("number1 = %f\n", number1);
    printf("number2 = %lf", number2);
    return 0;
    
}
    
Print Characters
#include <stdio.h>
int main(){
    char character = 'a';
    printf("character = %c", character);
    return 0;
}


C Input

#include <stdio.h>
int main(){

    int testInteger;
    printf("Enter an integer: ");
    scanf("%d", &testInteger);  
    printf("Number = %d",testInteger);
    return 0;
}

Float and Double Input/Output
#include <stdio.h>
int main()
{
    float num1;
    double num2;

    printf("Enter a number: ");
    scanf("%f", &num1);
    printf("Enter another number: ");
    scanf("%lf", &num2);

    printf("num1 = %f\n", num1);
    printf("num2 = %lf", num2);

    return 0;
}

C Character I/O
#include <stdio.h>
int main()
{
    char chr;
    printf("Enter a character: ");
    scanf("%c",&chr);     
    printf("You entered %c.", chr);  
    return 0;
}   

//I/O Multiple Values
#include <stdio.h>
int main()
{
    int a;
    float b;

    printf("Enter integer and then a float: ");
  
    // Taking multiple inputs
    scanf("%d%f", &a, &b);

    printf("You entered %d and %f", a, b);  
    return 0;
}

*/

