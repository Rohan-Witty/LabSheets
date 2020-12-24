#include <stdio.h>
int main()
{
	int opt=0;
	while(1==1)
	{
		printf("Enter an option:\nOption-1: Convert from degree Celsius to deg. Fahrenheit\nOption-2: Convert from deg. Fahrenheit to deg. Celsius\nOption-3: Quit the program execution\n");
		getchar();
		while(opt<1 || opt>3)
			scanf("%d",&opt);
		float Tf=-500, Tc=-300;
		switch(opt)
		{
			case 1:
				
				while(Tc<-273.15)
				{	
					printf("Enter T in Celsius(>-273.15)\n");
					scanf("%f",&Tc);
					getchar();
				}	
				Tf = 1.8*Tc + 32;
				printf("Temp in F is %f",Tf);
				break;
			case 2:
				break;
				while(Tf<-459.67)
				{
					printf("Enter T in Farhenheit(>-459.67)\n");
					scanf("%f",&Tf);
					getchar();
				}	
				Tc = (Tf-32)/1.8;
				printf("Temp in C is %f",Tc);
			case 3:
				return 0;
		}
	}
}

