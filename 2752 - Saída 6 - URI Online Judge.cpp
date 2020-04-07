#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	char palavra[] = "AMO FAZER EXERCICIO NO URI";

	printf("<%s>\n" , &palavra);
	printf("<%30s>\n" , &palavra);
	printf("<%.20s>\n" , &palavra);
    printf("<%-20s>\n" , &palavra);
    printf("<%-30s>\n" , &palavra);
    printf("<%.30s>\n" , &palavra);
    printf("<%30.20s>\n" , &palavra);
    printf("<%-30.20s>\n" , &palavra);

	return 0;
}
