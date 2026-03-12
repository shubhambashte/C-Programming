// Print numbers from 1 to 5 While Loop

#include <stdio.h>
int main() {
    int i = 1;

    while(i<=5){
        printf("%d\n", i);
        ++i;
    }
    return 0;
}

// Program to add numbers until the user enters zero
/*
#include <stdio.h>

int main(){
  double number, sum = 0;

  // body of the loop is executed at least once 

  do{
   printf("Enter a number: ");
   scanf("%lf)", &number);
   sum += number;   
  }
   while(number != 0.0);

   printf("Sum = %.2lf", sum);

   return 0;
}
   */