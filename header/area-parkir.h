#include <iostream>
#include <string>
using namespace std;
typedef struct areaParkir *adrParkir;

struct parkir {
    int kodeArea;
    int lantai;
    string jenisKendaraan;
    int nomorTiket;
};

struct areaParkir {
    parkir info;
    adrParkir next;
    adrParkir prev;
};

struct listParkir {
    adrParkir first;
    adrParkir last;
};
