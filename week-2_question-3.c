#include <stdio.h>
#include <string.h>
 int main()
{
  	char str[100];
  	int i, count=1;
	printf("enter the string: ");
	gets(str);

	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
		{
			count=count+1;
		}
	}
    printf("%d",count);
	return 0;
}