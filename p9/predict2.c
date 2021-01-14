#include <stdio.h>
int main()
{
	 int x = 2;
	  static int y = x;
	   if(x == y)
		    printf("Equal");
	    else if(x > y)
		     printf("X");
	     else
		      printf("Y");
	      return 0;
}
