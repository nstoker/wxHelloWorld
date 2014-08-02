/***************************************************************
 * Name:      HelloWorldwxApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Neil Stoker (neil.stoker@gmail.com)
 * Created:   2014-01-19
 * Copyright: Neil Stoker ()
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "HelloWorldwxApp.h"
#include "HelloWorldwxMain.h"

IMPLEMENT_APP(HelloWorldwxApp);

bool HelloWorldwxApp::OnInit()
{
    HelloWorldwxFrame* frame = new HelloWorldwxFrame(0L, _("wxWidgets Application Template"));
    
    frame->Show();
    
    return true;
}
