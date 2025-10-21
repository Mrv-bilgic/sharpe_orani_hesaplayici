//
//  main.c
//  algoritma2508
//
//  Created by Merve Bilgiç on 17.10.2025.
//
// Sharpe Orani Hesaplayici Programi

   // Değişken tanımlamaları:
   // getiri  → yatırımın getirisi (%)
   // risksiz → risksiz faiz oranı (%)
   // risk    → portföyün standart sapması (%)
   // sharpe  → Sharpe oranı sonucu
#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
   
    // Ondalıklı sayılar tutmak için double türünde değişkenler tanımlanıyor
    double getiri, risksiz, risk, sharpe;

    printf("=== Sharpe Orani Hesaplayici ===\n\n");  // Program başlığı ekrana yazdırılır

    // --- Kullanıcıdan yatırımın beklenen getirisini alıyoruz ---
    printf("Yatirimin getirisini (%%) giriniz: ");
    while (scanf("%lf", &getiri) != 1) {  // Sayı girilmezse hata verir
        printf("❌ Hatali giris! Lutfen sadece sayi giriniz: ");
        while (getchar() != '\n'); // Hatalı girişleri temizler
    }

    // --- Kullanıcıdan risksiz faiz oranını alıyoruz ---
    printf("Risksiz faiz oranini (%%) giriniz: ");
    while (scanf("%lf", &risksiz) != 1) {
        printf("❌ Hatali giris! Lutfen sadece sayi giriniz: ");
        while (getchar() != '\n');
    }

    // --- Kullanıcıdan portföyün standart sapmasını (yani riskini) alıyoruz ---
    printf("Portfoyun standart sapmasini (%%) giriniz: ");
    while (scanf("%lf", &risk) != 1 || risk == 0) {  // risk = 0 olamaz çünkü sıfıra bölünemez
        if (risk == 0)
            printf("❌ Standart sapma sifir olamaz. ");
        else
            printf("❌ Hatali giris! Lutfen sadece sayi giriniz: ");
        while (getchar() != '\n');
    }

    // --- Sharpe oranı formülü ---
    // (getiri - risksiz faiz oranı) / risk
    sharpe = (getiri - risksiz) / risk;

    // --- Hesaplanan sonucu ekrana yazdırıyoruz ---
    printf("Sharpe orani: %.2lf\n", sharpe);

    // --- Sharpe oranına göre yatırımın risk-getiri performansını yorumluyoruz ---
    if (sharpe < 1)
        printf("Bu oran dusuk kabul edilir.\n");
    else if (sharpe < 2)
        printf("Bu oran iyi kabul edilir.\n");
    else if (sharpe < 3)
        printf("Bu oran cok iyi kabul edilir.\n");
    else
        printf("Bu oran mukemmel kabul edilir.\n");
 


    return EXIT_SUCCESS;
}
