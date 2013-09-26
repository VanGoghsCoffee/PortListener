#include "CControl.h"
#include "CPortListener.h"

// -------------------------------------------------------------------------
// Run
void CControl::Run(int _PortNumber)
{
	CPortListener::ListenToPort(_PortNumber);
}
// -------------------------------------------------------------------------