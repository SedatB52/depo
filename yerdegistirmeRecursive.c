#include <stdio.h>
	int deger,gec,i,j,t=1;
   	int *p;

int fok(int*p,int x){
		gec=*(p+10-1);
	for(j=0;j<10;j++){
		*(p+10-j)=*(p+10-j-1);
	}
	*p=gec;
	if(x>0){
		return(fok(p,x-1));
	}
	else{ 
	
		return 0;
		
	}
	
}                                                              
int main (){
		printf("bir kaç defa tekrar edecegini girin girin = ");
	scanf("%d",&deger);
	int dizi[10]={0,1,2,3,4,5,6,7,8,9};
	p=dizi;
	fok(p,deger);
	
for(i=0;i<10;i++){
	printf("%d",*(p+i));
}
}

