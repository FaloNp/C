#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>



struct osoba {
   char imie[256];
   char nazwisko[256];
   int indeks;
};

void wyswietlOsobe(const struct osoba *os) {
   printf("Imie: %s\n", os->imie);
   printf("Nazwisko: %s\n", os->nazwisko);
   printf("Indeks: %d\n", os->indeks);
}
int main(void){
    struct osoba mojeDane = {"Jan", "Kowalski", 12345};
    struct osoba przyjaciel = {"Maks","Nazwi",10};
    wyswietlOsobe(&mojeDane);
    wyswietlOsobe(&przyjaciel);

    return 0;
}

//Zadanie 2









/*










*/