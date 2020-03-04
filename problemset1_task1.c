#include <stdio.h>
#include <string.h>

void main()
{
  char str[10];
  int i,j,num,n,k;
  scanf("%s", str);
  
  for(i=0; str[i]!='\0'; )
  {
      for(j=i+1; str[j]>='0'&& str[j]<='9'; j++)
      {
          num = (str[j]>='1' && str[j]<='9') ? (int)str[j]-48 : 0;
          n = (j==i+1) ? num :(n*10) + num;
      }
      
      for(k=0; k<n; k++)
      {
          printf("%c", str[i]);
      }
      i=j; 
  }
}
