#include <iostream>
#include "Sale.h"
using std::cout;

Sale::Sale( ) : price(0)
{
    //Intentionally empty
} 

Sale::Sale(double thePrice)
{
    if (thePrice >= 0)
	price = thePrice;
    else
    {
	cout << "Error: Cannot have a negative price!\n";
	exit(1);
    }
}

double Sale::bill( ) const
{
    return price;
}

double Sale::getPrice( ) const
{
    return price;
}

void Sale::setPrice(double newPrice)
{
    if (newPrice >= 0)
	price = newPrice;
    else
    {
	cout << "Error: Cannot have a negative price!\n";
	exit(1);

    }
}

double Sale::savings(const Sale& other) const
{
    return (bill( ) - other.bill( ));
}

bool operator < (const Sale& first, const Sale& second)
{
    return (first.bill( ) < second.bill( ));
}
