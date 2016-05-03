#if !defined (NOTIFY_H)
#define NOTIFY_H
/*Copyright by Huo Chen 2016.4.24*/
#include <cstddef>
#include <windows.h>

const UINT UM_MEMCLEAR = WM_USER;

class NotificationSink
{
public:
	virtual void AddItem (std::size_t id) = 0;
	virtual void UpdateItem (std::size_t id) = 0;
};

#endif
