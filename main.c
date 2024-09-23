#include <stdio.h>

int main(void) {
  double fullPrice, priceWithDiscount, installment, comissionFull, comissionInstallment;
    
  printf("Enter the sale amount: USD$ ");
    scanf("%lf",&fullPrice);
    
    priceWithDiscount = fullPrice - (fullPrice*0.10);
  printf("The cash price, with a discount, is: USD$ %.2f\n",priceWithDiscount);

    installment = fullPrice/3;
  printf("The price of each installment, in 3 interest-free installments, is: USD$ %.2f\n",installment); 
    
    comissionFull = priceWithDiscount * 0.05;
  printf("The seller's commission, in cash, is: USD$ %.2f\n", comissionFull);
    
    comissionInstallment = installment * 0.05;
  printf("The seller's commission, in installments, is: USD$ %.2f\n", comissionInstallment);
  return 0;
}
