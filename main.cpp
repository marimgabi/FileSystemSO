#include <iostream>
#include "SHINee.h"
#include "ControllerFS.h"

///using namespace std;

int main(){
    ControllerFS *controller = new ControllerFS();
    controller->FunctionCaller("new format out/teste.shy 100");

//    cout << "Para acessar a lista de comando digite 'help'" << endl;
//    string line;
//    do{
//        cin >> line;
//        if(line!="exit"){
//            controller->FunctionCaller(line);
//        }else break;
//
//    }while(line!="quit");

    return 0;
}
