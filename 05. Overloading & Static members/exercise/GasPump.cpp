#include <iostream>
#include "GasPump.h"
using namespace std;

// GasPump.cpp에서 정적멤버변수를 초기화하는 코드를 작성!!!
double GasPump::gasInMainTank = 0.0;
double GasPump::costPerGallon = 0.0;

void GasPump::initialize() {
	gasInMainTank = 0;
	//gasDispensed = 0;
	//charge = 0;
	costPerGallon = 0;
}

void GasPump::reset() {
	gasDispensed = 0;
	charge = 0;
}

void GasPump::setPricePerGallon(double newPrice) {
	costPerGallon = newPrice;
}

void GasPump::buyFromJobber(double quantityBought) {
	gasInMainTank += quantityBought;
}

void GasPump::displayAmountInMainTank() {
	cout << gasInMainTank;
}

void GasPump::displayCostPerGallon() {
	cout << costPerGallon;
}

void GasPump::displayGasNCharges() {
	cout << "gallons:" << gasDispensed 
		<<"		   $" << charge << endl;
}

void GasPump::dispense() {
	displayGasNCharges();

	while (gasInMainTank > 0) {
		char quit = cin.get();
		if (quit == 'q' || quit == 'Q') break;

		gasDispensed += 0.1;
		charge += 0.1 * costPerGallon;
		gasInMainTank -= gasDispensed;

		displayGasNCharges();
	}
}