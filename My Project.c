#include<stdio.h>

int Add_info()
{
    char name[30];
    FILE *fptr;
    int number;

    float intake;
    int section;
    fptr = fopen("fmp.txt", "w+");/*  open for writing */
    if (fptr == NULL)
    {
        printf("File does not exists \n");
        return;
    }
    printf("\n\t\t\t\t\t\t\t Enter Movie Number: ");
    scanf("%d", &number);
    fprintf(fptr, "Movie Number = %d\n", number);
    printf("\n \t\t\t\t\t\t\t Enter Movie Name: ");
    scanf("%s", name);
    fprintf(fptr, "Movie Name= %s\n", name);
    printf("\n \t\t\t\t\t\t\t Enter Duration in Hours: ");
    scanf("%f", &intake);
    fprintf(fptr, "Duration = %.2f\n", intake);
    printf("\n \t\t\t\t\t\t\t Enter the Sequel:");
    scanf("%d", &section);
    fprintf(fptr, "Sequel= %d\n\t", section);
    fclose(fptr);

    FILE *fp;
   char buff[255];//creating char array to store data of file
   fp = fopen("fmp.txt", "r");
   while(fscanf(fp, "%s", buff)!=EOF){
   printf("%s ", buff);
   }
   fclose(fp);
}


int show_list()
{
    FILE *fp;
   char buff[255];//creating char array to store data of file
   fp = fopen("fmp.txt", "r");
   while(fscanf(fp, "%s", buff)!=EOF){
   printf("%s \n", buff);
   }
   fclose(fp);
}


int train_Schedule()
{
    printf("\n \t\t\t\t\t\t\t Administration of this site: \n");
    printf("\t\t\t\t\t\t\t 1. ADD Info \n");
    printf("\t\t\t\t\t\t\t 2. Previous info \n");
    printf("\t\t\t\t\t\t\t 3. Upload New Movie/Series \n");
    printf("\t\t\t\t\t\t\t 4. Delete \n");

    int ch;
    printf("\n \t\t\t\t\t\t\t Enter your Choice: ");
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
        Add_info();
        break;
    case 2:
        show_list();
        break;

    default:
        printf("Wrong Input\n");

    }

}


int User()
{
    printf("Nothing\n");

}

int Admin()
{
    printf("\n \t\t\t\t\t\t\t ADMIN PANEL OF THE SITE: \n \n");
    printf("\t\t\t\t\t\t\t 1. Administration Menu \n");
    printf("\t\t\t\t\t\t\t 2. Premium Purchase \n");
    printf("\t\t\t\t\t\t\t 3. User Account Information \n");
    printf("\t\t\t\t\t\t\t 4. My ACCOUNT\n");
    printf("\t\t\t\t\t\t\t 5. Complain \n");
    printf("\t\t\t\t\t\t\t 6. Emergency Contact \n");
    printf("\t\t\t\t\t\t\t 7. Exit \n");

    int ch;
    printf("\n \t\t\t\t\t\t\t Enter your Choice:");
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
        train_Schedule();
        break;
    case 2:
        train_Schedule();
        break;

    default:
        printf("Wrong Input\n");

    }
}

int main()
{
    printf("\n    \t\t\t\t\t\t\t PROJECT NAME : Online Streaming Platform\n\n\n\n");

    printf("\n|||         |||\t |||||||| |||||||||||      ||       |||          |||  ||||||||||| ||||||||||||    ||||||||||     ||       || |||||||||| ||||||||||   |||||||| |||||||||||        ");
    printf("\n|| ||     || ||\t ||           ||          ||||      || ||      || ||  ||       || ||          ||  ||        ||   ||       || ||      || ||              ||    ||                 ");
    printf("\n||   ||  ||  ||\t ||           ||         ||  ||     ||   ||  ||   ||  ||       || ||          ||  ||         ||  ||       || ||      || ||              ||    ||                 ");
    printf("\n||     ||    ||\t |||||        ||        ||||||||    ||     ||     ||  ||       || || ||||||| ||   ||       ||    ||||||||||| ||      || || |||||||      ||    || ||||||||        ");
    printf("\n||           ||\t ||           ||       ||      ||   ||            ||  ||       || ||  ||          || ||||||      ||       || ||      ||          ||     ||             ||        ");
    printf("\n||           ||\t ||           ||      ||        ||  ||            ||  ||       || ||    |||       ||             ||       || ||      ||          ||     ||             ||         ");
    printf("\n||           ||\t ||||||||     ||     ||          || ||            ||  ||||||||||| ||      ||||    ||             ||       || |||||||||| |||||||||||  ||||||||  ||||||||||        \n");

    printf("\n \t\t\t\t\t\t\t\t  1. USER LOGIN\n");
    printf("\n \t\t\t\t\t\t\t\t  2. ADMIN LOGIN\n");
    int ch;
    printf("\n \t\t\t\t Enter Your Choice: ");
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
        User();
        break;
    case 2:
        Admin();
        break;

    default:
        printf("Wrong Input! try again\n");
    }

    return 0;
}
