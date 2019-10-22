#include <iostream>
#include "SHINee.h"
#include "ControllerFS.h"

///using namespace std;

int main(){
    ControllerFS *controller = new ControllerFS();
    controller->FunctionCaller("new format out/teste.shy 100");
    return 0;
}
