#include <stdio.h>
// 1'den klavyeden girilen üst limit değerine kadar olan sayılar toplanır,sonuç ekrana yazdırılır   

int main() 

{
 
  int i;
  int toplam = 0; // toplam'ı 0'dan başlatmazsan sonuç çöp değer(garbage value) olur
  int UstLimit;
  
  printf("ust limiti girin: ");
  scanf("%d",&UstLimit);
  
  for(i = 1 ; i <= UstLimit ; i++)
  {
   toplam += i;
  }
  
  printf("toplam: %d",toplam);
 
  return 0;

}