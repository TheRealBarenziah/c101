#include <stdio.h>

int main(void) {
  float input_price, input_reduction;
  printf("Please enter the price of the article\n");
  scanf("%f", &input_price);
  printf("Now enter the reduction level (min 1%% max 100%%)\n");
  scanf("%f", &input_reduction);
  int x = input_price*(input_reduction/100);
  printf("After reduction, you'll pay your article %i pounds. \n", x);
  return 0;
}