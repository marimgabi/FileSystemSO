#ifndef BOOTRECORD_H_INCLUDED
#define BOOTRECORD_H_INCLUDED

using namespace std;

class BootRecord{
    unsigned short int bytes_per_sector;
    unsigned char sectors_per_cluster;
    unsigned short int reserved_sectors;
    unsigned short int max_root_entries;
    unsigned int total_sectors_number;
    unsigned short int bitmap_number_sectors;
    unsigned char formatting_state;

public:
    BootRecord();
    BootRecord(int number_sectors);
    void setBytes_per_sector(unsigned short int _bytes);
    unsigned short int getBytes_per_sector();
    void setSectors_per_cluster(unsigned char _sector);
    unsigned char getSectors_per_cluster();
    void setReserved_sectors(unsigned short int _bytes);
    unsigned short int getReserved_sectors();
    void setMax_root_entries(unsigned short int _max);
    unsigned short int getMax_root_entries();
    void setTotal_sectors_number(unsigned int _total);
    unsigned int getTotal_sectors_number();
    void setBitmap_number_sectors(unsigned short int _number_sectors);
    unsigned short int getBitmap_number_sectors();
    void setFormatting_state(unsigned char _state);
    unsigned char getFormatting_state();

    BootRecord::BootRecord(int number_sectors){

    }

     BootRecord::BootRecord(){

    }

    void BootRecord::setFormatting_state(unsigned char _state){

    }

    unsigned short int BootRecord::getBitmap_number_sectors(){

    }

    void BootRecord::setBitmap_number_sectors(unsigned short int _number_sectors){

    }

    unsigned int BootRecord::getTotal_sectors_number(){

    }

    void BootRecord::setTotal_sectors_number(unsigned int _total){

    }

    unsigned short int BootRecord::getMax_root_entries(){

    }

    void BootRecord::setMax_root_entries(unsigned short int _max){

    }

    unsigned short int BootRecord::getReserved_sectors(){

    }

    void BootRecord::setReserved_sectors(unsigned short int _bytes){

    }

    unsigned char BootRecord::getSectors_per_cluster(){

    }

    void BootRecord::setSectors_per_cluster(unsigned char _sector){

    }

    unsigned short int BootRecord::getBytes_per_sector(){

    }

    void BootRecord::setBytes_per_sector(unsigned short int _bytes){

    }

    unsigned char BootRecord::getFormatting_state(){

    }




#endif // BOOTRECORD_H_INCLUDED
