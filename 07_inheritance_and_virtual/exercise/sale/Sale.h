#ifndef SALE_H
#define SALE_H

class Sale {
public:
  Sale();
  Sale(double thePrice);
  double getPrice() const;
  void setPrice (double newPrice);
  virtual double bill() const; // Sale 클래스의 경우 원래 가격을 리턴
  double savings(const Sale& other) const; // other의 가격과 비교

private:
  double price;
};

bool operator< (const Sale& first, const Sale& second);

#endif // SALE_H
