#include <stdio.h>
int main()
{
	int days;//Declaring variable days to store number of days
	printf("Enter number of days:\n"); //Asking user to enter
	scanf("%d", &days); //Taking input
	printf("%d(year), %d(month), %d(days)\n", days/360, (days%360)/30, days%30); //Printing without storing months or days
	return 0;
}
