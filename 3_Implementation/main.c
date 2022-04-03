#include<stdio.h>
#include<stdlib.h>
#include"fun.h"
#include<string.h>
#include "unity.h"
int main()
{
    int count = 0;
	int **seatno,ch,pr=450,select,i;
	seatno=(int **)calloc(100,sizeof(int*));
	for (i=0;i<3;i++)
		*(seatno+i)=(int *)calloc(100,sizeof(int));
	int x;
	char pass[11],pak[11]="user";
while(x!=3)
	{
        a:ch=enterchoice();
		switch(ch)
		{
		    int ch;
		    int y;
			case 1:
			    b:printf("reserved tickets:\n");
                printf("edit price ticket:\n");
                printf("Exit System:\n");
	            scanf("%d", &ch);
	            switch(ch){
            case 1:
                pr=changeprt(pr);
                goto b;
				break;
            case 2:
                details();
                goto b;
				break;
            case 3:
                y=3;
                goto a;
                break;
             default:
				printf("no other choice\n");
				break;
	            }
	        case 2:
                c:
                printf("login:\n");
                printf("purchase ticket:\n");
                printf("cancel seat:\n");
                printf("Exit System\n");
                scanf("%d",&ch);
                switch(ch){
                case 1:
                    printf("Enter password");
                    scanf("%s",&pass);
                    if (strcmp(pass,pak)==0){
                        select=ListofMovies();
                        reserveticket(seatno[select-1],pr,select);
                        count++;
                    }
                    else
                        printf("Wrong Password\n");
                    goto c;
                    break;
                case 2:
                    printf("Enter your password");
                    scanf("%s",&pass);
                    if (strcmp(pass,pak)==0){
                        select=selectmovie();
                        cancelticket(seatno[select-1]);
                    }
                    else
                    printf("Wrong Password\n");
                    goto c;
                    break;
				case 3:
                goto a;
                break;
             default:
				printf("no other choice\n");
				break;
				    }
			case 3:
				x=3;
				break;
			default:
				printf("no other choice\n");
				break;
		}
	}
}