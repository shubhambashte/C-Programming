// Working of Arithmetic Operators
/* 

#include <stdio.h>
int main(){

    int a = 9, b = 7, c;
    c=a+b;
    printf("a+b = %d \n", c);
    c=a-b;
    printf("a-b = %d \n", c);
    c=a*b;
    printf("a*b = %d \n", c);
    c=a/b;
    printf("a/b = %d \n", c);
    c=a%b;
    printf("Remainder when a divided by b = %d \n", c);
    
    return 0;
}
*/

// Working of increment and decrement operators
/*
#include <stdio.h>
int main(){

    int a = 18, b = 85;
    float c = 45.4, d = 75;

    printf("++a = %d \n", ++a);
    printf("--b = %d \n", --b);
    printf("++c = %f \n", ++c);
    printf("--d = %f \n", --d);

    return 0;

}
*/

// Working of Assignment operators
/*
#include <stdio.h>
int main(){

    int a = 3, c;

    c = a;  //c = 5
    printf("c = %d\n", c);
    c+=a;  //c = 10
    printf("c = %d\n ", c);
    c-=a; // c = 5
    printf("c = %d\n", c);
    c*=a; // c = 25
    printf("c = %d\n", c);
    c/=a; // c = 5
    printf("c = %d\n", c);
    c%=a; // c = 0
    printf("c = %d\n", c);

    return 0;
}
*/

// Working of Relational Operators 
/*
#include <stdio.h>
int main(){

    int a = 18, b = 7, c = 45;

    printf("%d == %d is %d\n", a,b, a==b);
    printf("%d == %d is %d \n", a, c, a == c);
    printf("%d > %d is %d \n", a, b, a > b);
    printf("%d > %d is %d \n", a, c, a > c);
    printf("%d < %d is %d \n", a, b, a < b);
    printf("%d < %d is %d \n", a, c, a < c);
    printf("%d != %d is %d \n", a, b, a != b);
    printf("%d != %d is %d \n", a, c, a != c);
    printf("%d >= %d is %d \n", a, b, a >= b);
    printf("%d >= %d is %d \n", a, c, a >= c);
    printf("%d <= %d is %d \n", a, b, a <= b);
    printf("%d <= %d is %d \n", a, c, a <= c);

    return 0;
}
    */

// Working of Logical Operators 
/*
#include <stdio.h>
int main(){

    int a = 18, b = 45, c= 7, result;

    result = (a==b) && (c > b);
    printf("(a = = b) && (c > b) is %d\n", result);

    result = (a==b) && (c < b);
    printf("(a==b) && (c<b) is %d\n", result);

    result = (a==b) || (c<b);
    printf("(a==b) || (c<b) is %d\n", result);
    
    result = (a != b) || (c < b);
    printf("(a != b) || (c < b) is %d \n", result);

    result = !(a != b);
    printf("!(a != b) is %d \n", result);

    result = !(a == b);
    printf("!(a == b) is %d \n", result);

    return 0;
}
*/

// sizeof Operator

#include <stdio.h>
int main(){

    int a;
    float b;
    double c;
    char d;

    printf("Size of int=%lu bytes\n", sizeof(a));
    printf("Size of float=%lu bytes\n",sizeof(b));
    printf("Size of double=%lu bytes\n",sizeof(c));
    printf("Size of char=%lu byte\n",sizeof(d));

    return 0;
}