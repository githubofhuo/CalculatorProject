#include "Exception.h"
/*Copyright by Huo Chen 2016.4.24*/
#include <windows.h>

using namespace Win;

Exception::Exception (std::string const & msg, 
					  std::string const & objName, 
					  unsigned long err)
    : _msg (msg), 
	  _err (err),
	  _objName (objName)
{
	if (_err == 0)
		_err = ::GetLastError ();
    ::SetLastError (0);
}

// Copy everything but substitute the message
// Use when re-throwing
Exception::Exception (std::string const & msg, Exception const & e)
: _msg (msg), _err (e._err), _objName (e._objName)
{
}