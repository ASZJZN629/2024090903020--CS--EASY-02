#include<stdio.h>
char stack[50];
int tp=0,cur=0;
int a[50]={0,3,1,1,2,2,1,2,1,1,2,1,2,2,1,1,2,2,1,1,2,2,1,1,2,2,1,1,2,1,1,1,1,1,2};
char s[50]={'k','i','g','l','n','m','r','m','e','i','a','h','e','n','r','t','e','o','f','4','a','r','d','a','r'};
int main()
{
	for(int i=1;i<=34;i++){
		if(i%2==1){
			for(int j=1;j<=a[i];j++){
				stack[tp]=s[cur];
				tp++;cur++;
			}
		}
		if(i%2==0){
			for(int j=1;j<=a[i];j++)
				printf("%c",stack[--tp]);
		}
	}
	return 0;
}
//kiglnmrmeiahenrteof4ardar