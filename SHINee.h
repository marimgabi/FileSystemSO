#ifndef SHINEE_H_INCLUDED
#define SHINEE_H_INCLUDED
#include <vector>
#include "BootRecord.h"
#include "Bitmap.h"
#include "Root.h"
#include "Setor.h"

///using namespace std;

class SHINee{
    BootRecord *boot_record;
    Bitmap *bitmap;
    Root *root;
    vector<Setor> setores;

public:

    SHINee(){

    }

    SHINee(unsigned int number_sectors){
        boot_record = new BootRecord(number_sectors);
        bitmap = new Bitmap(number_sectors,boot_record->getBitmap_number_sectors(), boot_record->getReserved_sectors());
        root = new Root();


    }

    void setBoot_record(BootRecord *_boot){

    }

    BootRecord* getBoot_record(){
        return boot_record;
    }

    void setBitmap(Bitmap *_bitmap){

    }

    Bitmap* getBitmap(){
        return bitmap;
    }

    void setRoot(Root *_root){

    }

    Root* getRoot(){
        return root;
    }

};
#endif // SHINEE_H_INCLUDED
