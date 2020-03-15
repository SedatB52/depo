#include <stdio.h>
int ilkel(int x){
	int ret=0;
	if(x==7||x==11){
		ret=1;
	}
	if(x==12||x==3||x==2){
		ret=-1;
	}
	return ret;
}
int digel(int x){
	int t1,t2,tt=0,ret=0;
	t1=1+rand()%6;
	 t2=1+rand()%6;
	 tt=t1+t2;
	 printf("zarlarin toplami = %d \n",tt);
	 if(tt==x){
	 	ret=1;
	 }
	 if(tt==7){
	 	ret=-1;
	 }
	 return ret;
}

int main (){
int eldeg=0,gameover=0;
int z1,z2,zt=0,tut;	
	srand(time(NULL));
	z1=1+rand()%6;
	 z2=1+rand()%6;
	 zt=z1+z2;
	 printf("zarlarin toplami = %d \n",zt);
	gameover=ilkel(zt);
	
		while(gameover==0){
	 z1=1+rand()%6;
	 z2=1+rand()%6;
	 zt=z1+z2;
	 printf("zarlarin toplami = %d \n",zt);
	 gameover=digel(zt);
		}
			
	if(gameover==1){
		printf("kazandiniz");
	}
	if(gameover==-1){
		printf("kaybettiniz");
	}
	
}
