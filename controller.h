#ifndef _CONTROLLER_H
#define _CONTROLLER_H

#include "manager.h"
#include "help.h"

class Controller {
    public:
	    void execute_cmd(int cmd);
   
   private:
	Manager *manager;
	Help help;
}; 
#endif