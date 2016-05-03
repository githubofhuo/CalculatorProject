#include "Lib/Dialog.h"
#if !defined (ABOUT_H)
#define ABOUT_H
/*Copyright by Huo Chen 2016.4.24*/
#include "Dialog.h"

class AboutCtrl : public Dialog::ModalController
{
public:
    bool OnCommand (int ctrlId, int notifyCode) throw (Win::Exception);
};

#endif
