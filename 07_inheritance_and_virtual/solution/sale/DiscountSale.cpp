#include "DiscountSale.h"

DiscountSale::DiscountSale( ) : Sale( ), discount(0)
{
    //Intentionally empty
} 

DiscountSale::DiscountSale(double thePrice, double theDiscount)
	  : Sale(thePrice), discount(theDiscount)
{
    //Intentionally empty
} 

double DiscountSale::getDiscount( ) const
{
    return discount;
}

void DiscountSale::setDiscount(double newDiscount)
{
    discount = newDiscount;
}

double DiscountSale::bill( ) const
{
    double fraction = discount/100;
    return (1 - fraction)*getPrice( );
}
