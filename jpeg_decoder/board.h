#ifndef BOARD_H_INCLUDED
#define BOARD_H_INCLUDED

#include <wx/wx.h>
#include <vector>
#include <wx/dcbuffer.h>
#include "jpeg_decode.h"

class board : public wxScrolledWindow
{
public:
	board(wxFrame* parent, int h, int w, jpeg_pic* j_p);
	


private:
	jpeg_pic* j_pic;


	void OnPaint(wxPaintEvent& event);
	void OnScroll(wxScrollEvent& event);
	//void Paint(wxBufferedPaintDC dc);
	//void DrawMcu(int x, int y );
	
	int flag;
	int height, width;


};



#endif // BOARD_H_INCLUDED
