// For Loop

// Print numbers from 1 to 10
/*
#include <stdio.h>
int main(){
    int i;

    for(i = 1; i < 11; i++)
    {
        printf("%d", i);

    }
    return 0;
}
    */

// Program to calculate the sum of first natural n numbers
// Positive integers 1,2,3...n are known as natural numbers

#include <stdio.h>
int main(){
    int num, count, sum = 0;

    printf("Enter a Positive integer: ");
    scanf("%d", &num);

    // For loop terminates when count exceeds num

    for(count = 1; count <= num; ++count)
    {
        sum += count;
    }

    printf("Sum = %d", sum);

    return 0;
}