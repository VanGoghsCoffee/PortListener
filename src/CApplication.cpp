#include <stdlib.h>
#include <stdio.h>

#include "CApplication.h"
#include "CControl.h"
#include "COutput.h"

// -------------------------------------------------------------------------
// main
int main(int argc, char* argv[])
{
	CControl* Control = new CControl();
	COutput* Output   = new COutput();

	Control->Run(Output);

	delete Control;
	delete Output;

	return 0;
}
// -------------------------------------------------------------------------