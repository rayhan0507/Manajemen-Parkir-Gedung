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

void createListParkir(listParkir &L);
adrParkir allocateParkir(int P);
void displayParent(listParkir L);
void insertFirst(listParkir &L, adrParkir P);
void insertLast(listParkir &L, adrParkir P);
void insertAfter(listParkir &L, adrParkir pred, adrParkir P);
void deleteFirst(listParkir &L, adrParkir P);
void deleteLast(listParkir &L, adrParkir P);
void deleteAfter(listParkir &L, adrParkir pred, adrParkir P);
void searchParkir(listParkir L);
int sisaSlotArea(listParkir L);
int areaPalingTerisi(listParkir L);
int totalPendapatanParkir(listParkir L);

