#if !defined (OUTPUT_H)
#define OUTPUT_H
/*Copyright by Huo Chen 2016.4.24*/
#include "Window.h"
#include <string>

class Output
{
public:
	Output () : _win (0) {}
	void Init (Win::Dow win)
	{
		_win.Init (win);
	}
	void Error (std::string str)
	{
		Error (str.c_str ());
	}
	void Error (char const * str);
private:
	Win::Dow _win;
};

extern Output TheOutput;


#endif
