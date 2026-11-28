#include "header/kendaraan.h"

void createListKendaraan(listKendaraan &L) {
    L.first = NULL;
    L.last = NULL;
};

adrKendaraan alokasiKendaraan(infoKendaraan data) {
    adrKendaraan P = new kendaraan;
    P->info = data;
    P->next = NULL;
    P->prev = NULL;
    return P;
};

void insertLastKendaraan(listKendaraan &L, adrKendaraan P) {
    if (L.first == NULL) {
        L.first = P;
        L.last = P;
    } else {
        P->prev = L.last;
        L.last->next = P;
        L.last = P;
    };
};

void deleteFirstKendaraan(listKendaraan &L, adrKendaraan &P) {
    if (L.first == NULL) {
        P = NULL;
    } else if (L.first == L.last) {
        P = L.first;
        L.first = NULL;
        L.last = NULL;
    } else {
        P = L.first;
        L.first = L.first->next;
        L.first->prev = NULL;
        P->next = NULL;
    };
};

void deleteLastKendaraan(listKendaraan &L, adrKendaraan &P) {
    if (L.first == NULL) {
        P = NULL;
    } else if (L.first == L.last) {
        P = L.last;
        L.first = NULL;
        L.last = NULL;
    } else {
        P = L.last;
        L.last = L.last->prev;
        L.last->next = NULL;
        P->prev = NULL;
    };
};

void deleteAfterKendaraan(listKendaraan &L, adrKendaraan Prec, adrKendaraan &P) {
    if (Prec == NULL || Prec->next == NULL) {
        P = NULL;
    } else if (Prec->next == L.last) {
        deleteLastKendaraan(L, P);
    } else {
        P = Prec->next;
        Prec->next = P->next;
        P->next->prev = Prec;
        P->next = NULL;
        P->prev = NULL;
    };
};

adrKendaraan findKendaraan(listKendaraan L, string platNomor) {
    adrKendaraan P = L.first;
    adrKendaraan ketemu = NULL;

    while (P != NULL && ketemu == NULL) {
        if (P->info.platNomor == platNomor) {
            ketemu = P;
        };
        P = P->next;
    };

    return ketemu;
};

void showKendaraan(listKendaraan L) {
    adrKendaraan P = L.first;

    while (P != NULL) {
        cout << "Plat Nomor : " << P->info.platNomor << endl;
        cout << "Jenis      : " << P->info.jenis << endl;
        cout << "Jam Masuk : " << P->info.jamMasuk << endl;
        cout << "No. Tiket  : " << P->info.nomorTiket << endl;
        cout << "------------------------" << endl;
        P = P->next;
    };
};
