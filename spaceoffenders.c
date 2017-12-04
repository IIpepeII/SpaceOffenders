#include <stdio.h>
#include <stdlib.h>

void clrscr()
{
    system("clear"); //linux terminal
}

void mainmenu()
{
    int choice;
    clrscr();
    
    printf("   ((##          ##))\n");
    printf(" (((  ##      ## )))\n");                                               
    printf("((((   ########   ))))\n");
    printf("   ################\n");
    printf("  #####   ###   ####\n");
    printf("######################\n");
    printf("##  ##############  ##\n");
    printf("##  ##          ##  ##\n");
    printf("      ####  ####      \n\n\n");

	printf("Petya's Space Offenders\n\n\n");
	printf("Press any key to continue...\n\n");

	printf("***************\n");
	printf("1. LETS FIGT!  *\n");
	printf("2. OPTIONS     *\n");
	printf("3. HIGH SCORE  *\n");
	printf("9. EXIT        *\n");
	printf("***************\n");

	scanf("%d", &choice);
		
	switch (choice) {
		case 1:
            clrscr();
		    mainmenu();
			break;
		case 2: 
		    clrscr();
		    mainmenu();
			break;
		case 3:
		    clrscr();
		    mainmenu();
		    break;
		case 9:
			system("exit");
			break;
		default:
			clrscr();
			mainmenu();
			break;
		}
}

int main()
{

	mainmenu();

}