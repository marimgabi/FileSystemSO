#ifndef CONTROLLERFS_H_INCLUDED
#define CONTROLLERFS_H_INCLUDED

///using namespace std;

class ControllerFS{
    SHINee *shinee;
    string path;
public:

    ControllerFS(){

    }

    void FunctionCaller(string command){
        if(command.find("new format") != string::npos){
            shinee = new SHINee();
        }

    }

};
#endif // CONTROLLERFS_H_INCLUDED
