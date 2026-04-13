/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
*   Modul                       : 01 – Overview of C Language
*   Hari dan Tanggal            : Seninn, 12 April 2026
*   Nama (NIM)                  : Aziiz Adityatama (13224070)
*   Nama File                   : soal1.c
*   Deskripsi                   : Memverifikasi data input dari peneliti
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int izin = 0;
    int suhu = 0;
    int radiasi = 0;
    int jam = 0;

    scanf("%d %d %d %d", &izin, &suhu, &radiasi, &jam);

    suhu = suhu/10;

    printf("suhu = %d\n", suhu);

    if (radiasi >= 6){
        printf("TOLAK\n");
    }
    else if(suhu >= 390){
        printf("KARANTINA\n");
    }
    else if(izin == 1 && (jam < 6 || jam > 20)){
        printf("TOLAK\n");
    }
    else if(izin == 1){
        printf("MASUK\n");
    }
    else if(izin == 2 && (radiasi <= 2 && (jam >= 8 && jam <=18))){
        printf("PEMERIKSAAN\n");
    }
    else if(izin == 2){
        printf("PEMERIKSAAN\n");
    }
    else if(izin == 3 && radiasi == 0 && suhu < 380){
        printf("MASUK\n");
    }
    else {
        printf("TOLAK\n");
    }
    return 0;
}
