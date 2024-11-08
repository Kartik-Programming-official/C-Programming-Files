#include <stdio.h>
#include<conio.h>
int main() {
  int n, reverse = 0, remainder;
  printf("\nEnter an integer:- ");
  scanf("%d", &n);
  while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }
  printf("\n Reversed number = %d", reverse);
getch();
  return 0;
}