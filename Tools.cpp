#include "Tools.h"
/*Copyright by Huo Chen 2016.4.24*/
#include "Canvas.h"

void Font::Stock::GetTextSize (int &width, int &height)
{
	Win::DisplayCanvas canvas;
	Font::Holder font (canvas, *this);
	TEXTMETRIC metric;
	::GetTextMetrics (canvas, &metric);
	width = metric.tmAveCharWidth;
	height = metric.tmHeight + metric.tmExternalLeading;
}

