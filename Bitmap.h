#ifndef BITMAP_H_INCLUDED
#define BITMAP_H_INCLUDED
#include <vector>

///using namespace std;

class Bitmap{
    vector<char> bitmap;
public:

Bitmap(){

}

Bitmap(unsigned int number_total_sectors, unsigned short int bitmap_number_sectors){
    unsigned int teste;
    teste = 1;
    teste << 3;
    cout << teste;
}

void fillSector(int num_sector){

}

void freeSector(int num_sector){

}

};
#endif // BITMAP_H_INCLUDED

