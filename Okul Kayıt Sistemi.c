#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 50

struct ogrenci{
	char adi[30];
	char soyadi[30];
	int TCKN;
	int numarasi;
	int sinifi;
	char memleketi[30];
	char baba_adi[30];
	char cinsiyet[30];
	char sube[10];
	};

struct ogrenci bilgi[50];
int ogrenci_sayisi;

void ogrenci_bilgileri(){
	int i;
	printf("maximum ogrenci sayisi: %d\n",max);
	printf("ogrenci sayisini giriniz:");
	scanf("%d",&ogrenci_sayisi);
	
	if(ogrenci_sayisi>50){
		printf("maximum ogrenci sayisini astiniz:");
		showMenu();
	}
	
	for(i=0;i<ogrenci_sayisi;i++){
	printf("%d. ogrencinin bilgilerini giriniz:\n",i+1);
	printf("adi:");
	scanf("%s",&bilgi[i].adi);
	printf("soyadi:");
	scanf("%s",&bilgi[i].soyadi);
	printf("TC kimlik numarasi:");
	scanf("%d",&bilgi[i].TCKN);
	printf("numarasi:");
	scanf("%d",&bilgi[i].numarasi);
	printf("sinifi:");
	scanf("%d",&bilgi[i].sinifi);
	printf("memleketi:");
	scanf("%s",&bilgi[i].memleketi);
	printf("baba adi:");
	scanf("%s",&bilgi[i].baba_adi);
	printf("cinsiyeti:");
	scanf("%s",&bilgi[i].cinsiyet);
	printf("subesi:");
	scanf("%s",&bilgi[i].sube);
	}
	showMenu();
}

void ogrenci_bulma(){
	int numara,i;
	printf("aranan ogrencinin TC kimlik numarasini giriniz:");
	scanf("%d",&numara);
	
	for(i=0;i<ogrenci_sayisi;i++){
		if(bilgi[i].TCKN==numara){
	printf("adi: %s\n",bilgi[i].adi);
	printf("soyadi: %s\n",bilgi[i].soyadi);
	printf("numarasi: %d\n",bilgi[i].numarasi);
	printf("sinifi: %d\n",bilgi[i].sinifi);
	printf("memleketi: %s\n",bilgi[i].memleketi);
	printf("baba adi: %s\n",bilgi[i].baba_adi);
	printf("cinsiyeti: %s\n",bilgi[i].cinsiyet);
	printf("subesi: %s\n",bilgi[i].sube);
			}
	}
	showMenu();
}

void ogrenci_ekleme(){
	if(ogrenci_sayisi<max){
		printf("adi:");
	scanf("%s",&bilgi[ogrenci_sayisi].adi);
	printf("soyadi:");
	scanf("%s",&bilgi[ogrenci_sayisi].soyadi);
	printf("TC kimlik numarasi:");
	scanf("%d",&bilgi[ogrenci_sayisi].TCKN);
	printf("numarasi:");
	scanf("%d",&bilgi[ogrenci_sayisi].numarasi);
	printf("sinifi:");
	scanf("%d",&bilgi[ogrenci_sayisi].sinifi);
	printf("memleketi:");
	scanf("%s",&bilgi[ogrenci_sayisi].memleketi);
	printf("baba adi:");
	scanf("%s",&bilgi[ogrenci_sayisi].baba_adi);
	printf("cinsiyeti:");
	scanf("%s",&bilgi[ogrenci_sayisi].cinsiyet);
	printf("subesi:");
	scanf("%s",&bilgi[ogrenci_sayisi].sube);
	
	ogrenci_sayisi++;
	printf("\n");
	}
	else {
		printf("maximum ogrenci sayisini astiniz:\n");
	}
	showMenu();
}

void ogrenci_silme(){
	int TCKN,i,j;
	printf("silmek istediginiz kisinin TCKN giriniz:");
	scanf("%d",&TCKN);
	
	for(i=0;i<ogrenci_sayisi;i++){
		if(bilgi[i].TCKN == TCKN){
		for(j=i;j<ogrenci_sayisi-1;j++){
			bilgi[j]=bilgi[j+1];
		}
			ogrenci_sayisi--;
			printf("silme islemi basarili sekilde gerceklesti:");
			break;
		}
	}
	showMenu();
}

void toplam_ogrenci(){
	printf("toplam ogrenci sayisi: %d\n",ogrenci_sayisi);
	showMenu();
}

void showMenu(){
	int input;
	
	printf("\n\n ***Ders Takip Sistemi*** \n\n");
	printf("ogrenci bilgileri icin 1 basiniz:\n");
	printf("ogrenci bilgilerine ulasmak icin 2 basiniz:\n");
	printf("yeni ogrenci eklemek icin 3 basiniz:\n");
	printf("ogrenci bilgisi silmek icin 4 basiniz:\n");
	printf("toplam ogrenci sayisini gormek icin 5 basiniz:\n");
	printf("programdan cikis yapmak icin 6 basiniz:\n");
	printf("lutfen secim yapiniz: ");
	scanf("%d",&input);
	
	switch(input){
		case 1:
			ogrenci_bilgileri();
			break;
		case 2:
			ogrenci_bulma();
			break;
		case 3:
			ogrenci_ekleme();
			break;
		case 4:
			ogrenci_silme();
			break;
		case 5:
			toplam_ogrenci();
			break;
		case 6:
			printf("programdan cikis yaptiniz:");
			exit(0);
			break;
		default:
			printf("gecersiz deger girdiniz:");
			showMenu();
			break;
		}		
	}

int main(){
	
	showMenu();
	
	return 0;
}
