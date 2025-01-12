#include <stdio.h>

int main() {
    int n; // Matris boyutu
    int i, j; // Döngü değişkenleri
    int choice; // Kullanıcı seçim

    // Kullanıcıdan matris boyutunu al
    printf("Matris boyutunu giriniz (nxn) birden fazla sayida son sayi ele alinir: ");
    scanf("%d", &n);

    // Matris boyutunu kontrol et
    if (n <= 0) {
        printf("Matris boyutu pozitif bir tam sayi olmalidir!\n");
        return 1; // Programı sonlandır
    }

    // Matris tanımlama
    int matris[n][n]; // Orijinal matris
    int sonuc[n][n];  // Döndürülen matris

    // Kullanıcıdan matris elemanlarını al
    printf("Matris elemanlarini giriniz:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matris[i][j]);
        }
    }

    // Orijinal matrisi yazdır
    printf("Orijinal Matris:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", matris[i][j]);
        }
        printf("\n");
    }

    // Kullanıcıdan matris döndürme yönü
    printf("Matrisin yonunu seciniz:\n");
    printf("0 - Sola Dondur \n");
    printf("1 - Saga Dondur \n");
    printf("Seciminiz: ");
    scanf("%d", &choice);

    // Kullanıcı seçimine göre işlem yap
    switch (choice) {
        case 0: // Sola döndürme
            for (i = 0; i < n; i++) {
                for (j = 0; j < n; j++) {
                    sonuc[n - j - 1][i] = matris[i][j];
                }
            }
            printf("Sola Dondurulmus Matris:\n");
            for (i = 0; i < n; i++) {
                for (j = 0; j < n; j++) {
                    printf("%d\t", sonuc[i][j]);
                }
                printf("\n");
            }
            break;

        case 1: // Sağa döndürme
            for (i = 0; i < n; i++) {
                for (j = 0; j < n; j++) {
                    sonuc[j][n - i - 1] = matris[i][j];
                }
            }
            printf("Saga Dondurulmus Matris:\n");
            for (i = 0; i < n; i++) {
                for (j = 0; j < n; j++) {
                    printf("%d\t", sonuc[i][j]);
                }
                printf("\n");
            }
            break;

        default: // Geçersiz seçim
            printf("Gecersiz secim yaptiniz!\n");
            break;
    }

    return 0;
}
