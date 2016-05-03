#include "SaveDlg.h"
/*Copyright by Huo Chen 2016.4.24*/
#include "Resource.h"

void SaveCtrl::OnInitDialog () throw (Win::Exception)
{
	_edit.Init (GetWindow (), IDC_EDIT);
}

bool SaveCtrl::OnCommand (int ctrlId, int notifyCode) throw (Win::Exception)
{
	if (ctrlId == IDOK)
	{
		SetPath (_edit.GetText ());
		EndOk ();
		return true;
	}
	else if (ctrlId == IDCANCEL)
	{
		EndCancel ();
		return true;
	}
	return false;
}