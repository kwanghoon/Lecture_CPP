#ifndef DISCOUNTSALE_H
#define DISCOUNTSALE_H
#include "Sale.h"

class DiscountSale : public Sale {
public:
  DiscountSale();
  DiscountSale( double thePrice, double theDiscount );
  double getDiscount() const;
  void setDiscount( double newDiscount );
  double bill() const; // 원래 가격에 할인율을 적용한 할인가
private:
  double discount;
};

#endif //DISCOUNTSALE_H
