#include <stdio.h>
int ekok (int t,int y){
	int a,i,z=1;
	int ekok;
	if(t>y)
	a=y;
	else
	a=t;
	for(i=2;i<=a;i++){
		if(y%i==0&&t%i==0){
			z=i;
		}
	}
	ekok=(t*y)/z;
	
return ekok;	
		
}
int ebob(int t,int y){
	int a,i,z=1;
	if(t>y)
	a=y;
	else
	a=t;
	for(i=2;i<=a;i++){
		if(y%i==0&&t%i==0){
			z=i;
		}
	}
	return z;
	
	
	
}

int main (){
int x,y;
	printf("iki sayý giriniz =");
	scanf("%d\n",&x);
	scanf("%d\n",&y);
printf(" ekok = %d \n",ekok(x,y));
printf(" ebob = %d",ebob(x,y));
	return 0;
}

