#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct library{
	char book_name[20];
	char author[20];
	int pages;
	float price;
	};
	
int main(){
	struct library lib[100];
	char author[20];
	int i=0,j=0,input=0;
	
	while(input !=5){
	printf("\n\n******* Kutuphane Yonetim Sistemi *******\n\n\n");
	printf("1. kitap bilgisini ekleyiniz:\n");
	printf("2. kitap bilgileri goster:\n");
	printf("3. yazara ait tum kitaplari listele:\n");
	printf("4. kutuphanedeki toplam kitap sayisini goster:\n");
	printf("5. cikis:\n");
	
	printf("\n\n lutfen seciminizi yapiniz: ");
	scanf("%d",&input);
	if(input>5 || input<1){
		printf("cikis yaptiniz:");
		exit(0);
	}
	
	switch(input){
		case 1: // kutuphaneye kitap bilgisi ekleme
			printf("kitabin adini giriniz = ");
			scanf("%s",&lib[i].book_name);
			printf("kitabin yazarini giriniz = ");
			scanf("%s",&lib[i].author);
			printf("kitabin sayfa sayisini giriniz = ");
			scanf("%d",&lib[i].pages);
			printf("kitabin fiyatini giriniz = ");
			scanf("%f",&lib[i].price);
			
			i++;
			break;
		
		case 2: // kütüphanedeki kitap bilgilerini yazdirma
			printf("kitap bilgileri: \n");
			for(j=0;j<i;j++){
				printf("%d. kitabim\n:",j+1);
				printf("kitap ismi: %s\n",lib[j].book_name);
				printf("kitap yazari: %s\n",lib[j].author);
				printf("kitap sayfa sayisi: %d\n",lib[j].pages);
				printf("kitabin fiyati: %f\n",lib[j].price);
				printf("\n");
			}	
			break;
		
		case 3: // yazara ait kitaplari listeleme
			printf("yazari giriniz:");
			scanf("%s",&author);
			for(j=0;j<i;j++){
				if(strcmp(author,lib[j].author)==0)	
				printf("%s yazarina ait kitaplar:\n",author);
				printf("kitap ismi: %s\n",lib[j].book_name);
				printf("kitap yazari: %s\n",lib[j].author);
				printf("kitap sayfa sayisi: %d\n",lib[j].pages);
				printf("kitabin fiyati: %f\n",lib[j].price);
				printf("\n");
			}
			break;
		
		case 4: // kütüphanedeki toplam kitap sayisini gösterme
			printf("\n toplam kitap sayisi : %d",i);
			break;
		
		case 5: // çýkýs yapma durumu
			printf("cikis yaptiniz:");
			exit(0);
	}
	}
	return 0;
}




