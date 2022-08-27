#include <iostream>
#include "GasPump.h"
using namespace std;

int main() {
	//pump.initialize();
	GasPump::initialize();

	// pump.buyFromJobber(25);
	GasPump::buyFromJobber(25);

	// pump.setPricePerGallon(1.50);
	GasPump::setPricePerGallon(1.50);

	// pump.displayAmountInMainTank();
	GasPump::displayAmountInMainTank();
        GasPump:: displayCostPerGallon();

	{
	  GasPump pump1, pump2;

	  string name;

	  while (1) {
	     cout << "Enter gas pump name (pump1 or pump2 or quit): ";
	     cin >> name;

	     if (name == "pump1") {
		pump1.reset();

		pump1.dispense();

		GasPump::displayAmountInMainTank();
	     }
	     else if (name == "pump2" ) {
		pump2.reset();

		pump2.dispense();

		GasPump::displayAmountInMainTank();
	     }
	     else if (name == "quit") {
		break;
	     }
	     else {
		cout << "what?" << endl;
	     }
	  }
	}
}
