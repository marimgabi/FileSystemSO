#ifndef BOOTRECORD_H_INCLUDED
#define BOOTRECORD_H_INCLUDED
#include <math.h>

using namespace std;

class BootRecord{
    unsigned short int bytes_per_sector;
    unsigned char sectors_per_cluster;
    unsigned int reserved_sectors;
    unsigned short int max_root_entries;
    unsigned int total_sectors_number;
    unsigned int bitmap_number_sectors;
    unsigned char formatting_state;

public:

    BootRecord(unsigned int number_sectors){
        bytes_per_sector = 512;
        sectors_per_cluster = 1;
        max_root_entries = 32;
        total_sectors_number = number_sectors;

        long double aux = ceil(((long double)total_sectors_number/8)/512);
        bitmap_number_sectors = (unsigned int ) aux;

        reserved_sectors = 1+bitmap_number_sectors+(max_root_entries/16);

    }

    BootRecord(){

    }

    void setFormatting_state(unsigned char _state){

    }

    unsigned short int getBitmap_number_sectors(){
        return bitmap_number_sectors;
    }

    void setBitmap_number_sectors(unsigned short int _number_sectors){

    }

    unsigned int getTotal_sectors_number(){
        return total_sectors_number;
    }

    void setTotal_sectors_number(unsigned int _total){

    }

    unsigned short int getMax_root_entries(){
        return max_root_entries;
    }

    void setMax_root_entries(unsigned short int _max){

    }

    unsigned short int getReserved_sectors(){
        return reserved_sectors;
    }

    void setReserved_sectors(unsigned short int _bytes){

    }

    unsigned char getSectors_per_cluster(){
        return sectors_per_cluster;
    }

    void setSectors_per_cluster(unsigned char _sector){

    }

    unsigned short int getBytes_per_sector(){
        return bytes_per_sector;
    }

    void setBytes_per_sector(unsigned short int _bytes){

    }

    unsigned char getFormatting_state(){
        return formatting_state;
    }

};

#endif // BOOTRECORD_H_INCLUDED
