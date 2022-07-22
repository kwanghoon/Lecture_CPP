#include <iostream>
#include "GasPump.h"
using namespace std;

int main() {
	GasPump pump, p1, p2, p3;

	//pump.initialize();
	GasPump::initialize();

	// pump.buyFromJobber(25);
	GasPump::buyFromJobber(25);

	// pump.setPricePerGallon(1.50);
	GasPump::setPricePerGallon(1.50);

	pump.reset();
	
	// pump.displayAmountInMainTank();
	GasPump::displayAmountInMainTank();
	
	pump.dispense();

}
