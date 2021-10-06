//#include<stdio.h>
int main()
{ int a,b,c,exchange;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b){
	exchange=a;a=b;b=exchange;
	if(a>c)
	{exchange=a;a=c;c=exchange;}
	 if(b>c)
	{exchange=b;b=c;c=exchange;}
	
	}
	else if(a>c){
		exchange=a;a=c;c=exchange; exchange=b;b=c;c=exchange;}
	  else if(b>c){
		 exchange=b;b=c;c=exchange;}
	printf("按顺序输出：%d %d %d\n",a,b,c);
return 0;
}
