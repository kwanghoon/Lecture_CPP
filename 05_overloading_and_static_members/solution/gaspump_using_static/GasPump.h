// #pragma once
// GasPump.h

#ifndef CIRCLE_H
#define CIRCLE_H

class GasPump
{
public:
	static void initialize();
	void reset();
	static void displayCostPerGallon();
	void displayGasNCharges();
	void dispense();
private:
	double gasDispensed, charge;
public:
	static void setPricePerGallon(double newPrice);
	static void buyFromJobber(double quantity);
	static void displayAmountInMainTank();
private:
	static double gasInMainTank, costPerGallon;
};
#endif
