#include<stdio.h>
int main()
{
   int i,j,m,n,a[1000][1000],k,f,qt,s;
   scanf("%d %d",&m,&n);
   for(i=0;i<m;i++)
   {
       for(j=0;j<n;j++)
       {
        scanf("%d",&a[i][j]);
       }
   }
    scanf("%d",&qt);
    for(f=0;f<qt;f++)
    {s=0;
     scanf("%d",&k);
        for(i=0;i<m;i++)
         {
          for(j=0;j<n;j++)
            {
                if(a[i][j]==k)
                { s=1;
                printf("%d %d\n",i,j);
                break;
                }
                
            }
         }
         
         if(s==0)
         {
             printf("-1 -1\n");
             
         }
         
   }
   
   return 0;
}
