#include<stdio.h>
int main(){
	int k1,k2,k3;
	printf("birinci kenari giriniz=");
	scanf("%d",&k1);
	printf("ikinci kenari giriniz");
	scanf("%d",&k2);
	printf("ucuncu kenari giriniz=");
	scanf("%d",&k3);
	if(k1==k2 ){
		if(k2==k3){
			printf("eskenar ucgen");
		 }
		else{
			printf("ikizkenar ucgen");
		}
    	}
		else if(k1==k3){
		    printf("ikizkenar ucgen");
		}
		else if(k2==k3){
	    	printf("ikizkenar ucgen");
		}
		else{
			printf("cesitkenar ucgen");
		}
}
