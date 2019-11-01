#ifndef BITMAP_H_INCLUDED
#define BITMAP_H_INCLUDED
#include <vector>

///using namespace std;

class Bitmap{
    vector<unsigned char> bitmap;
public:

Bitmap(){

}

Bitmap(unsigned int number_total_sectors, unsigned short int bitmap_number_sectors, unsigned short int reserved_sectors){
    unsigned int bytes_validos;
    bytes_validos = ceil((double)number_total_sectors/8);
    int bits_escritos;

    ///preenche td com 0
    for(int i=0;i<bitmap_number_sectors*512;i++){
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
    ///Preenche os bits relativos a setores não existentes
    cont=number_total_sectors/8;
    for(int i=number_total_sectors%8;i<8;i++){
        mascara=1;
        mascara<<=i;
        bitmap[cont]=bitmap[cont]|mascara;
    }
    for(int i=cont+1;i<bitmap_number_sectors*512;i++){
        bitmap[i]=0xff;
    }

}

void fillSector(int num_sector){

}

void freeSector(int num_sector){

}

};
#endif // BITMAP_H_INCLUDED

