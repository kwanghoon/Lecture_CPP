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
	cout << "Gas in the main tank: " << gasInMainTank << endl;
}

void GasPump::displayCostPerGallon() {
	cout << "Cost per gallon: " << costPerGallon << endl;
}

void GasPump::displayGasNCharges() {
	cout << "Gas fuled : " << gasDispensed << " gallons,  " 
             << "$" << charge << endl;

	// for debugging
        GasPump::displayAmountInMainTank();
}

void GasPump::dispense() {
	displayGasNCharges();

	while (gasInMainTank > 0) {
		string quit;
                cout << "Fuel up more (Enter yes or no)? ";
                cin >> quit;

		if (quit == "no") break;
                else if (quit == "yes") {

		   gasDispensed += 0.1;
		   charge += 0.1 * costPerGallon;
		   gasInMainTank -= 0.1;

		   displayGasNCharges();
                }
                else {
                   cout << "what?";
                }
	}
}
