/***************************************************************
 * Name:      HelloWorldwxApp.h
 * Purpose:   Defines Application Class
 * Author:    Neil Stoker (neil.stoker@gmail.com)
 * Created:   2014-01-19
 * Copyright: Neil Stoker ()
 * License:
 **************************************************************/

#ifndef HELLOWORLDWXAPP_H
#define HELLOWORLDWXAPP_H

#include <wx/app.h>

class HelloWorldwxApp : public wxApp
{
    public:
        virtual bool OnInit();
};

#endif // HELLOWORLDWXAPP_H
