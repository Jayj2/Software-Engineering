#pragma once
#include <wx/frame.h> 
#include "wx\wx.h"
#include "cMain.h"


//https://www.youtube.com/watch?v=FOIbK4bJKS8&t=1965s

class cApp : public wxApp

{
public:
	cApp();
	~cApp();

private:

	cMain* m_frame1 = nullptr;

public:
	virtual bool OnInit();

};


