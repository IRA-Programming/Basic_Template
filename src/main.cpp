/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       Ethan Joseph Varikkad - IRA                               */
/*    Created:      Someday, Somewhere                                        */
/*    Description:  Teaching People                                           */
/*                                                                            */
/*----------------------------------------------------------------------------*/
#include "vex.h"

using namespace vex;

vex::competition Competition;

void autonomous( void ) {
  // Autonomous code here
}

void usercontrol( void ) {
  // User control code here
}

int main() {

    Competition.autonomous( autonomous );
    Competition.drivercontrol( usercontrol );
   
    while(1) {
        
        // Allow other tasks to run
        wait(100, msec);
    }
}




