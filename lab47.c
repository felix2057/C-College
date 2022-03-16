#include <stdio.h>
int main()
{
   float MRP, Selling_Price;
   printf("Enter the MRP of book:");
    scanf("%f",&MRP);

  if (MRP>1500)  
 {
     Selling_Price = MRP - 0.01*MRP; 
     printf("The selling price is %f", Selling_Price);
 } 
  else if (1000<MRP<=1500) 
  {
     Selling_Price = MRP - 0.08*MRP;  
     printf("The selling price is %f", Selling_Price);
  }
  else
  {
     Selling_Price = MRP - 0.05*MRP; 
     printf("The selling price is %f", Selling_Price);
  }
  return 0;
}