#include <iostream>
#include <string>
using namespace std;
typedef struct areaParkir *adrParkir;
typedef struct kendaraan *adrKendaraan;

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
