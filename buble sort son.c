#include <stdio.h>

int main(){
	
	 int i,j,a;
	 int sayi;
    printf("Kac tane sayi girmek istiyorsunuz? ");
    scanf("%d",&sayi);
    int dizi[sayi];
    
	 for(i=0;i<sayi;i++){
        printf("%d nci elemani girin: ",i+1);
        scanf("%d",&dizi[i]);
    }
     printf("buble sort için 1'i \n selection sort için 2'yi tuþlayýn");
     scanf("%d",&a);

  	int sakla;
  	for(i=0;i<sayi;i++ ){
  		
		  for(j=0;j<sayi;j++){
  			
			  if(dizi[j]>dizi[j+1]){
  				
				  sakla=dizi[j];
  				
				  dizi[j]=dizi[j+1];
  			
			  	dizi[j+1]=sakla;
			  }
		  }
	  }
  
  	 for(i=0;i<sayi;i++){
        printf("-> %d",dizi[i]);
    }

	
	
	
	
	
	
    getch();
	    }

