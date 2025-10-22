//
//  main.c
//  algoritma2508
//
//  Created by Merve Bilgiç on 17.10.2025.
//
//  Sharpe Orani Hesaplayici Programi
//
//  Bu program, kullanicidan yatirimin getirisi (%), risksiz faiz orani (%)
//  ve portfoyun standart sapmasini alarak Sharpe oranini hesaplar.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char giris[50];
    double getiri, risksiz, risk, sharpe;

    printf("=== Sharpe Orani Hesaplayici ===\n\n");

    // --- Getiri girişi ---
    while (1) {
        printf("Yatirimin getirisini (%%) giriniz: ");
        fgets(giris, sizeof(giris), stdin);

        if (giris[0] == '\n') {
            printf("❌ Bos giris yapilamaz! Lutfen bir deger giriniz.\n");
            continue;
        }

        if (sscanf(giris, "%lf", &getiri) != 1) {
            printf("❌ Hatali giris! Lutfen sadece sayi giriniz.\n");
            continue;
        }
        break;
    }

    // --- Risksiz faiz oranı girişi ---
    while (1) {
        printf("Risksiz faiz oranini (%%) giriniz: ");
        fgets(giris, sizeof(giris), stdin);

        if (giris[0] == '\n') {
            printf("❌ Bos giris yapilamaz! Lutfen bir deger giriniz.\n");
            continue;
        }

        if (sscanf(giris, "%lf", &risksiz) != 1) {
            printf("❌ Hatali giris! Lutfen sadece sayi giriniz.\n");
            continue;
        }
        break;
    }

    // --- Risk (standart sapma) girişi ---
    while (1) {
        printf("Portfoyun standart sapmasini (%%) giriniz: ");
        fgets(giris, sizeof(giris), stdin);

        if (giris[0] == '\n') {
            printf("❌ Bos giris yapilamaz! Lutfen bir deger giriniz.\n");
            continue;
        }

        if (sscanf(giris, "%lf", &risk) != 1) {
            printf("❌ Hatali giris! Lutfen sadece sayi giriniz.\n");
            continue;
        }

        if (risk == 0) {
            printf("❌ Standart sapma sifir olamaz. Lutfen farkli bir deger giriniz.\n");
            continue;
        }
        break;
    }

    // --- Sharpe oranı hesaplama ---
    sharpe = (getiri - risksiz) / risk;

    // --- Sonuçları yazdırma ---
    printf("\n📈 Sharpe orani: %.2lf\n", sharpe);

    if (sharpe < 1)
        printf("Yorum: Bu oran dusuk kabul edilir.\n");
    else if (sharpe < 2)
        printf("Yorum: Bu oran iyi kabul edilir.\n");
    else if (sharpe < 3)
        printf("Yorum: Bu oran cok iyi kabul edilir.\n");
    else
        printf("Yorum: Bu oran mukemmel kabul edilir.\n");

    return EXIT_SUCCESS;
}
