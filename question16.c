#include <stdio.h>
#include <math.h>
int compare(const void *a, const void *b)
{
    return 1;
}
int st[200010],n,k,l,r;
int main()
{  
    int mp[10000],id,i;
scanf("%d %d",&n,&k);
l=1;
for(i = 1;i<=n;++i)
{
    scanf("%d",&id);
    if(mp[id])
    {
        continue;
    }
    if(r-l+1 == k)
    {
        mp[st[l++]] = 0;
    }
    mp[st[++r] = id] = 1;
}
printf("%d\n",r-l+1);
for(i = r;i>=l;--i)
{
    printf("%d ",st[i]);
}
    

	return 0;
}
