#include<stdio.h>
int main()
{ int a,i,max;
	scanf("%d",&a);
	max=a;
	for(i=1;i<10;i++){
		scanf("%d",&a);
		if(a>max)
			max=a;}
	printf("���ֵΪ��%d\n",max);
	return 0;
}