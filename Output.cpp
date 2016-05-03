#include "Output.h"
/*Copyright by Huo Chen 2016.4.24*/

Output TheOutput;

void Output::Error (char const * str)
{
	::MessageBox (_win, str, "WinCalc Error", MB_OK | MB_ICONERROR);
}

