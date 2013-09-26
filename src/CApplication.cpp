#include <stdlib.h>
#include <stdio.h>

#include "CApplication.h"
#include "CControl.h"

// -------------------------------------------------------------------------
// main
int main(int argc, char* argv[])
{
	CControl* Control = new CControl();

	if(argc != 2)
	{
		fprintf(stderr,"No Portnumber given\n");
		exit(1);
	}

	int Port = atoi(argv[1]);

	Control->Run(Port);

	delete Control;

	return 0;
}
// -------------------------------------------------------------------------