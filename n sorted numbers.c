
#include<stdio.h>
int main()
{
    int l,n,k,a[100],b[100],i,j=0,count=1,m=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(l=0;l<n;l++)
    {
        for(i=l;i<n-1;i++)
        {
            i++;
         if(a[j]==a[i])
         {
             count++;
         }
        }
      if(k==count)
      {
        b[m]=a[j];
        m++;
      }
      j++;
    }
    for(i=0;i<n;i++)
    {
        if(b[i]<b[i+1])
        {
            printf("%d\n",b[i]);
            break;
        }
        else
        {
            if(b[i]>b[i+1])
            {
            printf("%d\n",b[i+1]);
            break;
            }
        }
    }
    
    return 0;
}