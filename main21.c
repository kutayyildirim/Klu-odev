#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


struct OgrenciBilgileri{ // ��renci bilgilerini (ad, soyad, adres ve numara) tutan bir struct olu�turduk.

char ad[100];
char soyad[100];
char adres[100];
int numara;

};






int main(int argc, char *argv[]) {
	
int i;
struct OgrenciBilgileri Ogrenciler[100]={{"Kutay", "Yildirim","Canakkale/Merkez", 1220505070}, {"Eda", "Deniz", "Kirklareli/Luleburgaz", 1220505093}, {"Ibrahim", "Imam", "Tekirdag/Corlu", 1220505083},{"Tugba", "Kisa", "Ankara/Etimesgut", 1220505101},{"Furkan", "Yilmaz", "Aydin/Kusadasi", 1220505078}};
// Olu�turdu�umuz struct yap�s�n� bir dizi olarak tan�mlay�p ��renci bilgilerini yazd�k.
	for(i==0;i<5;i++){ // Tek tek yazmak yerine kolayl�k olmas� a��s�ndan for d�ng�s�nden yararland�m. 
	
	printf("%d. Ogrencinin ismi:%s\n",i+1, Ogrenciler[i].ad);
	printf("%d. Ogrencinin soyadi:%s\n",i+1, Ogrenciler[i].soyad);
	printf("%d. Ogrencinin adresi:%s\n",i+1, Ogrenciler[i].adres);
	printf("%d. Ogrencinin numarasi:%d\n",i+1, Ogrenciler[i].numara);
	printf("\n");
}
	
	
	
	
	return 0;
}
