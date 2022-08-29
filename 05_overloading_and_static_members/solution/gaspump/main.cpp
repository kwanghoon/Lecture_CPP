#include <iostream>
#include "GasPump.h"
using namespace std;

int main() {
	GasPump pump;

	pump.initialize();

	pump.buyFromJobber(25);

	pump.setPricePerGallon(1.50);

	pump.displayAmountInMainTank();

	pump.reset();
	
	pump.dispense();

	pump.displayAmountInMainTank();
}
