#include <stdlib.h>
#include <stdio.h>
#include <iostream>

#include "COutput.h"

// -------------------------------------------------------------------------
// ErrNoPortNumber
void COutput::ErrNoPortNumber()
{
	fprintf(stderr,"No Portnumber given\n");
}
// -------------------------------------------------------------------------

// -------------------------------------------------------------------------
// MenuOptions
void COutput::MenuOptions()
{	
	std::cout << "==============================================" 	<< std::endl;
	std::cout << "Select Options:" 									<< std::endl;
	std::cout << "[1] Start Listener\t" << "[2] Connect to Port" 	<< std::endl;
	std::cout << "[3] Exit\t"										<< std::endl;
	std::cout << "==============================================" 	<< std::endl;
}
// -------------------------------------------------------------------------

// -------------------------------------------------------------------------
// ListenerStarted
void COutput::ListenerStarted()
{	
	std::cout << "Waiting for connections..." 	<< std::endl;
}
// -------------------------------------------------------------------------

// -------------------------------------------------------------------------
// ConnectToPort
void COutput::ConnectToPort()
{	
	std::cout << "Enter port number..." 	<< std::endl;
}
// -------------------------------------------------------------------------

// -------------------------------------------------------------------------
// ConnectToPort
void COutput::Listening(int _Port)
{	
	std::cout << "Listening on port: " << _Port << std::endl;
}
// -------------------------------------------------------------------------