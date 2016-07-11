#if !defined (ICON_H)
#define ICON_H
/*Copyright by Huo Chen 2016.4.24*/
#include <windows.h>

class Icon
{
public:
	Icon (HINSTANCE res, 
		int id, 
		int dx = 0, 
		int dy = 0, 
		unsigned flag = LR_DEFAULTCOLOR)
	{
			Load (res, id, dx, dy, flag);
	}
	~Icon ();
	operator HICON () const { return _h; }
protected:
	Icon () : _h (0) {}
	void Load (HINSTANCE res, 
			int id, 
			int dx = 0, 
			int dy = 0, 
			unsigned flag = LR_DEFAULTCOLOR);
protected:
	HICON _h;
};

class SmallIcon: public Icon
{
public:
	SmallIcon () {}
	SmallIcon (HINSTANCE res, int id);
	void Load (HINSTANCE res, int id);
};

class StdIcon: public Icon
{
public:
	StdIcon () {}
	StdIcon (HINSTANCE res, int id);
	void Load (HINSTANCE res, int id);
};

#endif
