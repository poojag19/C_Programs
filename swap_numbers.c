// Task swapping the two given integer numbers
#include<stdio.h>
int main() {
      int fno, sno, tno;
      printf("Enter first number: ");
      scanf("%d", &fno);
      printf("Enter second number: ");
      scanf("%d", &sno);

      // recieved first number is asssigned to temp
      tno = fno;

      // after that now second number is assigned to first
      fno = sno;

      // Value of temp (initial value of first) is assigned to second
      sno = tno;

      printf("\nAfter swapping, First Number = %d", fno);
      printf("\nAfter swapping, Second Number = %d", sno);
      return 0;
}
