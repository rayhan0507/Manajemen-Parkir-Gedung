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
