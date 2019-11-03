#ifndef ROOT_H_INCLUDED
#define ROOT_H_INCLUDED

class Root{
    vector<RootEntry> entries;
public:

    Root(){

    }

    Root(unsigned short int root_size_in_sectors){

    }

    vector<RootEntry> getEntries(){
        return entries;
    }

};

#endif // ROOT_H_INCLUDED
