#include <iostream>
#include "SHINee.h"
#include "ControllerFS.h"

///using namespace std;

int main(){
    ControllerFS *controller = new ControllerFS();
    controller->FunctionCaller("new format cocozinho");
    return 0;
}
