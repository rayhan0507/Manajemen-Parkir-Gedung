#include <iostream>
#include <header/area-parkir.h>
#include <header/kendaraan.h>

using namespace std;

void createListParkir(listParkir &L) {
    L.first = nullptr;
    L.last = nullptr;
}

adrParkir allocateParkir(parkir data) {
    adrParkir P = new areaParkir;
    P->info = data;
    P->next = nullptr;
    P->prev = nullptr;
    P->firstKendaraan = nullptr;
    return P;
}