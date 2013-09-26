#include <iostream>

#include "CControl.h"
#include "CPortListener.h"

// -------------------------------------------------------------------------
// Run
void CControl::Run(COutput* _Output)
{
	while(m_Status != 3)
	{
		_Output->MenuOptions();

		switch (SetStatus())
		{
			case 1:
				_Output->ConnectToPort();
				SetPort();
				_Output->Connecting(m_Port);
				RunListener(_Output);
				break;

			case 3:
				break;
		}
	}
}
// -------------------------------------------------------------------------

// -------------------------------------------------------------------------
// SetStatus
int CControl::SetStatus()
{
	std::cin >> m_Status;
	return m_Status;
}
// -------------------------------------------------------------------------

// -------------------------------------------------------------------------
// SetPort
void CControl::SetPort()
{
	std::cin >> m_Port;
}
// -------------------------------------------------------------------------

// -------------------------------------------------------------------------
// Run
void CControl::RunListener(COutput* _Output)
{
	_Output->ListenerStarted();
	CPortListener::ListenToPort(m_Port);
}
// -------------------------------------------------------------------------