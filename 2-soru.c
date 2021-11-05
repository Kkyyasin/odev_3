#include<stdio.h>
#include<stdlib.h>
int main(){
	float  s3,s4,sonuc1;
	int islem,s1,s2,sonuc;
	printf("1-toplama\n");
	printf("2-cikarma\n");
	printf("3-bolum\n");
	printf("4-carpim\n");
	printf("5-mod alma\n");
    printf("yapmak istediginiz islemin numarasani giriniz=");
	scanf("%d",&islem);
    if(islem>5||islem<1){
	}
	else if(islem!=3){
	printf("birinci sayiyi giriniz=");
	scanf("%d",&s1);
	printf("ikinci sayiyi giriniz=");
	scanf("%d",&s2);}
	else if(islem==3){
	printf("birinci sayiyi giriniz=");
	scanf("%f",&s3);
	printf("ikinci sayiyi giriniz=");
	scanf("%f",&s4);}	
	switch(islem){
		case 1:
			sonuc=s1+s2;
			printf("girilen iki sayinin toplami= %d",sonuc);
			break;
	    case 2:
	    	sonuc=s1-s2;
	    	printf("girilen iki sayinin farki= %d",sonuc);
	    	break;
	    case 3:
	    	sonuc1=s3/s4;
	    	printf("birinci sayinin ikinci sayiya bolumu= %.3f",sonuc1);
	    	break;
	    case 4:
	    	sonuc=s1*s2;
	    	printf("sayilarin carpimi= %d",sonuc);
			break;
	    case 5:
	     	sonuc=s1%s2;
	    	printf("birinci sayinin ikinci sayiya gore modu= %d",sonuc);
	    	break;
	    	default:printf("hatali kodlama yaptiniz");
			break;
	}
	return 0;
}
