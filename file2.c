#include<stdio.h>
void main()
{
	int linecount,c;
	while((c=getchar())!= EOF)
	{
     if(c=='\n')
     	++linecount;
     printf("%s",c);

	}
	printf("%d",linecount);
}