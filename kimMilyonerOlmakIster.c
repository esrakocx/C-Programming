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
	
	strcpy(s[0].soru, "Hangi ünlü üniversite mezunudur?\nA-)Tarkan Tevetoðlu\nB-)Bülent Ecevit\nC-)Yýlmaz Erdoðan\nD-)Kadir Ýnanýr\n");
	strcpy(s[1].soru, "Yedi renkten oluþan gökkuþaðýnýn ortasýndaki renk hangisidir?\nA-)Mavi\nB-)Sarý\nC-)Yeþil\nD-)Kýrmýzý\n");
	strcpy(s[2].soru, "Dede Korkut'un Türk Destanlarý'nýn özgün kopyalarý hangi iki kentte bulunmaktadýr?\nA-)Lizbon-Roma\nB-)Dresten-Vatikan\nC-)Londra-Budapeþte\nD-)Paris-Varsova\n");
	strcpy(s[3].soru, "Her 100 yýlda 7 cm yere yaklaþan Pisa Kulesi hangi yöne doðru eðilmektedir?\nA-)Batý\nB-)Kuzey\nC-)Güney\nD-)Doðu\n");
	strcpy(s[4].soru, "Türkiye'nin hapis cezasý alan ilk bilgisayar korsaný kimdir?\nA-)Burak Çaðlar\nB-)Mahir Arabul\nC-)Tolga Bilge\nD-)Tamer Þahin\n");
	strcpy(s[5].soru, "Cebelitarik Boðazý hangi ikisini birleþtirir?\nA-)Akdeniz Atlas Okyanusu\nB-)Atlas Okyanusu ve Büyük Okyanus\nC-)Hazar Denizi\nD-)Sarý Deniz ve Hint Okyanusu\n");
	strcpy(s[6].soru, "Shakespeare'in hangi oyunundaki baþkarakter oyunun ilerleyen sahnelerinde Ýngiltere kralý olur?\nA-)Machbet\nB-)III.Richard\nC-)Othello\nD-)Hamlet\n");
	strcpy(s[7].soru, "Al Pease, Formula 1 tarihinde, hangi sebepten dolayý yarýþmadan diskalifiye edilen ilk ve tek sporcudur?\nA-)Emniyet kemeri takmamak\nB-)Çok yavaþ gitmek\nC-)Ehliyetini evde unutmak\nD-)Araçta müzik dinlemek\n");
	strcpy(s[8].soru, "333'ün 3 katý, 333'ün 3'te birinden kac fazladýr?\nA-)0\nB-)222\nC-)555\nD-)888\n");
	strcpy(s[9].soru, "Büyük Britanya'daki baþkentleri gezdim diyen biri hangi þehre gittiðini söylemiþ olmaz?\nA-)Londra\nB-)Dublin\nC-)Cardiff\nD-)Edinburg\n");
	strcpy(s[10].soru, "Hangisi 'kesinlikle' anlamýna gelmez?\nA-)Katiyen\nB-)Kesinkes\nC-)Pekala\nD-)Daima");
	strcpy(s[11].soru, "'Aðustosun yarýsý yaz' þeklinde baþlayan atasözünün devamý nasýldýr?\nA-)Yarýsý güzdür\nB-)Yarýsý bahardýr\nC-)Yarýsý kýþtýr\nD-)Yarýsý yazdýr\n");
	strcpy(s[12].soru, "Hangisi bir deyimde de adý geçen bir tür güvercindir?\nA-)Baklacý kekliði\nB-)Yulafcý turnasý\nC-)Arpacý kumrusu\nD-)Darýcý bülbülü\n");
	strcpy(s[13].soru, "Hangi ünlü çizgi karakter genellikle sarý renkli bir þapka takar?\nA-)Kirpi Sonic\nB-)Hýzlý Gonzales\nC-)Road Runner\nD-)Tazmanya Canavarý\n");
	strcpy(s[14].soru, "Amerika kýtasýnýn ana kara parçasýnýn en güneyindeyseniz hangisinde olabilirsiniz?\nA-)Ümit Burnu\nB-)Ýðneler Burnu\nC-)Baba Burnu\nD-)Boynuz Burnu\n");
	strcpy(s[15].soru, "'Ara vermeden, sürekli olarak' anlamlarýna gelen kelimenin dogru yazýlýþý hangisidir?\nA-Mütemmadiyen\nB-)Mütemadiyen\nC-)Mütemadiyyen\nD-)Müttemaddiyyen\n");
	strcpy(s[16].soru, "'Dikkate þayan' ne demektir?\nA-)Deðerli\nB-)Önemsiz\nC-)Basit\nD-)Özensiz\n");
	strcpy(s[17].soru, "Hangi meyvenin 'gemre' ve 'pembegemre' adýnda türleri vardýr?\nA-)Erik\nB-)Karpuz\nC-)Elma\nD-)Üzüm\n");
	strcpy(s[18].soru, "Hangisi bir çeþit acý bala verilen addýr?\nA-)Deli Bal\nB-)Mecnun Bal\nC-)Aþýk Bal\nD-)Divane Bal\n");
	strcpy(s[19].soru, "'Atatürk'ün Samsun'a çýktýðý gün' doðan bir bebek Türkiye'de cumhuriyet ilan edildiðinde kaç aylýktýr?\nA-)41\nB-)43\nC-)51\nD-)53\n");
	strcpy(s[20].soru, "Hangisi atomlarda bulunan temel parçacýklardan biri deðildir?\nA-)Proton\nB-)Nötron\nC-)Elektron\nD-)Megatron\n");
	strcpy(s[21].soru, "ABD New York'taki Özgürlük Heykeli bir elinde meþale tutarken diðer elinde ne tutar?\nA-)Anayasa Kitabý\nB-)Tabela\nC-)Terazi\nD-)Hiçbir þey\n");
	strcpy(s[22].soru, "Ebu Þüca Muhammed bin Davud kimdir?\nA-)Timur\nB-)Alparslan\nC-)Selahaddin Eyyubi\nD-)Cengiz Han\n");
	strcpy(s[23].soru, "'Zeplin' kelimesinin sözlük tanýmý hangisidir?\nA-)Deniz Uçaðý\nB-)Hava Gemisi\nC-)Lokomotif\nD-)Kara taþýtý\n");
	strcpy(s[24].soru, "Hangi ikisi rüzgar türlerine verilen adlardýr?\nA-Ay kuzeyi ve ay güneyi\nB-)Gün kuzeyi ve gün güneyi\nC-)Ay doðusu ve ay batýsý\nD-)Gün doðusu ve gün batýsý\n");
	strcpy(s[25].soru, "Hangisi yanlýþ bir kullanýmdýr?\nA-)Mefruþatçý\nB-)Züccaciyeci\nC-)Sahafçý\nD-)Manifaturacý\n");
	strcpy(s[26].soru, "Yaþar Kemal'in 1955'te yayýnlanan 'Ýnce Memed' adlý romanýn hikayesi nerede geçer?\nA-)Trakya\nB-)Rumeli\nC-)Çukurova\nD-)Kafkasya\n");
	strcpy(s[27].soru, "Anorak, hangisinin bir çeþididir?\nA-)Topuklu ayakkabý\nB-)Spor ceket\nC-)Kot pantolon\nD-)Yün bere\n");
	strcpy(s[28].soru, "Hangisi maydanozgillerdendir?\nA-)Roka\nB-)Havuç\nC-)Semizotu\nD-)Marul\n");
	strcpy(s[29].soru, "Hangi romanýn yazarý John Steinbeck deðildir?\nA-)Fareler ve Ýnsanlar\nB-)Hayvan Çiftliði\nC-)Gazap Üzümleri\nD-)Ýnci\n");
	
	printf("%s", s[secici].soru);
	
	printf("\nJoker kullanmak için J, Devam için Enter basýnýz. \n");
	printf("\nYanýt: ");
	gets(c1); 
	
	if(strcmp(c1, "J") == 0){
		for(i=0; i<4; i++){
			printf("%s", j[i].joker);
		}
		printf("\nHangi jokeri kullanmak istiyorsunuz? (Çift cevap joker hakký 7. sorudan itibaren aktif olacaktýr! Seçseniz bile kullanamazsýnýz!)\n");
		printf("\nCevap: ");
		gets(c2);
		
		if(strcmp(c2, "1") == 0)
			printf("Arkadaþa sorma jokeri aktif.\n");
								
		else if(strcmp(c2, "2") == 0){
			printf("Soru deðiþtirme jokeri aktif.\n\n");
			secici = rand() % 30;
			printf("%s", s[secici].soru);						
		}
		
		else if(strcmp(c2, "3") == 0){
			printf("Yarý yarýya jokeri aktif. Sorunun yanlýþ iki cevabýnýn elenmiþ hali: \n");
			strcpy(s[0].soru, "Hangi ünlü üniversite mezunudur?\nA-)\nB-)\nC-)Yýlmaz Erdoðan\nD-)Kadir Ýnanýr\n");
			strcpy(s[1].soru, "Yedi renkten oluþan gökkuþaðýnýn ortasýndaki renk hangisidir?\nA-)Mavi\nB-)\nC-)Yeþil\nD-)\n");
			strcpy(s[2].soru, "Dede Korkut'un Türk Destanlarý'nýn özgün kopyalarý hangi iki kentte bulunmaktadýr?\nA-)\nB-)Dresten-Vatikan\nC-)\nD-)Paris-Varsova\n");
			strcpy(s[3].soru, "Her 100 yýlda 7 cm yere yaklaþan Pisa Kulesi hangi yöne doðru eðilmektedir?\nA-)\nB-)\nC-)Güney\nD-)Doðu\n");
			strcpy(s[4].soru, "Türkiye'nin hapis cezasý alan ilk bilgisayar korsaný kimdir?\nA-)Burak Çaðlar\nB-)\nC-)\nD-)Tamer Þahin\n");
			strcpy(s[5].soru, "Cebelitarik Boðazý hangi ikisini birleþtirir?\nA-)\nB-)\nC-)Hazar Denizi\nD-)Sarý Deniz ve Hint Okyanusu\n");
			strcpy(s[6].soru, "Shakespeare'in hangi oyunundaki baþkarakter oyunun ilerleyen sahnelerinde Ýngiltere kralý olur?\nA-)Machbet\nB-)III.Richard\nC-)\nD-)\n");
			strcpy(s[7].soru, "Al Pease, Formula 1 tarihinde, hangi sebepten dolayý yarýþmadan diskalifiye edilen ilk ve tek sporcudur?\nA-)\nB-)Çok yavaþ gitmek\nC-)Ehliyetini evde unutmak\nD-)\n");
			strcpy(s[8].soru, "333'ün 3 katý, 333'ün 3'te birinden kac fazladýr?\nA-)\nB-)222\nC-)\nD-)888\n");
			strcpy(s[9].soru, "Büyük Britanya'daki baþkentleri gezdim diyen biri hangi þehre gittiðini söylemiþ olmaz?\nA-)Londra\nB-)Dublin\nC-)\nD-)\n");
			strcpy(s[10].soru, "Hangisi 'kesinlikle' anlamýna gelmez?\nA-)\nB-)Kesinkes\nC-)\nD-)Daima");
			strcpy(s[11].soru, "'Aðustosun yarýsý yaz' þeklinde baþlayan atasözünün devamý nasýldýr?\nA-)\nB-)Yarýsý bahardýr\nC-)Yarýsý kýþtýr\nD-)");
			strcpy(s[12].soru, "Hangisi bir deyimde de adý geçen bir tür güvercindir?\nA-)\nB-)\nC-)Arpacý kumrusu\nD-)Darýcý bulbulu\n");
			strcpy(s[13].soru, "Hangi ünlü çizgi karakter genellikle sarý renkli bir þapka takar?\nA-)Kirpi Sonic\nB-)Hýzlý Gonzales\nC-)\nD-)\n");
			strcpy(s[14].soru, "Amerika kýtasýnýn ana kara parçasýnýn en güneyindeyseniz hangisinde olabilirsiniz?\nA-)\nB-)Ýðneler Burnu\nC-)\nD-)Boynuz Burnu\n");
			strcpy(s[15].soru, "'Ara vermeden, sürekli olarak' anlamlarýna gelen kelimenin dogru yazýlýþý hangisidir?\nA-\nB-)Mütemadiyen\nC-)\nD-)Müttemaddiyyen\n");
			strcpy(s[16].soru, "'Dikkate þayan' ne demektir?\nA-)Deðerli\nB-)\nC-)\nD-)Özensiz\n");
			strcpy(s[17].soru, "Hangi meyvenin 'gemre' ve 'pembegemre' adýnda türleri vardýr?\nA-)Erik\nB-)\nC-)\nD-)Üzüm\n");
			strcpy(s[18].soru, "Hangisi bir çeþit acý bala verilen addýr?\nA-)Deli Bal\nB-)\nC-)Aþýk Bal\nD-)\n");
			strcpy(s[19].soru, "'Atatürk'ün Samsun'a çýktýðý gün' doðan bir bebek Türkiye'de cumhuriyet ilan edildiðinde kaç aylýktýr?\nA-)\nB-)43\nC-)\nD-)53");
			strcpy(s[20].soru, "Hangisi atomlarda bulunan temel parçacýklardan biri deðildir?\nA-)\nB-)Nötron\nC-)\nD-)Megatron\n");
			strcpy(s[21].soru, "ABD New York'taki Özgürlük Heykeli bir elinde meþale tutarken diðer elinde ne tutar?\nA-)Anayasa Kitabý\nB-)Tabela\nC-)\nD-)\n");
			strcpy(s[22].soru, "Ebu Þüca Muhammed bin Davud kimdir?\nA-)\nB-)Alparslan\nC-)Selahaddin Eyyubi\nD-)\n");
			strcpy(s[23].soru, "'Zeplin' kelimesinin sözlük tanýmý hangisidir?\nA-)\nB-)Hava Gemisi\nC-)Lokomotif\nD-)\n");
			strcpy(s[24].soru, "Hangi ikisi rüzgar türlerine verilen adlardýr?\nA-Ay kuzeyi ve ay güneyi\nB-)\nC-)\nD-)Gün doðusu ve gün batýsý\n");
			strcpy(s[25].soru, "Hangisi yanlýþ bir kullanýmdýr?\nA-)Mefruþatçý\nB-)\nC-)Sahafçý\nD-)\n");
			strcpy(s[26].soru, "Yaþar Kemal'in 1955'te yayýnlanan 'Ýnce Memed' adlý romanýn hikayesi nerede geçer?\nA-)\nB-)\nC-)Çukurova\nD-)Kafkasya\n");
			strcpy(s[27].soru, "Anorak, hangisinin bir çeþididir?\nA-)Topuklu ayakkabý\nB-)Spor ceket\nC-)\nD-)");
			strcpy(s[28].soru, "Hangisi maydanozgillerdendir?\nA-)\nB-)Havuç\nC-)Semizotu\nD-)\n");
			strcpy(s[29].soru, "Hangi romanýn yazarý John Steinbeck deðildir?\nA-)\nB-)Hayvan Çiftliði\nC-)\nD-)Ýnci\n");
			
			printf("%s", s[secici].soru);
		}
		else if(*sayac == 7 && strcmp(c2, "4") == 0){
			printf("Çift cevap jokeri aktif.\n");
			printf("\n\nSoruya cevabýnýz: ");
			gets(cevap3);
		}
	}
	
	printf("Yarýþmadan çekilmek için 'ESC', soruya cevap vermek için Enter basýnýz: ");
	secim = getch();
	if(secim == 27){
		printf("\nÇekilmek istediðinize emin misiniz? (Evet için 'E', Hayýr için 'H' tuþlayýnýz.) : ");
		gets(secim2);
			
		if(strcmp(secim2, "E") == 0){
			printf("\nYarýþmadan çekildiniz...");
			*control2 = 1;
		}
		else
			*control2 = 0;
	}
	
	if(strcmp(secim2, "E")){
		printf("\nSoruya cevabýnýz: ");
		gets(cevap2);
		
		if(strcmp(cevap2, s[secici].cevap) == 0 || strcmp(cevap3, s[secici].cevap) == 0){
			printf("Soruyu doðru yanýtladýnýz!\n");
			*control = 1;
		}
		else{
			printf("Yanlýþ bildiniz! Hoþçakalýn...\n");
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
	
	strcpy(j[0].joker, "1-Arkadaþa sorma jokeri\n");
	strcpy(j[1].joker, "2-Soru deðiþtirme jokeri\n");
	strcpy(j[2].joker, "3-Yarý yarýya jokeri\n");
	strcpy(j[3].joker, "4-Çift cevap jokeri\n");
	
	printf("Kim Milyoner Olmak Ýster Yarýþmasýna Hoþgeldiniz!\n");
	printf("Lütfen sorulara cevap verirken soruda istenen büyük/küçük harf formatýna dikkat ediniz.\n\n");
		
	while(1){			
		
		printf("1. Soru 1000 TL deðerindedir. Yanýtlamak için 30 sn süreniz vardýr.\n\n");
		cevap_kontrol(s, j, &control, &control2, &sayac);
		sayac++;
		if(control){
			odul = 1000;
			if(control2){
				odul = 0;
				printf("\n\nToplam kazandýðýnýz ödül: %d TL", odul);
				break;
			}
		}
		else{
			odul = 0;
			printf("\n\nToplam kazandýðýnýz ödül: %d TL", odul);
			break;	
		}
			
		printf("\n2. Soru 2000 TL deðerindedir. Yanýtlamak için 30 sn süreniz vardýr.\n\n");
		cevap_kontrol(s, j, &control, &control2, &sayac);
		sayac++;
		if(control){
			odul = 2000;
			if(control2 == 1){
				odul = 1000;
				printf("\n\nToplam kazandýðýnýz ödül: %d TL", odul);
				break;
			}
		}
		else{
			odul = 0;
			printf("\n\nToplam kazandýðýnýz ödül: %d TL", odul);
			break;
		}
		
		printf("\n3. Soru 3000 TL deðerindedir. Yanýtlamak için 30 sn süreniz vardýr.\n\n");
		cevap_kontrol(s, j, &control, &control2, &sayac);
		sayac++;
		if(control){
			odul = 3000;
			if(control2){
				odul = 2000;
				printf("\n\nToplam kazandýðýnýz ödül: %d TL", odul);
				break;
			}
		}
		else{
			odul = 2000;
			printf("\n\nToplam kazandýðýnýz ödül: %d TL", odul);
			break;
		}
		
		printf("\n4. Soru 5000 TL deðerindedir. Yanýtlamak için 30 sn süreniz vardýr.\n\n");
		cevap_kontrol(s, j, &control, &control2, &sayac);
		sayac++;
		if(control){
			odul = 5000;
			if(control2){
				odul = 3000;
				printf("\n\nToplam kazandýðýnýz ödül: %d TL", odul);
				break;
			}
		}
		else{
			odul = 2000;
			printf("\n\nToplam kazandýðýnýz ödül: %d TL", odul);
			break;
		}
		
		printf("\n5. Soru 7500 TL deðerindedir. Yanýtlamak için 30 sn süreniz vardýr.\n\n");
		cevap_kontrol(s, j, &control, &control2, &sayac);
		sayac++;
		if(control){
			odul = 7500;
			if(control2){
				odul = 5000;
				printf("\n\nToplam kazandýðýnýz ödül: %d TL", odul);
				break;
			}
		}
		else{
			odul = 2000;
			printf("\n\nToplam kazandýðýnýz ödül: %d TL", odul);
			break;
		}
		
		printf("\n6. Soru 10.000 TL deðerindedir. Yanýtlamak için 30 sn süreniz vardýr.\n\n");
		cevap_kontrol(s, j, &control, &control2, &sayac);
		sayac++;
		if(control){
			odul = 10000;
			if(control2){
				odul = 7500;
				printf("\n\nToplam kazandýðýnýz ödül: %d TL", odul);
				break;
			}
		}
		else{
			odul = 2000;
			printf("\n\nToplam kazandýðýnýz ödül: %d TL", odul);
			break;
		}
		
		printf("\n7. Soru 30.000 TL deðerindedir.\n\n");
		cevap_kontrol(s, j, &control, &control2, &sayac);
		if(control){
			sayac++;
			odul = 30000;
			if(control2){
				odul = 10000;
				printf("\n\nToplam kazandýðýnýz ödül: %d TL", odul);
				break;
			}
		}
		else{
			odul = 2000;
			printf("\n\nToplam kazandýðýnýz ödül: %d TL", odul);
			break;
		}
		
		printf("\n8. Soru 50.000 TL deðerindedir.\n\n");
		cevap_kontrol(s, j, &control, &control2, &sayac);
		sayac++;
		if(control){
			odul = 50000;
			if(control2){
				odul = 30000;
				printf("\n\nToplam kazandýðýnýz ödül: %d TL", odul);
				break;
			}
		}
		else{
			odul = 30000;
			printf("\n\nToplam kazandýðýnýz ödül: %d TL", odul);
			break;
		}
		
		printf("\n9. Soru 100.000 TL deðerindedir.\n\n");
		cevap_kontrol(s, j, &control, &control2, &sayac);
		sayac++;
		if(control){
			odul = 100000;
			if(control2){
				odul = 50000;
				printf("\n\nToplam kazandýðýnýz ödül: %d TL", odul);
				break;
			}
		}
		else{
			odul = 30000;
			printf("\n\nToplam kazandýðýnýz ödül: %d TL", odul);
			break;
		}
		
		printf("\n10. Soru 200.000 TL deðerindedir.\n\n");
		cevap_kontrol(s, j, &control, &control2, &sayac);
		sayac++;
		if(control){
			odul = 200000;
			if(control2){
				odul = 100000;
				printf("\n\nToplam kazandýðýnýz ödül: %d TL", odul);
				break;
			}
		}
		else{
			odul = 30000;
			printf("\n\nToplam kazandýðýnýz ödül: %d TL", odul);
			break;
		}
				
		printf("\n11. Soru 400.000 TL deðerindedir.\n\n");
		cevap_kontrol(s, j, &control, &control2, &sayac);
		sayac++;
		if(control){
			odul = 400000;
			if(control2){
				odul = 200000;
				printf("\n\nToplam kazandýðýnýz ödül: %d TL", odul);
				break;
			}
		}
		else{
			odul = 30000;
			printf("\n\nToplam kazandýðýnýz ödül: %d TL", odul);
			break;
		}
		
		printf("\n12. Soru 1.000.000 TL deðerindedir.\n\n");
		cevap_kontrol(s, j, &control, &control2, &sayac);
		sayac++;
		if(control){
			odul = 1000000;
			if(sayac == 12){
				printf("\n\nTebrikler! 1.000.000 TL kazandýnýz!");
				break;
			}
			if(control2){
				odul = 400000;
				printf("\n\nToplam kazandýðýnýz ödül: %d TL", odul);
				break;
			}
		}
		else{
			odul = 30000;
			printf("\n\nToplam kazandýðýnýz ödül: %d TL", odul);
			break;
		}
	}

	return(0);
}
