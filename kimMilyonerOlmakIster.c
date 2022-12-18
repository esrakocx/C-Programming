#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <string.h>
#include <conio.h>

struct sorular{
	char soru[500];
	char cevap[10];	
};

struct jokerler{
	char joker[100];
};

void cevap_kontrol(struct sorular *s, struct jokerler *j, int *control, int *control2, int *sayac){
	
	srand(time(NULL));
	char cevap2[5], cevap3[5], secim, secim2[5];
	int	secici = rand() % 30;
	char c1[5], c2[5];
	int i;
	
	strcpy(s[0].soru, "Hangi �nl� �niversite mezunudur?\nA-)Tarkan Teveto�lu\nB-)B�lent Ecevit\nC-)Y�lmaz Erdo�an\nD-)Kadir �nan�r\n");
	strcpy(s[1].soru, "Yedi renkten olu�an g�kku�a��n�n ortas�ndaki renk hangisidir?\nA-)Mavi\nB-)Sar�\nC-)Ye�il\nD-)K�rm�z�\n");
	strcpy(s[2].soru, "Dede Korkut'un T�rk Destanlar�'n�n �zg�n kopyalar� hangi iki kentte bulunmaktad�r?\nA-)Lizbon-Roma\nB-)Dresten-Vatikan\nC-)Londra-Budape�te\nD-)Paris-Varsova\n");
	strcpy(s[3].soru, "Her 100 y�lda 7 cm yere yakla�an Pisa Kulesi hangi y�ne do�ru e�ilmektedir?\nA-)Bat�\nB-)Kuzey\nC-)G�ney\nD-)Do�u\n");
	strcpy(s[4].soru, "T�rkiye'nin hapis cezas� alan ilk bilgisayar korsan� kimdir?\nA-)Burak �a�lar\nB-)Mahir Arabul\nC-)Tolga Bilge\nD-)Tamer �ahin\n");
	strcpy(s[5].soru, "Cebelitarik Bo�az� hangi ikisini birle�tirir?\nA-)Akdeniz Atlas Okyanusu\nB-)Atlas Okyanusu ve B�y�k Okyanus\nC-)Hazar Denizi\nD-)Sar� Deniz ve Hint Okyanusu\n");
	strcpy(s[6].soru, "Shakespeare'in hangi oyunundaki ba�karakter oyunun ilerleyen sahnelerinde �ngiltere kral� olur?\nA-)Machbet\nB-)III.Richard\nC-)Othello\nD-)Hamlet\n");
	strcpy(s[7].soru, "Al Pease, Formula 1 tarihinde, hangi sebepten dolay� yar��madan diskalifiye edilen ilk ve tek sporcudur?\nA-)Emniyet kemeri takmamak\nB-)�ok yava� gitmek\nC-)Ehliyetini evde unutmak\nD-)Ara�ta m�zik dinlemek\n");
	strcpy(s[8].soru, "333'�n 3 kat�, 333'�n 3'te birinden kac fazlad�r?\nA-)0\nB-)222\nC-)555\nD-)888\n");
	strcpy(s[9].soru, "B�y�k Britanya'daki ba�kentleri gezdim diyen biri hangi �ehre gitti�ini s�ylemi� olmaz?\nA-)Londra\nB-)Dublin\nC-)Cardiff\nD-)Edinburg\n");
	strcpy(s[10].soru, "Hangisi 'kesinlikle' anlam�na gelmez?\nA-)Katiyen\nB-)Kesinkes\nC-)Pekala\nD-)Daima");
	strcpy(s[11].soru, "'A�ustosun yar�s� yaz' �eklinde ba�layan atas�z�n�n devam� nas�ld�r?\nA-)Yar�s� g�zd�r\nB-)Yar�s� bahard�r\nC-)Yar�s� k��t�r\nD-)Yar�s� yazd�r\n");
	strcpy(s[12].soru, "Hangisi bir deyimde de ad� ge�en bir t�r g�vercindir?\nA-)Baklac� kekli�i\nB-)Yulafc� turnas�\nC-)Arpac� kumrusu\nD-)Dar�c� b�lb�l�\n");
	strcpy(s[13].soru, "Hangi �nl� �izgi karakter genellikle sar� renkli bir �apka takar?\nA-)Kirpi Sonic\nB-)H�zl� Gonzales\nC-)Road Runner\nD-)Tazmanya Canavar�\n");
	strcpy(s[14].soru, "Amerika k�tas�n�n ana kara par�as�n�n en g�neyindeyseniz hangisinde olabilirsiniz?\nA-)�mit Burnu\nB-)��neler Burnu\nC-)Baba Burnu\nD-)Boynuz Burnu\n");
	strcpy(s[15].soru, "'Ara vermeden, s�rekli olarak' anlamlar�na gelen kelimenin dogru yaz�l��� hangisidir?\nA-M�temmadiyen\nB-)M�temadiyen\nC-)M�temadiyyen\nD-)M�ttemaddiyyen\n");
	strcpy(s[16].soru, "'Dikkate �ayan' ne demektir?\nA-)De�erli\nB-)�nemsiz\nC-)Basit\nD-)�zensiz\n");
	strcpy(s[17].soru, "Hangi meyvenin 'gemre' ve 'pembegemre' ad�nda t�rleri vard�r?\nA-)Erik\nB-)Karpuz\nC-)Elma\nD-)�z�m\n");
	strcpy(s[18].soru, "Hangisi bir �e�it ac� bala verilen add�r?\nA-)Deli Bal\nB-)Mecnun Bal\nC-)A��k Bal\nD-)Divane Bal\n");
	strcpy(s[19].soru, "'Atat�rk'�n Samsun'a ��kt��� g�n' do�an bir bebek T�rkiye'de cumhuriyet ilan edildi�inde ka� ayl�kt�r?\nA-)41\nB-)43\nC-)51\nD-)53\n");
	strcpy(s[20].soru, "Hangisi atomlarda bulunan temel par�ac�klardan biri de�ildir?\nA-)Proton\nB-)N�tron\nC-)Elektron\nD-)Megatron\n");
	strcpy(s[21].soru, "ABD New York'taki �zg�rl�k Heykeli bir elinde me�ale tutarken di�er elinde ne tutar?\nA-)Anayasa Kitab�\nB-)Tabela\nC-)Terazi\nD-)Hi�bir �ey\n");
	strcpy(s[22].soru, "Ebu ��ca Muhammed bin Davud kimdir?\nA-)Timur\nB-)Alparslan\nC-)Selahaddin Eyyubi\nD-)Cengiz Han\n");
	strcpy(s[23].soru, "'Zeplin' kelimesinin s�zl�k tan�m� hangisidir?\nA-)Deniz U�a��\nB-)Hava Gemisi\nC-)Lokomotif\nD-)Kara ta��t�\n");
	strcpy(s[24].soru, "Hangi ikisi r�zgar t�rlerine verilen adlard�r?\nA-Ay kuzeyi ve ay g�neyi\nB-)G�n kuzeyi ve g�n g�neyi\nC-)Ay do�usu ve ay bat�s�\nD-)G�n do�usu ve g�n bat�s�\n");
	strcpy(s[25].soru, "Hangisi yanl�� bir kullan�md�r?\nA-)Mefru�at��\nB-)Z�ccaciyeci\nC-)Sahaf��\nD-)Manifaturac�\n");
	strcpy(s[26].soru, "Ya�ar Kemal'in 1955'te yay�nlanan '�nce Memed' adl� roman�n hikayesi nerede ge�er?\nA-)Trakya\nB-)Rumeli\nC-)�ukurova\nD-)Kafkasya\n");
	strcpy(s[27].soru, "Anorak, hangisinin bir �e�ididir?\nA-)Topuklu ayakkab�\nB-)Spor ceket\nC-)Kot pantolon\nD-)Y�n bere\n");
	strcpy(s[28].soru, "Hangisi maydanozgillerdendir?\nA-)Roka\nB-)Havu�\nC-)Semizotu\nD-)Marul\n");
	strcpy(s[29].soru, "Hangi roman�n yazar� John Steinbeck de�ildir?\nA-)Fareler ve �nsanlar\nB-)Hayvan �iftli�i\nC-)Gazap �z�mleri\nD-)�nci\n");
	
	printf("%s", s[secici].soru);
	
	printf("\nJoker kullanmak i�in J, Devam i�in Enter bas�n�z. \n");
	printf("\nYan�t: ");
	gets(c1); 
	
	if(strcmp(c1, "J") == 0){
		for(i=0; i<4; i++){
			printf("%s", j[i].joker);
		}
		printf("\nHangi jokeri kullanmak istiyorsunuz? (�ift cevap joker hakk� 7. sorudan itibaren aktif olacakt�r! Se�seniz bile kullanamazs�n�z!)\n");
		printf("\nCevap: ");
		gets(c2);
		
		if(strcmp(c2, "1") == 0)
			printf("Arkada�a sorma jokeri aktif.\n");
								
		else if(strcmp(c2, "2") == 0){
			printf("Soru de�i�tirme jokeri aktif.\n\n");
			secici = rand() % 30;
			printf("%s", s[secici].soru);						
		}
		
		else if(strcmp(c2, "3") == 0){
			printf("Yar� yar�ya jokeri aktif. Sorunun yanl�� iki cevab�n�n elenmi� hali: \n");
			strcpy(s[0].soru, "Hangi �nl� �niversite mezunudur?\nA-)\nB-)\nC-)Y�lmaz Erdo�an\nD-)Kadir �nan�r\n");
			strcpy(s[1].soru, "Yedi renkten olu�an g�kku�a��n�n ortas�ndaki renk hangisidir?\nA-)Mavi\nB-)\nC-)Ye�il\nD-)\n");
			strcpy(s[2].soru, "Dede Korkut'un T�rk Destanlar�'n�n �zg�n kopyalar� hangi iki kentte bulunmaktad�r?\nA-)\nB-)Dresten-Vatikan\nC-)\nD-)Paris-Varsova\n");
			strcpy(s[3].soru, "Her 100 y�lda 7 cm yere yakla�an Pisa Kulesi hangi y�ne do�ru e�ilmektedir?\nA-)\nB-)\nC-)G�ney\nD-)Do�u\n");
			strcpy(s[4].soru, "T�rkiye'nin hapis cezas� alan ilk bilgisayar korsan� kimdir?\nA-)Burak �a�lar\nB-)\nC-)\nD-)Tamer �ahin\n");
			strcpy(s[5].soru, "Cebelitarik Bo�az� hangi ikisini birle�tirir?\nA-)\nB-)\nC-)Hazar Denizi\nD-)Sar� Deniz ve Hint Okyanusu\n");
			strcpy(s[6].soru, "Shakespeare'in hangi oyunundaki ba�karakter oyunun ilerleyen sahnelerinde �ngiltere kral� olur?\nA-)Machbet\nB-)III.Richard\nC-)\nD-)\n");
			strcpy(s[7].soru, "Al Pease, Formula 1 tarihinde, hangi sebepten dolay� yar��madan diskalifiye edilen ilk ve tek sporcudur?\nA-)\nB-)�ok yava� gitmek\nC-)Ehliyetini evde unutmak\nD-)\n");
			strcpy(s[8].soru, "333'�n 3 kat�, 333'�n 3'te birinden kac fazlad�r?\nA-)\nB-)222\nC-)\nD-)888\n");
			strcpy(s[9].soru, "B�y�k Britanya'daki ba�kentleri gezdim diyen biri hangi �ehre gitti�ini s�ylemi� olmaz?\nA-)Londra\nB-)Dublin\nC-)\nD-)\n");
			strcpy(s[10].soru, "Hangisi 'kesinlikle' anlam�na gelmez?\nA-)\nB-)Kesinkes\nC-)\nD-)Daima");
			strcpy(s[11].soru, "'A�ustosun yar�s� yaz' �eklinde ba�layan atas�z�n�n devam� nas�ld�r?\nA-)\nB-)Yar�s� bahard�r\nC-)Yar�s� k��t�r\nD-)");
			strcpy(s[12].soru, "Hangisi bir deyimde de ad� ge�en bir t�r g�vercindir?\nA-)\nB-)\nC-)Arpac� kumrusu\nD-)Dar�c� bulbulu\n");
			strcpy(s[13].soru, "Hangi �nl� �izgi karakter genellikle sar� renkli bir �apka takar?\nA-)Kirpi Sonic\nB-)H�zl� Gonzales\nC-)\nD-)\n");
			strcpy(s[14].soru, "Amerika k�tas�n�n ana kara par�as�n�n en g�neyindeyseniz hangisinde olabilirsiniz?\nA-)\nB-)��neler Burnu\nC-)\nD-)Boynuz Burnu\n");
			strcpy(s[15].soru, "'Ara vermeden, s�rekli olarak' anlamlar�na gelen kelimenin dogru yaz�l��� hangisidir?\nA-\nB-)M�temadiyen\nC-)\nD-)M�ttemaddiyyen\n");
			strcpy(s[16].soru, "'Dikkate �ayan' ne demektir?\nA-)De�erli\nB-)\nC-)\nD-)�zensiz\n");
			strcpy(s[17].soru, "Hangi meyvenin 'gemre' ve 'pembegemre' ad�nda t�rleri vard�r?\nA-)Erik\nB-)\nC-)\nD-)�z�m\n");
			strcpy(s[18].soru, "Hangisi bir �e�it ac� bala verilen add�r?\nA-)Deli Bal\nB-)\nC-)A��k Bal\nD-)\n");
			strcpy(s[19].soru, "'Atat�rk'�n Samsun'a ��kt��� g�n' do�an bir bebek T�rkiye'de cumhuriyet ilan edildi�inde ka� ayl�kt�r?\nA-)\nB-)43\nC-)\nD-)53");
			strcpy(s[20].soru, "Hangisi atomlarda bulunan temel par�ac�klardan biri de�ildir?\nA-)\nB-)N�tron\nC-)\nD-)Megatron\n");
			strcpy(s[21].soru, "ABD New York'taki �zg�rl�k Heykeli bir elinde me�ale tutarken di�er elinde ne tutar?\nA-)Anayasa Kitab�\nB-)Tabela\nC-)\nD-)\n");
			strcpy(s[22].soru, "Ebu ��ca Muhammed bin Davud kimdir?\nA-)\nB-)Alparslan\nC-)Selahaddin Eyyubi\nD-)\n");
			strcpy(s[23].soru, "'Zeplin' kelimesinin s�zl�k tan�m� hangisidir?\nA-)\nB-)Hava Gemisi\nC-)Lokomotif\nD-)\n");
			strcpy(s[24].soru, "Hangi ikisi r�zgar t�rlerine verilen adlard�r?\nA-Ay kuzeyi ve ay g�neyi\nB-)\nC-)\nD-)G�n do�usu ve g�n bat�s�\n");
			strcpy(s[25].soru, "Hangisi yanl�� bir kullan�md�r?\nA-)Mefru�at��\nB-)\nC-)Sahaf��\nD-)\n");
			strcpy(s[26].soru, "Ya�ar Kemal'in 1955'te yay�nlanan '�nce Memed' adl� roman�n hikayesi nerede ge�er?\nA-)\nB-)\nC-)�ukurova\nD-)Kafkasya\n");
			strcpy(s[27].soru, "Anorak, hangisinin bir �e�ididir?\nA-)Topuklu ayakkab�\nB-)Spor ceket\nC-)\nD-)");
			strcpy(s[28].soru, "Hangisi maydanozgillerdendir?\nA-)\nB-)Havu�\nC-)Semizotu\nD-)\n");
			strcpy(s[29].soru, "Hangi roman�n yazar� John Steinbeck de�ildir?\nA-)\nB-)Hayvan �iftli�i\nC-)\nD-)�nci\n");
			
			printf("%s", s[secici].soru);
		}
		else if(*sayac == 7 && strcmp(c2, "4") == 0){
			printf("�ift cevap jokeri aktif.\n");
			printf("\n\nSoruya cevab�n�z: ");
			gets(cevap3);
		}
	}
	
	printf("Yar��madan �ekilmek i�in 'ESC', soruya cevap vermek i�in Enter bas�n�z: ");
	secim = getch();
	if(secim == 27){
		printf("\n�ekilmek istedi�inize emin misiniz? (Evet i�in 'E', Hay�r i�in 'H' tu�lay�n�z.) : ");
		gets(secim2);
			
		if(strcmp(secim2, "E") == 0){
			printf("\nYar��madan �ekildiniz...");
			*control2 = 1;
		}
		else
			*control2 = 0;
	}
	
	if(strcmp(secim2, "E")){
		printf("\nSoruya cevab�n�z: ");
		gets(cevap2);
		
		if(strcmp(cevap2, s[secici].cevap) == 0 || strcmp(cevap3, s[secici].cevap) == 0){
			printf("Soruyu do�ru yan�tlad�n�z!\n");
			*control = 1;
		}
		else{
			printf("Yanl�� bildiniz! Ho��akal�n...\n");
			*control = 0;
		}
	}
}

int main(void){
	
	int i, odul, control, control2, sayac = 0;
	struct sorular s[30];
	struct jokerler j[4];
	
	setlocale(LC_ALL, "Turkish");
		
	strcpy(s[0].cevap, "D");
	strcpy(s[1].cevap, "C");
	strcpy(s[2].cevap, "B");
	strcpy(s[3].cevap, "C");
	strcpy(s[4].cevap, "D");
	strcpy(s[5].cevap, "D");
	strcpy(s[6].cevap, "B");
	strcpy(s[7].cevap, "B");
	strcpy(s[8].cevap, "D");
	strcpy(s[9].cevap, "B");
	strcpy(s[10].cevap, "D");
	strcpy(s[11].cevap, "C");
	strcpy(s[12].cevap, "C");
	strcpy(s[13].cevap, "B");
	strcpy(s[14].cevap, "D");
	strcpy(s[15].cevap, "B");
	strcpy(s[16].cevap, "A");
	strcpy(s[17].cevap, "D");
	strcpy(s[18].cevap, "A");
	strcpy(s[19].cevap, "D");
	strcpy(s[20].cevap, "D");
	strcpy(s[21].cevap, "B");
	strcpy(s[22].cevap, "B");
	strcpy(s[23].cevap, "B");
	strcpy(s[24].cevap, "D");
	strcpy(s[25].cevap, "C");
	strcpy(s[26].cevap, "C");
	strcpy(s[27].cevap, "B");
	strcpy(s[28].cevap, "B");
	strcpy(s[29].cevap, "B");
	
	strcpy(j[0].joker, "1-Arkada�a sorma jokeri\n");
	strcpy(j[1].joker, "2-Soru de�i�tirme jokeri\n");
	strcpy(j[2].joker, "3-Yar� yar�ya jokeri\n");
	strcpy(j[3].joker, "4-�ift cevap jokeri\n");
	
	printf("Kim Milyoner Olmak �ster Yar��mas�na Ho�geldiniz!\n");
	printf("L�tfen sorulara cevap verirken soruda istenen b�y�k/k���k harf format�na dikkat ediniz.\n\n");
		
	while(1){			
		
		printf("1. Soru 1000 TL de�erindedir. Yan�tlamak i�in 30 sn s�reniz vard�r.\n\n");
		cevap_kontrol(s, j, &control, &control2, &sayac);
		sayac++;
		if(control){
			odul = 1000;
			if(control2){
				odul = 0;
				printf("\n\nToplam kazand���n�z �d�l: %d TL", odul);
				break;
			}
		}
		else{
			odul = 0;
			printf("\n\nToplam kazand���n�z �d�l: %d TL", odul);
			break;	
		}
			
		printf("\n2. Soru 2000 TL de�erindedir. Yan�tlamak i�in 30 sn s�reniz vard�r.\n\n");
		cevap_kontrol(s, j, &control, &control2, &sayac);
		sayac++;
		if(control){
			odul = 2000;
			if(control2 == 1){
				odul = 1000;
				printf("\n\nToplam kazand���n�z �d�l: %d TL", odul);
				break;
			}
		}
		else{
			odul = 0;
			printf("\n\nToplam kazand���n�z �d�l: %d TL", odul);
			break;
		}
		
		printf("\n3. Soru 3000 TL de�erindedir. Yan�tlamak i�in 30 sn s�reniz vard�r.\n\n");
		cevap_kontrol(s, j, &control, &control2, &sayac);
		sayac++;
		if(control){
			odul = 3000;
			if(control2){
				odul = 2000;
				printf("\n\nToplam kazand���n�z �d�l: %d TL", odul);
				break;
			}
		}
		else{
			odul = 2000;
			printf("\n\nToplam kazand���n�z �d�l: %d TL", odul);
			break;
		}
		
		printf("\n4. Soru 5000 TL de�erindedir. Yan�tlamak i�in 30 sn s�reniz vard�r.\n\n");
		cevap_kontrol(s, j, &control, &control2, &sayac);
		sayac++;
		if(control){
			odul = 5000;
			if(control2){
				odul = 3000;
				printf("\n\nToplam kazand���n�z �d�l: %d TL", odul);
				break;
			}
		}
		else{
			odul = 2000;
			printf("\n\nToplam kazand���n�z �d�l: %d TL", odul);
			break;
		}
		
		printf("\n5. Soru 7500 TL de�erindedir. Yan�tlamak i�in 30 sn s�reniz vard�r.\n\n");
		cevap_kontrol(s, j, &control, &control2, &sayac);
		sayac++;
		if(control){
			odul = 7500;
			if(control2){
				odul = 5000;
				printf("\n\nToplam kazand���n�z �d�l: %d TL", odul);
				break;
			}
		}
		else{
			odul = 2000;
			printf("\n\nToplam kazand���n�z �d�l: %d TL", odul);
			break;
		}
		
		printf("\n6. Soru 10.000 TL de�erindedir. Yan�tlamak i�in 30 sn s�reniz vard�r.\n\n");
		cevap_kontrol(s, j, &control, &control2, &sayac);
		sayac++;
		if(control){
			odul = 10000;
			if(control2){
				odul = 7500;
				printf("\n\nToplam kazand���n�z �d�l: %d TL", odul);
				break;
			}
		}
		else{
			odul = 2000;
			printf("\n\nToplam kazand���n�z �d�l: %d TL", odul);
			break;
		}
		
		printf("\n7. Soru 30.000 TL de�erindedir.\n\n");
		cevap_kontrol(s, j, &control, &control2, &sayac);
		if(control){
			sayac++;
			odul = 30000;
			if(control2){
				odul = 10000;
				printf("\n\nToplam kazand���n�z �d�l: %d TL", odul);
				break;
			}
		}
		else{
			odul = 2000;
			printf("\n\nToplam kazand���n�z �d�l: %d TL", odul);
			break;
		}
		
		printf("\n8. Soru 50.000 TL de�erindedir.\n\n");
		cevap_kontrol(s, j, &control, &control2, &sayac);
		sayac++;
		if(control){
			odul = 50000;
			if(control2){
				odul = 30000;
				printf("\n\nToplam kazand���n�z �d�l: %d TL", odul);
				break;
			}
		}
		else{
			odul = 30000;
			printf("\n\nToplam kazand���n�z �d�l: %d TL", odul);
			break;
		}
		
		printf("\n9. Soru 100.000 TL de�erindedir.\n\n");
		cevap_kontrol(s, j, &control, &control2, &sayac);
		sayac++;
		if(control){
			odul = 100000;
			if(control2){
				odul = 50000;
				printf("\n\nToplam kazand���n�z �d�l: %d TL", odul);
				break;
			}
		}
		else{
			odul = 30000;
			printf("\n\nToplam kazand���n�z �d�l: %d TL", odul);
			break;
		}
		
		printf("\n10. Soru 200.000 TL de�erindedir.\n\n");
		cevap_kontrol(s, j, &control, &control2, &sayac);
		sayac++;
		if(control){
			odul = 200000;
			if(control2){
				odul = 100000;
				printf("\n\nToplam kazand���n�z �d�l: %d TL", odul);
				break;
			}
		}
		else{
			odul = 30000;
			printf("\n\nToplam kazand���n�z �d�l: %d TL", odul);
			break;
		}
				
		printf("\n11. Soru 400.000 TL de�erindedir.\n\n");
		cevap_kontrol(s, j, &control, &control2, &sayac);
		sayac++;
		if(control){
			odul = 400000;
			if(control2){
				odul = 200000;
				printf("\n\nToplam kazand���n�z �d�l: %d TL", odul);
				break;
			}
		}
		else{
			odul = 30000;
			printf("\n\nToplam kazand���n�z �d�l: %d TL", odul);
			break;
		}
		
		printf("\n12. Soru 1.000.000 TL de�erindedir.\n\n");
		cevap_kontrol(s, j, &control, &control2, &sayac);
		sayac++;
		if(control){
			odul = 1000000;
			if(sayac == 12){
				printf("\n\nTebrikler! 1.000.000 TL kazand�n�z!");
				break;
			}
			if(control2){
				odul = 400000;
				printf("\n\nToplam kazand���n�z �d�l: %d TL", odul);
				break;
			}
		}
		else{
			odul = 30000;
			printf("\n\nToplam kazand���n�z �d�l: %d TL", odul);
			break;
		}
	}

	return(0);
}
