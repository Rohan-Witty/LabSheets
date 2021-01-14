#include <stdio.h>
int fun()
{
	 static int var = 10;
	  return var--;
}
int main()
{
	 for(fun(); fun(); fun())
		  printf("%d ", fun());
	  return 0;
}

