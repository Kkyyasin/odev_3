#include<stdio.h>
#include<stdlib.h>
int main(){
	 int s1,s2,s3;
	printf("Birinci sayiyi giriniz=");
	scanf("%d",&s1);
	printf("Ikinci sayiyi giriniz=");
	scanf("%d",&s2);
	printf("Ucuncu sayiyi giriniz=");
	scanf("%d",&s3);
	if(s1>s2 && s1>s3){
		printf("%d. sayisi en buyuktur.",s1);
	}
	else if(s2>s1 && s2>s3){
		printf("%d. sayisi en buyuktur.",s2);
	}
	else if(s3>s1 && s3>s2){
		printf("%d. sayisi en buyuktur.",s2);
	}
	return 0;
}
