#include<stdio.h>
struct node{
	int val,nxt;
};
struct node s[105];
int tot=1;
int main()
{
	s[1].val=1;
	int hd=1,tl=1;
	char c;
	scanf("%c",&c);
	while(c!='C'){
		if(c=='H'){
			int v1,v2,v3;
			scanf("%d%d%d",&v1,&v2,&v3);
			s[++tot].val=v3;s[tot].nxt=hd;hd=tot;
			s[++tot].val=v2;s[tot].nxt=hd;hd=tot;
			s[++tot].val=v1;s[tot].nxt=hd;hd=tot;
		}
		if(c=='T'){
			int v1,v2,v3;
			scanf("%d%d%d",&v1,&v2,&v3);
			s[++tot].val=v1;s[tl].nxt=tot;tl=tot;
			s[++tot].val=v2;s[tl].nxt=tot;tl=tot;
			s[++tot].val=v3;s[tl].nxt=tot;tl=tot;
		}
		if(c=='D'){
			int loc,cur=hd,k=1;
			scanf("%d",&loc);
			if(loc==1) hd=s[hd].nxt;
			if(loc!=1){
				while(k!=loc-1){
				    cur=s[cur].nxt;
				    k++;
			    }
			    int del=s[cur].nxt;
			    if(del==tl) tl=cur;
			    else s[cur].nxt=s[del].nxt;
		    }
		}
		scanf("%c",&c);
	}
	s[tl].nxt=hd;
	int i=hd;
	while(i!=tl){
		printf("%d ",s[i].val);
		i=s[i].nxt;
	}
	printf("%d",s[tl].val);
	return 0;
}