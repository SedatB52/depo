#include <stdio.h>
#include <time.h>
void fonc(){
	int dizi[15];
	int x,y,i,j;
	int max=NULL;
	int mak;
	srand(time(NULL));
		for(i=0;i<15;i++){
	
	
	
	dizi[i]=10+rand()%90;
	printf(" ==> %d   ",dizi[i]);

}
	max=dizi[0];
 	for(i=1;i<15;i++){
 		if(max<dizi[i]){
 			max=dizi[i];
 			
		 }		 
 }
 for(i=0;i<15;i++){
 	if(dizi[i]==max){
 		dizi[i]=0;
	 }
 }
 mak=dizi[0];
for(i=1;i<15;i++){
 		if(mak<dizi[i]){
 			mak=dizi[i];
 			
		 }
	
	
	
	
		 }
 
 
printf("\n ");
printf(" max deger =>%d ",max);
printf("\n ");
printf("ikinci en buyuk deger =>%d ",mak);
}



int main (){

	fonc();
	
	
	
	
}
