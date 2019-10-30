#ifndef BITMAP_H_INCLUDED
#define BITMAP_H_INCLUDED
#include <vector>

///using namespace std;

class Bitmap{
    vector<char> bitmap;
public:

Bitmap(){

}

Bitmap(unsigned int number_total_sectors, unsigned short int bitmap_number_sectors, unsigned short int reserved_sectors){
    unsigned int bytes_validos;
    bytes_validos = ceil((double)number_total_sectors/8);
    int bits_escritos;

    ///preenche td com 0
    for(int i=0;i<bytes_validos;i++){
        bitmap.push_back(0x00);
    }
    unsigned char mascara;
    bits_escritos = 0;

    ///Setores reservados (inclusive bitmap)
    int cont=0;
    for(int i=0;i<reserved_sectors;i++){
        mascara=1;
        mascara<<=(i%8);
        bitmap[cont]=bitmap[cont]|mascara;
        if(i%8==7){
            cont++;
        }
    }


}

void fillSector(int num_sector){

}

void freeSector(int num_sector){

}

};
#endif // BITMAP_H_INCLUDED

