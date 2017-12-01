#include <stdio.h>

int main(void)
{

	int x, dan,student;
	printf("Masukan Tahun ajaran untuk membuat cracking:");
	scanf("%d", &student);
	for (dan = 0; dan < 99; dan++)
	{
		for (x = 0; x < 99; x++)
			{ printf("%d%02d%02d\n",student, dan+1, x+1);}
	}
	return 0;
}
