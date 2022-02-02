#include <iostream>
#include <windows.h>
 
int mod(int in, int imod){
	int iq = (in/imod);
	return in - (iq * imod);
}

char getChar(int iGenerator, char cbase, int irange){
	return cbase + mod(igenerator, irange);
}

int main(){
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 2);
}