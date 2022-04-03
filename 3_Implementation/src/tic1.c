#include "fun.h"
#include "moviedetail.c"
#include<string.h>

struct movie_detail person[300];
void show1(int choice,char name[10],int id1,int pr)
{
        int count = 0;
		system("cls");
		printf("\n\n");
        printf("\t Booking ID : %d \t\t\tShow Name : Harry Potter-7\n",id1);
        printf("\t Customer  : %s\n",name);
        printf("\t\t\t                                          Date: 25-03-2022\n");
        printf("\t                                              Time      : 09:00pm\n");
        printf("\t                                              Hall      : 01\n");
        printf("\t                                              seats No. : %d  \n",choice);
        printf("\t                                              price . : %d  \n\n",pr);
		person[count].id=id1;
        printf("\tThankYou For Booking a Ticket\n");
        return;
}