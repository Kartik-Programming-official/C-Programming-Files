#include <stdio.h>
#include<conio.h>
int main() {
  int t1 = 0, t2 = 1, nextTerm = 0, n;
  
  printf("\n Enter a positive number:- ");
  
  scanf("%d", &n);
  nextTerm = t1 + t2;
  while (nextTerm <= n) {
  	
    printf("%d, ", nextTerm);
    
    t1 = t2;
    
    t2 = nextTerm;
    
    nextTerm = t1 + t2;
    
  }
  
  getch();
  
  return 0;
}