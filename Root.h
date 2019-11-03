#ifndef ROOT_H_INCLUDED
#define ROOT_H_INCLUDED
#include <vector>
#include "RootEntry.h"

using namespace std;

class Root{
    vector<RootEntry*> entries;
    ///RootEntry entries[];
    unsigned short int root_size; /// tamanho em entradas
public:

    Root(){
        root_size=32;
    }

    Root(unsigned short int root_size_in_sectors){
        root_size=root_size_in_sectors/32;
    }

    vector<RootEntry*> getEntries(){
        return entries;
    }

};

#endif // ROOT_H_INCLUDED
