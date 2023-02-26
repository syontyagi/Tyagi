#include "displaymatrix.h"

void  displaybox1(char num)
{
	printf("\033[1;1H");
	printf("     ");
	printf("\033[2;1H");
	printf("    |");  
	printf("\033[3;1H");
	printf("  %c |",num);
	printf("\033[4;1H");
	printf(" ___|\n");
}

void  displaybox2(char num)
{
	printf("\033[1;6H");
	printf("     ");
	printf("\033[2;6H");
	printf("|   |");  
	printf("\033[3;6H");
	printf("| %c |",num);
	printf("\033[4;6H");
	printf("|___|\n");
}

void  displaybox3(char num)
{
	printf("\033[1;11H");
	printf("     ");
	printf("\033[2;11H");
	printf("|    ");  
	printf("\033[3;11H");
	printf("| %c  ",num);
	printf("\033[4;11H");
	printf("|___ \n");
}

void  displaybox4(char num)
{
	printf("\033[5;1H");
	printf(" ___\n");
	printf("\033[6;1H");
	printf("    |\n");  
	printf("\033[7;1H");
	printf("  %c |\n",num);
	printf("\033[8;1H");
	printf(" ___|\n");
}

void  displaybox5(char num)
{
	printf("\033[5;6H");
	printf(" ___");
	printf("\033[6;6H");
	printf("|   |");  
	printf("\033[7;6H");
	printf("| %c |",num);
	printf("\033[8;6H");
	printf("|___|\n");
}

void  displaybox6(char num)
{
	printf("\033[5;11H");
	printf(" ___ ");
	printf("\033[6;11H");
	printf("|    ");
	printf("\033[7;11H");
	printf("| %c  ",num);
	printf("\033[8;11H");
	printf("|___ \n");
}

void  displaybox7(char num)
{
	printf("\033[9;1H");
	printf(" ___");
	printf("\033[10;1H");
	printf("    |");  
	printf("\033[11;1H");
	printf("  %c |",num);
	printf("\033[12;1H");
	printf("    |");
}

void  displaybox8(char num)
{
	printf("\033[9;6H");
	printf(" ___");
	printf("\033[10;6H");
	printf("|   |");  
	printf("\033[11;6H");
	printf("| %c |",num);
	printf("\033[12;6H");
	printf("|   |\n");
}

void  displaybox9(char num)
{
	printf("\033[9;11H");
	printf(" ___");
	printf("\033[10;11H");
	printf("|    ");  
	printf("\033[11;11H");
	printf("| %c  ",num);
	printf("\033[12;11H");
	printf("|    \n");
}

int displaybox(int pos, char num)
{
	switch (pos) {
		case 1:
			displaybox1(num);
			break;
		case 2:
			displaybox2(num);
			break;
		case 3:
			displaybox3(num);
			break;
		case 4:
			displaybox4(num);
			break;
		case 5:
			displaybox5(num);
			break;
		case 6:
			displaybox6(num);
			break;
		case 7:
			displaybox7(num);
			break;
		case 8:
			displaybox8(num);
			break;
		case 9:
			displaybox9(num);
			break;
		default:
			printf("THINK outside the box, PLAY inside it\n");
	}
	return 0;
}

int displayallbox(int arr[], int len) 
{
        int pos;
	printf("\033[2J");
	printf("\033[H");
        for(pos=0; pos<len; pos++) {
                displaybox(pos+1, arr[pos]);
        }
        return 0;
}

