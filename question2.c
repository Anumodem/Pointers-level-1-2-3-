#include <stdio.h>
int main()
{
    int numArray[100];
    int t,i,n;
    scanf("%d",&t);
    if(t<=0||t>=100)
    printf("INVALID INPUT");
    else
    {
        while(t--){
            int sum=0;
            scanf("%d",&n);
            for(i=0;i<n;i++)
            scanf("%d",&numArray[i]);
            int *ptr;
            ptr=numArray;
            for(i=0;i<n;i++)
            {
                sum=sum+ptr[i];
                            }
                            printf("%d\n",sum);
        }
    }

	return 0;
}
