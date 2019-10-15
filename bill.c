/*
CIT-223-015/2019
NAME       : OSEBEYA DICKSON NYAIGOTI
FACULTY    : CIT
DEPARTMENT : COMPUTER SCIENCE
Program to calculate the bill of a customer in electricity consumption of KPLC
*/

#include <stdio.h>
int main(){
  int Units,Extra_Units,balance_units,balance_units2;
  const float B_price = 200.00;
  float Bill;

  //collect input from user
  printf("Enter your units : ");
  scanf("%d",&Units );

  //conditions
  if (Units < 0 ) {
    printf("incorrect input \n");
  }
  else if (Units<=100) {
    Bill = B_price;
    printf("Your Bill = %.2f/= \n",Bill );
  }
  else if(Units >100 & Units <= 150)
  {
    Extra_Units = Units - 100;
    Bill = B_price + (Extra_Units*10);
    printf("Your Bill = %.2f/= \n",Bill );
  }
  else if(Units >150 & Units <= 200)
  {
    Extra_Units = Units - 100;
    balance_units=  Extra_Units - 50;
    Bill = B_price + ((Extra_Units - balance_units)*10) + (balance_units *20);
    printf("Your Bill =  %.2f/= \n",Bill );
  }
  else if(Units >200)
  {
    balance_units=  50;
    Bill = B_price + (50 * 10) + (balance_units * 20) + ((Units-200)*15);
    printf("Your Bill =  %.2f/= \n",Bill );
  }
  return 0;
}
