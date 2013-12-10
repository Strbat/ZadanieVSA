#include <stdio.h>



int sucetradu(int n)
{
     if(n==0){ return 0; }
     n= n + sucetradu(n-1);
	 return n;
}

int main()
{
    int cislo;
    printf("Zadaj cislo\n");
    scanf("%d",&cislo);

	while(cislo>=0)
	{
    printf("sucet radu cisla %d je %d\n",cislo,sucetradu(cislo));
	printf("Zadaj cislo\n");
	scanf("%d",&cislo);
	}
	return 0;
}
