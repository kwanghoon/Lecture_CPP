#include <iostream>
#include "GasPump.h"
using namespace std;

void GasPump::initialize() {
	gasInMainTank = 0;
	gasDispensed = 0;
	charge = 0;
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
        displayAmountInMainTank();
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
