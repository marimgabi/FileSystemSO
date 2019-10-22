#ifndef CONTROLLERFS_H_INCLUDED
#define CONTROLLERFS_H_INCLUDED
#include <sstream>
#include <stdio.h>

///using namespace std;

class ControllerFS{
    SHINee *shinee;
    string path;
public:

    ControllerFS(){

    }

    void FunctionCaller(string command){
        if(command.find("new format") != string::npos){
            string arr[4];
            int i = 0;
            stringstream ssin(command);
            while (ssin.good() && i < command.size()){
                ssin >> arr[i];
                ++i;
            }
            unsigned long ul = std::stoul (arr[3],nullptr,10);
            path = arr[2];
            if(ul>268419072){
                cout << "O numero maximo de setores suportado e de 268419072" << endl;
            }else{
                shinee = new SHINee(ul);
                gravaTudo();
            }

        }

    }

    void gravaTudo(){

    }

};
#endif // CONTROLLERFS_H_INCLUDED
