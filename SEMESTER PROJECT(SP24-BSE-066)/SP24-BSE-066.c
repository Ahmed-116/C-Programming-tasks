//SEMESTER PROJECT
//NAME:     M.AHMED
//ROLL NO: SP24 BSE 066

#include <stdio.h>
#include<string.h>


void addbooks();
void deledebooks();
void searchbooks();
void modifybooks();
void displaybooks();
void issuebooks();
void exit();

struct book
{

    char book_name[30];

};


void main()
{

    printf("___________________________\n");
    printf("Welcome to COMSATS LIBRARY\n");
    printf("___________________________\n");

    char another;
    do
    {

    char choice;

    printf("Enter a to add book:\n");
    printf("Enter d to delede book:\n");
    printf("Enter s to search book:\n");
    printf("Enter m to modify book:\n");
    printf("Enter p to display book:\n");
    printf("Enter i to issue book:\n");
    printf("Enter q to exit:\n");

    printf("Enter your choice:");
    scanf(" %c",&choice);

getchar();
    if(choice == 'a')
        addbooks();
    else if(choice== 'd' )
        deledebooks();
    else if(choice=='s')
        searchbooks();
     else if(choice=='m')
        modifybooks();
     else if(choice=='p')
        displaybooks();
     else if(choice=='i')
        issuebooks();
     else if(choice=='q')
         exit(0);

    printf("\nPress w to continue");

    another=getchar();
getchar();
    }while(another == 'w');


}
void addbooks()
{
    printf("\nINSIDE ADD BOOKS:\n");
    struct book b[5];
    FILE *fp;
    fp=fopen("D:/library.txt","w");

    int i;
    for(i=0;i<=4;i++)
    {
        printf("Enter Book name:\n");
        scanf("%s",b[i].book_name);
    }
        for(i=0;i<=4;i++)
        {

        fprintf(fp,"%s\n",b[i].book_name);
        }

    fclose(fp);


}
void deledebooks()
{
    printf("\nINSIDE DELEDE BOOKS:\n");
     struct book b[5];
    FILE *fp;
    fp=fopen("D:/library.txt","r");
    for(int i=0;i<=4;i++)
    {
    fscanf(fp,"%s",b[i].book_name);
    }
    char removebook[10];
    printf("Enter Book you want to delede:");
    gets(removebook);
    fclose(fp);
    fp=fopen("D:/library.txt","w");
    for(int i=0;i<=4;i++)
    {
        if(strcmp(removebook,b[i].book_name)==0)
            continue;
        else
            fprintf(fp,"%s\n",b[i].book_name);
    }
    fclose(fp);


}
void searchbooks()
{
    printf("\nINSIDE SEARCH BOOKS:\n");
     struct book b[5];
    FILE *fp;
    fp=fopen("D:/library.txt","r");

    int i;
    for(i=0;i<=4;i++)
    {
        fscanf(fp,"%s\n",b[i].book_name);
    }
    fclose(fp);
    int flag=0;
    char your_book[20];
    printf("Enter book you want to search:");
    gets(your_book);
    for(i=0;i<=4;i++)
    {
        if(strcmp(your_book,b[i].book_name)==0)
        {
            flag=1;
            printf("Book found");
            break;
        }
    }
        if(flag==0)


            printf("Book not found");


}

void modifybooks()
{
    printf("\nINSIDE MODIFY BOOKS:\n");
     struct book b[5];
    FILE *fp;
    fp=fopen("D:/library.txt","r");
    for(int i=0;i<=4;i++)
    {
    fscanf(fp,"%s",b[i].book_name);
    }
    char oldname[10];
    char newname[10];
    printf("Enter old book name:");
    gets(oldname);
    printf("Enter new book name:");
    gets(newname);
    for(int i=0;i<=4;i++)
    {
        if(strcmp(oldname,b[i].book_name)==0)
        {
            strcpy(b[i].book_name,newname);
            printf("Book name updated");
            break;
        }
    }
    fclose(fp);

    fp=fopen("D:/library.txt","w");
    for(int i=0;i<=4;i++)
    {
        fprintf(fp,"%s\n",b[i].book_name);

    }
    fclose(fp);
}
void displaybooks()
{
  printf("\nINSIDE DISPLAY BOOKS:\n");
    struct book b[5];
    FILE *fp;
    fp=fopen("D:/library.txt","r");

    int i;
    for(i=0;i<=4;i++)
    {
        fscanf(fp,"%s\n",b[i].book_name);
    }
    for(i=0;i<=4;i++)
    {
        printf("%s\n",b[i].book_name);
    }
    fclose(fp);



}

void issuebooks()
{
    printf("\nINSIDE ISSUE BOOKS:\n");
    int issue = 0;
     struct book b[5];
    FILE *fp;
    fp=fopen("D:/library.txt","r");

    int i;
    for(i=0;i<=4;i++)
    {
        fscanf(fp,"%s\n",b[i].book_name);
    }
    fclose(fp);
    char your_book[30];
    printf("Enter book you want to issue:");
    gets(your_book);
    for(i=0;i<=4;i++)
    {
        if(strcmp(your_book,b[i].book_name)==0)
        {
            strcat(b[i].book_name," 1");
            issue = 1;

            printf("Book issued");
            break;

        }
    }

    if(issue == 0){
        printf("Book not issued");
    }


}




void exit()
{
    exit(0);
}


