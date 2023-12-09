
#include <stdio.h>

int sum(int, int);
int main() {
   int a, b;

   printf("Enter the two Numbers: ");
   scanf("%d %d", &a, &b);

   printf("Addition of two num. is : %d", add(a, b));
   return(0);
}

int add(int num1, int num2) {
   int i;
   for (i = 0; i < num2; i++)
      num1++;
   return num1;
}