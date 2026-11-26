#ifndef KENDARAAN_H
#define KENDARAAN_H

#include <iostream>
#include <string>

using namespace std;

typedef struct kendaraan *adrKendaraan;

struct infoKendaraan {
    string platNomor;
    string jenis;
    int jamMasuk;
    int nomorTiket;
};

struct kendaraan {
    infoKendaraan info;
    adrKendaraan next;
    adrKendaraan prev;
};

struct listKendaraan {
    adrKendaraan first;
    adrKendaraan last;
};

void createlistKendaraan(listKendaraan &L);
adrKendaraan allocateKendaraan(infoKendaraan data);
void insertLastKendaraan(listKendaraan, adrKendaraan p);
void deleteFirstKendaraan(listKendaraan &L, adrKendaraan &p);
void deleteLastKendaraan(listKendaraan &L, adrKendaraan &p);
void deleteAfterKendaraan(listKendaraan &L, adrKendaraan prec, adrKendaraan &p);
adrKendaraan findKendaraan(listKendaraan L, string platNomor);

#endif
