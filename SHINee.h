#ifndef SHINEE_H_INCLUDED
#define SHINEE_H_INCLUDED
#include <vector>
#include "BootRecord.h"
#include "Bitmap.h"
#include "Root.h"
#include "Setor.h"

class SHINee{
    BootRecord boot_record;
    Bitmap bitmap;
    Root root;
    vector<Setor> setores;
};

#endif // SHINEE_H_INCLUDED
