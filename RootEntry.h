#ifndef ROOTENTRY_H_INCLUDED
#define ROOTENTRY_H_INCLUDED
#include <ctime>

using namespace std;

class RootEntry{
    string name_extension; ///tem q limitar a 11 bytes
    unsigned char file_attribute;
    unsigned char tenths_of_second;
    unsigned short int creation_time;
    unsigned short int creation_date;
    unsigned short int last_access_date;
    unsigned short int first_cluster_high;
    unsigned short int last_modification_time;
    unsigned short int last_modification_date;
    unsigned short int first_cluster_low;
    unsigned int file_size;

public:

    RootEntry(){
        name_extension="00000000000";
        file_attribute=0;
        tenths_of_second=0;
        creation_time=0;
        creation_date=0;
        last_access_date=0;
        first_cluster_high=0;
        last_modification_time=0;
        last_modification_date=0;
        first_cluster_low=0;
        file_size=0;
    }

    RootEntry(RootEntry &p) {
        name_extension=p.getName_extension();
        file_attribute=p.getFile_attribute();
        tenths_of_second=p.getTenths_of_second();
        creation_time=p.getCreation_time();
        creation_date=p.getCreation_date();
        last_access_date=p.getLast_access_date();
        first_cluster_high=p.getFirst_cluster_high();
        last_modification_time=p.getLast_modification_time();
        last_modification_date=p.getLast_modification_date();
        first_cluster_low=p.getFirst_cluster_low();
        file_size=p.getFile_size();
    }

    void setName_extension(string value){
        name_extension=value;
    }

    string getName_extension(){
        return name_extension;
    }

    void setFile_attribute(unsigned char value){
        file_attribute=value;
    }

    unsigned char getFile_attribute(){
        return file_attribute;
    }

    void setTenths_of_second(unsigned char value){
        tenths_of_second=value;
    }

    unsigned char getTenths_of_second(){
        return tenths_of_second;
    }

    void setCreation_time(unsigned short int value){
        creation_time=value;
    }

    unsigned short int getCreation_time(){
        return creation_time;
    }

    void setCreation_date(unsigned short int value){
        creation_date=value;
    }

    unsigned short int getCreation_date(){
        return creation_date;
    }

    void setLast_access_date(unsigned short int value){
        last_access_date=value;
    }

    unsigned short int getLast_access_date(){
        return last_access_date;
    }

    void setFirst_cluster_high(unsigned short int value){
        first_cluster_high=value;
    }

    unsigned short int getFirst_cluster_high(){
        return first_cluster_high;
    }

    void setLast_modification_time(unsigned short int value){
        last_modification_time=value;
    }

    unsigned short int getLast_modification_time(){
        return last_modification_time;
    }

    void setLast_modification_date(unsigned short int value){
        last_modification_date=value;
    }

    unsigned short int getLast_modification_date(){
        return last_modification_date;
    }

    void setFirst_cluster_low(unsigned short int value){
        first_cluster_low=value;
    }

    unsigned short int getFirst_cluster_low(){
        return first_cluster_low;
    }

    void setFile_size(unsigned int value){
        file_size=value;
    }

    unsigned int getFile_size(){
        return file_size;
    }

};

#endif // ROOTENTRY_H_INCLUDED
