/*
  An organization is dealing in two items, say A and B
  provide the commission on the sale of these items
  according to the following policy:
  a. Commission rate for A is 6% up to sale of Rs.2000.
      if the sale of A above 2000 then the commission is 7% on 
      the extra sale.
  b. For B 10% up to sale of Rs. 4000. If the sale is above
      4000 commission rate is 12% on the extra sale.
*/

#include <stdio.h>

int main(void) {
  char item;
  int commission, sale;
  printf("Choose an item: A or B: ");
  scanf("%c", &item);
  printf("\nEnter the value of your sales: ");
  scanf("%d", &sale);
  if(item == 'A') {
    if(sale <= 2000)
      commission = sale * 0.06;
    else
      commission = 2000 * 0.06 + (sale - 2000) * 0.07;
  } else {
    if(sale <= 4000) 
      commission = sale * 0.1;
    else
      commission = 4000 * 0.1 + (sale - 4000) * 0.12;
  }
  printf("\nReport: Your commission is Rs.%d for the sale of an item %c with sale value Rs.%d", commission, item, sale);
  return 0;
}