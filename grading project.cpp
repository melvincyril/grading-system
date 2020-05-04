#include<stdio.h>
main()
{
	printf("name of kid\n");
	char name[100];
	scanf("%s",&name);
	printf("how much did %s get:\n",name);
	float marks;
	scanf("%f",&marks);
	if(marks>40)
	{
		if(marks>=85 && marks<100)
		{
			printf("%s has got grade A",name);
		}
		if(marks<=84 && marks>=70)
		{
			printf("%s has got grade B",name);
		}
		if(marks<=69 && marks>=55)
		{
			printf("%s has got grade C",name);
		}
		if(marks<=54 && marks>=40)
		{
			printf("%s has got grade D",name);
		}
		if(marks>100)
		{
			printf("inavalid");
		}
	}
	else
	{
		printf("%s has got grade F better luck next time",name);
	}
}
