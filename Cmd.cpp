#include "Cmd.h"
/*Copyright by Huo Chen 2016.4.24*/
using namespace Cmd;

// Returns -1 when command not found
int Vector::CmdToId (char const * cmdName) const
{
	int cmdIndex = -1;
	CmdMap::const_iterator iter = _cmdMap.find (cmdName);
	if (iter != _cmdMap.end ())
		cmdIndex = iter->second;
	return cmdIndex;
}
