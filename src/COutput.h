#pragma once
#ifndef __PORTLISTENER_COUTPUT_H
#define __PORTLISTENER_COUTPUT_H

class COutput
{
	public:
		void ErrNoPortNumber();

	public:
		void MenuOptions();
		void ListenerStarted();
		void ConnectToPort();
		void Connecting(int _Port);
};

#endif /* __PORTLISTENER_COUTPUT_H */