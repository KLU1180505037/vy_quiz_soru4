#include <stdio.h>

// Öðrenci (struct) 
struct Ogrenci {
    char ad[50];
    char soyad[50];
    int no;
    char adres[100];
};

int main() {
    struct Ogrenci ogrenciler[5];

    // öðrenci bilgilerini alma
    for(int i = 0; i < 5; i++) {
        printf("Ogrenci #%d bilgileri:\n", i+1);
        printf("Ad: ");
        scanf("%s", ogrenciler[i].ad);
        printf("Soyad: ");
        scanf("%s", ogrenciler[i].soyad);
        printf("No: ");
        scanf("%d", &ogrenciler[i].no);
        printf("Adres: ");
        scanf("%s", ogrenciler[i].adres);
        printf("\n"); 
    }

    // Öðrenci bilgilerini ekrana yazdýrma
    printf("\nGirilen ogrenci bilgileri:\n");
    printf("Ad                 Soyad               No        Adres\n");
    for(int i = 0; i < 5; i++) {
        printf("%-20s%-20s%-10d%-50s\n", ogrenciler[i].ad, ogrenciler[i].soyad, ogrenciler[i].no, ogrenciler[i].adres);
    }

    return 0;
}

