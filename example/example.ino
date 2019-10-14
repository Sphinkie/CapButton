/* 
	Example for CapButton library
*/

#include "CapButton.h"

// *******************************************************************************
// A12  analog output for bouton Tune (charge pin)
// A14  analog input for bouton Tune (discharge pin)

CapButton          TuneButton(A12,A14);

// *******************************************************************************
// The setup function runs once when you press reset or power the board
// *******************************************************************************
void setup() 
{
  TuneButton.begin();
}

// *******************************************************************************
// The loop function runs over and over again forever
// *******************************************************************************
void loop() 
{
	if (TuneButton.hasChanged())  
	{
		int value = TuneButton.readValue();
		/* do something with value */
	}

	/* Cap has to be discharged from time to time */
	TuneButton.dischargeCapacitor();
	
	delay (1000);
}

