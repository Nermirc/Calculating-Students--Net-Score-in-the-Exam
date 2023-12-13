#include <stdio.h>
#include <stdlib.h>

struct ogrenciTip {
    int no;
    char cevap[10];
};

struct sonuctip {
    int no;
    int not;
};

int main() {
    struct ogrenciTip ogrenci[30];
    struct sonuctip sonuc[30];
    char anahtar[10], satir;
    int i, j;
    int dogru, yanlis;

    printf("Lutfen cevap anahtarini giriniz.\n");

    for (i = 0; i < 10; i++) {
        scanf(" %c", &anahtar[i]);
    }

    printf("Ogrenci bilgilerini giriniz.\n");
    for (j = 0; j < 30; j++) {
        printf("Ogrenci no:\n");
        scanf("%d", &ogrenci[j].no);
        getchar(); // Satýr atlamak için

        dogru = yanlis = 0;

        for (i = 0; i < 10; i++) {
            printf("Cevap %d:\n", i + 1);
            scanf(" %c", &ogrenci[j].cevap[i]);
            if (anahtar[i] == ogrenci[j].cevap[i]) {
                dogru++;
            } else if (ogrenci[j].cevap[i] != '\0') {
                yanlis++;
            }
        }

        sonuc[j].no = ogrenci[j].no;
        printf("Dogru : %d\t Yanlis : %d\n", dogru, yanlis);
        sonuc[j].not = dogru - (yanlis / 4);
    }

    for (j = 0; j < 30; j++) {
        printf("Ogrenci no :%d Not:%d\n", sonuc[j].no, sonuc[j].not);
    }

    return 0;
}
