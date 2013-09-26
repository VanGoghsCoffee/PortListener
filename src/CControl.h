#pragma once
#ifndef __PORTLISTENER_CCONTROL_H
#define __PORTLISTENER_CCONTROL_H

#include "COutput.h"

class CControl 
{
	public:
		CControl()
		: m_Status(0)
		, m_Port(0)
		{

		}

		~CControl(){};

	public: 
		void Run(COutput* _Output);
		int SetStatus();
		void SetPort();

	public:
		void RunListener(COutput* _Output);

	private:
		int m_Status;
		int m_Port;
};

#endif /* __PORTLISTENER_CCONTROL_H */