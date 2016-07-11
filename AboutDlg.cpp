#include "AboutDlg.h"
/*Copyright by Huo Chen 2016.4.24*/
#include "Dialog.h"
#include <winuser.h>

namespace Win {
	class Exception;
}

bool AboutCtrl::OnCommand (int ctrlId, int notifyCode) throw (Win::Exception)
{
	if (ctrlId == IDOK)
	{
		EndOk ();
		return true;
	}
	return false;
}
