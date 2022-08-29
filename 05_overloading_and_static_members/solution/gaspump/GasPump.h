// #pragma once
// GasPump.h

#ifndef CIRCLE_H
#define CIRCLE_H

class GasPump
{
public:
	void initialize();
	void reset();
	void displayCostPerGallon();
	void displayGasNCharges();
	void dispense();
private:
	double gasDispensed, charge;
public:
	void setPricePerGallon(double newPrice);
	void buyFromJobber(double quantity);
	void displayAmountInMainTank();
private:
	double gasInMainTank, costPerGallon;
};
#endif
