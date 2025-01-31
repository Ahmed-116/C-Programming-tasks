/*#include<stdio.h>
#include<conio.h>
struct emp
{
    char name[30];
    int age;
    float bs;
};
int main()
{
    FILE *fp;
    char another='y';
    struct emp e;
    fp=fopen("D:/MA.txt","w");
    if(fp==NULL)
    {
        puts("Cannot open file");
        exit(1);
    }
    while(another=='y')
    {
        printf("\nEnter Name,Age and Basic salery:\n");
        scanf("%s%d%f",e.name,&e.age,&e.bs);
        fprintf(fp,"%s %d %f\n",e.name,e.age,e.bs);
        printf("Add another record(y/n)");
        fflush(stdin);
        another=getche();
    }
    fclose(fp);
    return 0;
}
*/



/*#include<stdio.h>
#include<conio.h>
struct emp
{
    char name[30];
    int age;
    float bs;
};
int main()
{
    FILE *fp;
    char another='y';
    struct emp e;
    fp=fopen("D:/MA.txt","r");
    if(fp==NULL)
    {
        puts("Cannot open file");
        exit(1);
    }
    while(fscanf(fp,"%s %d %f",e.name,&e.age,&e.bs)!=EOF)

        printf("%s %d %f\n",e.name,e.age,e.bs);

    fclose(fp);
    return 0;
}


*/
