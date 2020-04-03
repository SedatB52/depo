#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	char dizi[40];
	char *p;
	int i,say=0;
	char harf;
	
	p=dizi;
	

	printf("kiyaslamak istediðiniz kelimeyi girin");
	gets(dizi);
	
printf("hangi harfi aramak istiyorsunuz");
scanf("%c",&harf);

for(i=0;i<40;i++){
	
	if(*(p+i)==harf){
		printf("%d. sirada bulunmakta \n",i+1);
		say+=1;
	}
	
}
printf("toplamda %d tane var",say);
	
	





}
