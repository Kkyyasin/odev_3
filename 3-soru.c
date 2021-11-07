#include<stdio.h>
#include<stdlib.h>
int main(){
	//denklem=a*x*x+b*x+c
	float x,a,b,c,x1,x2,diskriminant;
	printf("x*x katsayisini giriniz=");
	scanf("%f",&a);
	printf("x in katsayisini giriniz=");
	scanf("%f",&b);
	printf("sabit katsayiyi giriniz=");
	scanf("%f",&c);
	printf("denklemin diskiriminati=");
	diskriminant=b*b-(4*a*c);
	printf("%.2f\n",diskriminant);
	x1=(-b+(sqrt(diskriminant)))/2*a;
	x2=(-b-(sqrt(diskriminant)))/2*a;
	if(diskriminant>0){
	printf("denklemin birinci koku=");
    printf("%.2f\n",x1);
    printf("denklemin ikinci koku=");
    printf("%.2f",x2);}
    else if(diskriminant==0){
    printf("cift katli kok vardir.\n");
    printf("kok=%.2f",x1);
	}
    else {
    	printf("kok yoktur");
	}
	return 0;
}
