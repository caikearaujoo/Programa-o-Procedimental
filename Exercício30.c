#include <stdio.h>

int main() {
   int num1, num2, num3;

   printf("Digite tres numeros:\n");
   scanf("%d %d %d", &num1, &num2, &num3);

   if (num1 <= num2 && num1 <= num3) {
      printf("%d, ", num1);

      if (num2 <= num3) {
         printf("%d, %d", num2, num3);
      }
      else {
         printf("%d, %d", num3, num2);
      }
   }
   else if (num2 <= num1 && num2 <= num3) {
      printf("%d, ", num2);

      if (num1 <= num3) {
         printf("%d, %d", num1, num3);
      }
      else {
         printf("%d, %d", num3, num1);
      }
   }
   else {
      printf("%d, ", num3);

      if (num1 <= num2) {
         printf("%d, %d", num1, num2);
      }
      else {
         printf("%d, %d", num2, num1);
      }
   }

   return 0;
}
