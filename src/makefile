# compiler to use
CC = g++

# options passed to compiler
CFLAGS = -c -Wall

# directory
DIR = ../bin/

all: hello

hello: CApplication.o CControl.o CPortListener.o COutput.o
		$(CC) CApplication.o CControl.o CPortListener.o COutput.o -o $(DIR)PortListener

CApplication.o:	CApplication.cpp
					$(CC) $(CFLAGS) CApplication.cpp

CControl.o: CControl.cpp
				$(CC) $(CFLAGS) CControl.cpp

CPortListener.o: CPortListener.cpp
					$(CC) $(CFLAGS) CPortListener.cpp

COutput.o: COutput.cpp
				$(CC) $(CFLAGS) COutput.cpp

clean:
	rm -rf *o hello