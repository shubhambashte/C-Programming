// Local Variable
/*
#include <stdio.h>

int main(void) {
  
  for (int i = 0; i < 5; ++i) {
     printf("C programming");
  }
  
 // Error: i is not declared at this point
  printf("%d", i);  
  return 0;
}

// Global Variable

#include <stdio.h>
void display();

int n = 5;  // global variable

int main()
{
    ++n;     
    display();
    return 0;
}

void display()
{
    ++n;   
    printf("n = %d", n);
}


*/
// Static Variable

#include <stdio.h>
void display();

int main()
{
    display();
    display();
}
void display()
{
    static int c = 1;
    c += 5;
    printf("%d  ",c);
}
