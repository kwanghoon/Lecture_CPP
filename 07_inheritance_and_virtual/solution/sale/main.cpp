#include <iostream>
#include <cassert>
#include <cstdlib>
using namespace std;

#include "Sale.h"
#include "DiscountSale.h"

int main() {

  // 1) First round
  Sale simple( 10.00 );  // 가격 10, 판매 가격 10
  DiscountSale discount( 11.00, 10.0 );  // 가격 11, 10% 할인해서 판매 가격 9.9

  cout << "Sale price: " << simple.getPrice() << endl;
  cout << "DiscountSale price and discount rate: " << discount.getPrice() << ", " 
       << discount.getDiscount() << endl;

  if ( discount < simple ) {
    cout << "Discounted item is cheaper." << endl;
    cout << "Savings is $" << simple.savings( discount ) << endl;
  }
  else {
    cout << "Discounted item is not cheaper." << endl;
  }

  assert ( abs ( simple.bill() - 10.00 ) < 0.0001 );
  assert ( abs ( discount.bill() - 9.9 ) < 0.0001 );

  // 2) Second round
  double price, discount_rate;

  cout << "Enter Sale price: ";
  cin >> price;
  simple.setPrice( price );

  cout << "Enter DiscountSale price: ";
  cin >> price;
  discount.setPrice ( price );

  cout << "Enter a discount rate: ";
  cin >> discount_rate;
  discount.setDiscount( discount_rate );

  if ( discount < simple ) {
    cout << "Discounted item is cheaper." << endl;
    cout << "Savings is $" << simple.savings( discount ) << endl;
  }
  else {
    cout << "Discounted item is not cheaper." << endl;
  }


  return 0;
}
