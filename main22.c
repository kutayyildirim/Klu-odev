#include <stdio.h>
#include <stdlib.h>

// 2. Yazýlan fonksiyonda T(n) Hesabý

int main(int argc, char *argv[]) {

 int i, elemanSayisi, sayilar[100], minimum; 
 
 printf("Eleman sayisini giriniz: ");
 scanf("%d", &elemanSayisi);
 
 for (i==0; i<elemanSayisi; i++){            //elemanSayisi +1 kadar çalýþýr yani n+1
 printf("%d. Sayiyi giriniz: ", i+1);
 scanf("%d", &sayilar[i]);
 printf("\n");
 }
 
 minimum=sayilar[0]; // 1
 
 for(i=0; i<elemanSayisi; i++){  // n+1
 if(minimum > sayilar[i]){ //Girilen her sayýyý birbiriyle karþýlaþtýracaðý için n kadar çalýþýr.
 minimum=sayilar[i]; // 1
}
 }
printf("En kucuk sayi: %d", minimum);
	return 0;
	//Toplam olarak T(n)=3n+4 þeklinde olur.
}
