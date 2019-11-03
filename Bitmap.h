#ifndef BITMAP_H_INCLUDED
#define BITMAP_H_INCLUDED
#include <vector>

///using namespace std;

class Bitmap{
    vector<unsigned char> bitmap;
    unsigned int number_sectors;
public:

Bitmap(){

}

Bitmap(unsigned int number_total_sectors, unsigned short int bitmap_number_sectors, unsigned short int reserved_sectors){
    unsigned int bytes_validos;
    bytes_validos = ceil((double)number_total_sectors/8);
    int bits_escritos;
    number_sectors=number_total_sectors;

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

vector<unsigned char> getBitmap(){
    return bitmap;
}

void fillSector(unsigned int num_sector){
    unsigned int byte_to_change;
    unsigned char mascara;
    byte_to_change=num_sector/8;
    mascara=1;
    mascara<<=num_sector%8;
    bitmap[byte_to_change]=bitmap[byte_to_change]|mascara;
}

void freeSector(unsigned int num_sector){
    unsigned int byte_to_change;
    unsigned char mascara;

    byte_to_change=num_sector/8;
    bitmap[byte_to_change] = bitmap[byte_to_change] & (~(1<<num_sector%8));

}

bool isFree(unsigned int num_sector){
    /// & com 1 no bit desejado
    unsigned int byte_to_change;
    unsigned char mascara;

    byte_to_change=num_sector/8;
    mascara=1;
    mascara<<=num_sector%8;
    if((bitmap[byte_to_change]&mascara)==0){
        return true;
    }else{
        return false;
    }
}

unsigned int findFreeSectors(unsigned int quantidade){
    unsigned int inicio=-1;
    int cont=0,i=0;

    while(cont<quantidade){
        if(isFree(i)){
            cont++;
        }else{
            cont=0;
        }
        i++;
    }
    inicio=i-quantidade;
    return inicio;
}

};
#endif // BITMAP_H_INCLUDED

