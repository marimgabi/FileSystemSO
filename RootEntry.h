#ifndef ROOTENTRY_H_INCLUDED
#define ROOTENTRY_H_INCLUDED

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

    unsigned char getCreation_time(){
        return creation_time;
    }

    void setLast_access_date(unsigned short int value){
        last_access_date=value;
    }

    unsigned char getLast_access_date(){
        return last_access_date;
    }

    void setFirst_cluster_high(unsigned short int value){
        first_cluster_high=value;
    }

    unsigned char getFirst_cluster_high(){
        return first_cluster_high;
    }

    void setLast_modification_time(unsigned short int value){
        last_modification_time=value;
    }

    unsigned char getLast_modification_time(){
        return last_modification_time;
    }

    void setLast_modification_date(unsigned short int value){
        last_modification_date=value;
    }

    unsigned char getLast_modification_date(){
        return last_modification_date;
    }

    void setFirst_cluster_low(unsigned short int value){
        first_cluster_low=value;
    }

    unsigned char getFirst_cluster_low(){
        return first_cluster_low;
    }

};

#endif // ROOTENTRY_H_INCLUDED
