#include <iostream>
#include "GasPump.h"
using namespace std;

void GasPump::initialize() {
	gasInMainTank = 0;
	gasDispensed = 0;
	charge = 0;
}

void GasPump::reset() {
        /* H8 */
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
	cout << /* H9 */  ;
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
		/* H10 */ ;

		displayGasNCharges();
	}
}
