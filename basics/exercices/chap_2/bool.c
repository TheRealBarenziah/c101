#include <stdio.h>
/*
Write a program that reads an input number; answer "1" if it is odd, "0" if it is even
*/

int main(void){
  int input;
  short int output;
  printf("Please enter a number : \n");
  scanf("%d", &input);

  if (input % 2 == 0) {
    output = 0;
  } 
  else {
    output = 1;
  }

  printf("%hi \n", output);
  return 0;
}