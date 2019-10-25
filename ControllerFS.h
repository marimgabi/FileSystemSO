#ifndef CONTROLLERFS_H_INCLUDED
#define CONTROLLERFS_H_INCLUDED
#include <sstream>
#include <stdio.h>

#pragma pack(1)
typedef struct bootRecord{
    unsigned short int bytes_per_sector;
    unsigned char sectors_per_cluster;
    unsigned short int reserved_sectors;
    unsigned short int max_root_entries;
    unsigned int total_sectors_number;
    unsigned short int bitmap_number_sectors;
    unsigned char formatting_state;
    unsigned char fillingVoid[498];

};

///using namespace std;

class ControllerFS{
    SHINee *shinee;
    string path;
public:

    ControllerFS(){

    }

    void FunctionCaller(string command){
        if(command.find("new format") != string::npos){
            string arr[4];
            int i = 0;
            stringstream ssin(command);
            while (ssin.good() && i < command.size()){
                ssin >> arr[i];
                ++i;
            }
            unsigned long ul = std::stoul (arr[3],nullptr,10);
            path = arr[2];
            if(ul>268419072){
                cout << "O numero maximo de setores suportado e de 268419072" << endl;
                return;
            }else{
                shinee = new SHINee(ul);
                shinee->getBoot_record()->setFormatting_state(0xFF);
                gravaTudo();
            }

        }else if(command.find("open") != string::npos){

        }else if(command.find("help") != string::npos){
            cout << "Para formatar:"
            << "'new format caminho_absoluto numero_de_setores'" << endl << endl;
            cout << "Para abrir arquivo/dispositivo:"
            << "'open caminho_absoluto'" << endl << endl;

            cout << "Para sair: 'exit'" << endl;

        }else{
            cout << "Comando errado";
        }

    }

    void gravaTudo(){
        FILE *arq;
        const char * c = path.c_str();
        arq = fopen(c, "wb");
        if (arq == NULL){
            cout << "Problemas na CRIACAO do arquivo";
            return;
        }

        ///Cria struct para gravar
        struct bootRecord boot_record;
        preencheBootRecord(boot_record);

        ///Grava informações do boot record
        ///fseek(arq, 0, SEEK_SET);
        fwrite(&boot_record, sizeof(bootRecord), 1, arq);

        fclose (arq);
    }

    void preencheBootRecord(bootRecord &boot){
        boot.bytes_per_sector = shinee->getBoot_record()->getBytes_per_sector();
        boot.sectors_per_cluster = shinee->getBoot_record()->getSectors_per_cluster();
        boot.reserved_sectors = shinee->getBoot_record()->getReserved_sectors();
        boot.max_root_entries = shinee->getBoot_record()->getMax_root_entries();
        boot.total_sectors_number = shinee->getBoot_record()->getTotal_sectors_number();
        boot.bitmap_number_sectors = shinee->getBoot_record()->getBitmap_number_sectors();
        boot.formatting_state = 0xFF;

        for(int i=0;i<498;i++){
            boot.fillingVoid[i] = 0x00;
        }

    }

};
#endif // CONTROLLERFS_H_INCLUDED
