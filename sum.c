#include <stdio.h>

int main()
{
  int size;
  printf("enter how many elements to store");
  scanf("%d",&size);
  int a[size];
  for(int i=0;i<=size-1;i++)
  {
      printf("enter the %d element\n",(i+1) );
      scanf("%d",&a[i]);
  }
  int sum=0;
  for(int i=0;i<=size-1;i++)
  {
      if(a[i]!=13)
      {
          sum=sum+a[i];
          
      }
  }
  printf("the sum is %d\n",sum);
  if(sum==0)
  {
      printf("-1");
  }
  else
  {
      printf("%d",sum) ;
      }
  }
  
    


    

+
