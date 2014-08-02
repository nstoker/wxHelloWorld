/***************************************************************
 * Name:      HelloWorldwxMain.h
 * Purpose:   Defines Application Frame
 * Author:    Neil Stoker (neil.stoker@gmail.com)
 * Created:   2014-01-19
 * Copyright: Neil Stoker ()
 * License:
 **************************************************************/

#ifndef HELLOWORLDWXMAIN_H
#define HELLOWORLDWXMAIN_H

#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

#include "HelloWorldwxApp.h"

class HelloWorldwxFrame: public wxFrame
{
    public:
        HelloWorldwxFrame(wxFrame *frame, const wxString& title);
        ~HelloWorldwxFrame();
    private:
        enum
        {
            idMenuQuit = 1000,
            idMenuAbout
        };
        void OnClose(wxCloseEvent& event);
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        DECLARE_EVENT_TABLE()
};


#endif // HELLOWORLDWXMAIN_H
