#include<stdio.h>
struct node{
	int val,nxt;
};
struct node s[1005];
int tot=1;
int main(){
	int n=34,cur,m=1;
	s[1].val=1;s[2].val=1;s[3].val=1;s[4].val=1;s[5].val=2;
	s[6].val=1;s[7].val=2;s[8].val=2;s[9].val=1;s[10].val=1;
	s[11].val=2;s[12].val=1;s[13].val=2;s[14].val=1;s[15].val=3;
	s[16].val=2;s[17].val=1;s[18].val=1;s[19].val=1;s[20].val=1;
	s[21].val=1;s[22].val=1;s[23].val=1;s[24].val=2;s[25].val=2;
	s[26].val=2;s[27].val=1;s[28].val=2;s[29].val=2;s[30].val=1;
	s[31].val=1;s[32].val=2;s[33].val=2;s[34].val=2;
	for(int i=1;i<=n;i++){
		s[i].nxt=i+1;
	}
	s[n].nxt=1;
	while(m<=n){
		int k=1;
		if(m==1){
			printf("3 ");
			cur=16;
			s[14].nxt=16;
		}
		if(m>1){
			while(k!=m-1){
			    cur=s[cur].nxt;
			    k++;
		    }
		    int anss=s[cur].nxt;
		    printf("%d ",s[anss].val);
		    s[cur].nxt=s[anss].nxt;
		    cur=s[cur].nxt;
		}
		m++;
	}
	return 0;
}