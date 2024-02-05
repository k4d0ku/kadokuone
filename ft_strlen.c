#include <stdio.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}


int main () 
{
 char str [] = "HelloWorld";
	int sonuc = ft_strlen(str);
	printf ("Uzunluk %d", sonuc);
	return 0;
}
