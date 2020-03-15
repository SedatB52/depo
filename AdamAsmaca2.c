#include <stdio.h>
#include <time.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>



int main (){
char mat[20][15]={{"izmir"}, {"adana"}, {"bayburt"}, {"ordu"}, {"giresun"}, {"ankara"}, {"istanbul"}, {"bursa"},
				 {"kocaeli"},{"kirklareli"},{"diyarbakir"},{"denizli"},{"konya"},{"zonguldak"}, {"trabzon"},
				 {"antalya"},{"kastamonu"},{"van"},	{"edirne"}, {"sinop"}};
		int i,a,xxx,t=1,say=0,say2,k1=1,k2=1;
		char h;		
			
			srand(time(NULL));
	a=rand()%20;
	     
	
xxx=0;
	for(i=0;mat[a][i]!='\0';i++){
		say+=1;
	}
	char yedek[say];
	char cevap[say];
	char kontrol[say];
	for(i=0;i<say;i++){
		yedek[i]='_';
	}
	
	 printf("tahmin edilecek sehir rastgele belirlendi. \n kelimenin uzunlugu= %d \n",say);
	
	say2=say*2;
	for(i=0;i<say;i++){
		kontrol[i]=mat[a][i];
	}
	t=say2;
	while(t>0){
		printf("# %d hak yanlis tahmin hakki kaldi \n\n -> tahmin edilen harfi girin= \n",t);
		h=getche();
		printf("\n");
		

for(i=0;i<say;i++){
	if(mat[a][i]==h){
		yedek[i]=h;
	}
}
	for(i=0;i<say;i++){
		printf("%c",yedek[i]);
	}
	printf("\n");
	printf("kelimeyi tahmin etmek ister misiniz? => \n");
		gets(cevap);
		
	for(i=0;i<say;i++){
		if(cevap[i]==kontrol[i]){
			k1=k1+1;
		}
	}
	for(i=0;i<say;i++){
		if(yedek[i]==kontrol[i]){
			k2=k2+1;
		}
	}
if(k1>say||k2>say){
	t=-1;
	printf(" *** KAZANDINIZ *** ");	
}
k1=1;
k2=1;
//printf("**%d**",t);
	for(i=0;i<say;i++){
		if(h==kontrol[i]){
			xxx=xxx+1;
		}
	}
	if(xxx<1){
		t=t-1;
	}
	xxx=0;
}
 /*if(k2<say&&k1<say){
		printf("KAYBETTINIZ \n");
		printf(" Kelime = ");
		for(i=0;i<say;i++){
			printf("%c",kontrol[i]);
		}
} */
printf("BITTI");

	
	
getch();
return 0;	

}
