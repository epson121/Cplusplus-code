#include <stdio.h>
int v[1000001]={0};
int main()
{
int n,i,j,a;
scanf("%d",&n);
for (i=0;i<n; i++)
{ 
    scanf("%d",&a); 
    v[a]++; 
}
for (n=0;n<=1000000; n++) 
    for (i=0;i<v[n];i++) 
        printf("%d",n);
scanf("%d",&a); 
return 0;
}
