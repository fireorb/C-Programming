/*
#include<stdio.h>
int main(void)
{
	int i,year;
	int bulan[12];
	printf("Masukan tahun lahir untuk membuat password cracking:");
	scanf("%d", &year);
	for(bulan[1]=0;bulan[1]<31;bulan[1]++)
		printf("%d01%02d\n",year,bulan[1]+1);
	for(bulan[2]=0;bulan[2]<28;bulan[2]++)
		printf("%d02%02d\n",year,bulan[2]+1);
	for(bulan[3]=0;bulan[3]<31;bulan[3]++)
		printf("%d03%02d\n",year,bulan[3]+1);
	for(bulan[4]=0;bulan[4]<30;bulan[4]++)
		printf("%d04%02d\n",year,bulan[4]+1);
	for(bulan[5]=0;bulan[5]<31;bulan[5]++)
		printf("%d05%02d\n",year,bulan[5]+1);
	for(bulan[6]=0;bulan[6]<30;bulan[6]++)
		printf("%d06%02d\n",year,bulan[6]+1);
	for(bulan[7]=0;bulan[7]<31;bulan[7]++)
		printf("%d07%02d\n",year,bulan[7]+1);
	for(bulan[8]=0;bulan[8]<31;bulan[8]++)
		printf("%d08%02d\n",year,bulan[8]+1);
	for(bulan[9]=0;bulan[9]<30;bulan[9]++)
		printf("%d09%02d\n",year,bulan[9]+1);
	for(bulan[10]=0;bulan[10]<31;bulan[10]++)
		printf("%d10%02d\n",year,bulan[10]+1);
	for(bulan[11]=0;bulan[11]<30;bulan[11]++)
		printf("%d11%02d\n",year,bulan[11]+1);
	for(bulan[12]=0;bulan[12]<31;bulan[12]++)
		printf("%d12%02d\n",year,bulan[12]+1);
return 0;
}
*/

#include<stdio.h>

int main(void)
{
	int i,bulan[3],year,a,b;
	printf("Masukan tahun lahir untuk membuat password cracking:");
	scanf("%d", &year);
	/*
	printf("Anda mau membuat program seperi A atau B ex(A=yymmdd or B=ddmmyy)");
	scanf("%d",&a);
	
	if( a == a ) */
	{
		for(i=1;i<=12;i++)
		{
			switch(i)
			{
				case 2:
					for(bulan[0]=0;bulan[0]<28;bulan[0]++)
						printf("%d%02d%02d\n",year,i,bulan[0]+1);
				case 4:
				case 6:
				case 9:
				case 11:
					for(bulan[1]=0;bulan[1]<30;bulan[1]++)
						printf("%d%02d%02d\n",year,i,bulan[1]+1);
				 default:
				 	for(bulan[2]=0;bulan[2]<31;bulan[2]++)
						printf("%d%02d%02d\n",year,i,bulan[2]+1);
			}
		}
	}
	/*
	else if {
		for(i=1;i<=12;i++)
		{
			switch(i)
			{
				case 2:
					for(bulan[0]=0;bulan[0]<28;bulan[0]++)
						printf("%02d%02d%d\n",bulan[0]+1,i,year);
				case 4:
				case 6:
				case 9:
				case 11:
					for(bulan[1]=0;bulan[1]<30;bulan[1]++)
						printf("%02d%02d%d\n",bulan[1]+1,i,year);
				 default:
				 	for(bulan[2]=0;bulan[2]<31;bulan[2]++)
						printf("%02d%02d%d\n",bulan[2]+1,i,year);
			}
		}
	}*/
}
