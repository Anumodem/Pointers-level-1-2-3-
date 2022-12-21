#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>
#include <limits.h>
#define ll long long
#define gcu getchar_unlocked
#define pcu putchar_unlocked
ll scan(){
 register ll vl=0;
 char c;
 bool ng=0;
 c=gcu();
 if(c=='-')
 ng=1;
 while(c<'0'|| c>'9') c=gcu();
 while(c>='0' && c<='9'){
 vl=(vl<<3)+(vl<<1)+c-'0';
 c=gcu();
 }
 if(ng) vl=-vl;
 return vl;
}
void swap(int *a,int *b){ int tmp=*a; *a=*b;*b=tmp; }
void smin(ll *a,ll *b) { if(*a>*b) *a=*b; }
void smax(ll *a,ll *b) { if(*a<*b) *a=*b; }
int n,i,q,sz[200003],par[200003],A,B;
ll mn[200003],mx[200003];
void iniate(){
 for(i=1;i<n;++i) sz[i]=1, par[i]=i,mn[i]=mx[i]=scan();
}
int find(int ab){
 if(ab==par[ab]) return ab;
 else return par[ab]=find(par[ab]);
}
int main()
{
 n=scan()+1;
 iniate();
 char nn[100]="void swap(ll *a,ll *b)";
 if(nn[0]=='v')
 q=scan();
 while(q--){
 A=find(scan()),B=find(scan());
 if(A!=B){
 if(sz[A]>sz[B])
 swap(&A,&B);
 sz[B]+=sz[A];
 sz[A]=0;
 par[A]=B;
 smax(mx+B,mx+A);
 smin(mn+B,mn+A);
 }
 printf("%lld %lld\n",mn[B],mx[B]);
 }
return 0;
}
