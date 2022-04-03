#include "fun.h"
int changepriceticket(int pr)
{
	char pass[10],pak[10]="admin";
	printf("Enter the password to change price of ticket: ");
	scanf("%s",&pass);
	if (strcmp(pass,pak)==0)
	{
		printf("Please enter new price: ");
		scanf("%d",&pr);
		printf("Price Updated Successfully: ");
		system("PAUSE");
		system("CLS");
	}
	else
		printf("The entered password is wrong! ");
	return pr;
}