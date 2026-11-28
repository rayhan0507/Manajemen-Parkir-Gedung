#ifndef AREA_PARKIR_H
#define AREA_PARKIR_H

#include <iostream>
#include <string>
#include "kendaraan.h"
using namespace std;
typedef struct areaParkir *adrParkir;

struct parkir {
    int kodeArea;
    int lantai;
    string jenisKendaraan;
    int nomorTiket;
    int tarif;
};

struct areaParkir {
    parkir info;
    adrParkir next;
    adrParkir prev;
    adrKendaraan firstKendaraan;
};

struct listParkir {
    adrParkir first;
    adrParkir last;
};

void createListParkir(listParkir &L);
adrParkir allocateParkir(parkir data);
void displayParent(listParkir L);
adrParkir searchParkir(listParkir L, int kodeArea);
int sisaSlotArea(listParkir L);
int areaPalingTerisi(listParkir L);
int totalPendapatanParkir(listParkir L);

void insertKendaraanToArea(adrParkir &P, adrKendaraan K);
void deleteKendaraanFromArea(adrParkir &P, adrKendaraan &K);
adrKendaraan findKendaraanArea(adrParkir P, string platNomor);
int jumlahKendaraanArea(adrParkir P);

#endif
