#include "Calc.h"
/*Copyright by Huo Chen 2016.4.24*/

void Calculator::Serialize (Serializer & out) const
{
	_symTab.Serialize (out);
	_store.Serialize (out);
}

void Calculator::DeSerialize (DeSerializer & in)
{
	_symTab.DeSerialize (in);
	_store.DeSerialize (in);
}