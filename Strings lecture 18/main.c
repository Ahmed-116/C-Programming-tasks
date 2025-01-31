/*
#include<stdio.h>
#include<string.h>

void main()
{
    char name[]={'R','a','o','\0'};
    char name2[]="Rao";
    printf("%s\n",name);
    printf("%s",name2);
}
*/
/*
#include<stdio.h>
#include<string.h>

void main()
{
    char name[4]="Rao";
    int i;
    for(i=0;i<3;i++)
    {
        //printf("%c,%d\n",name[i],&name[i]);
        printf("%c,%d\n",*(name+i),(name+i));

    }
}
*/
/*
#include<stdio.h>
#include<string.h>

void main()
{
    char name[4]="Rao";
    int i;
    char *ptr;
    ptr=name;
for(i=0;i<3;i++)
{
    printf("%c,%d\n",*ptr,ptr);
            ptr++;
}
}
*/
/*#include<stdio.h>
#include<string.h>

void main()
{
    char name[4]="Rao";
    printf("%s",name);
}
*/
/*
#include<stdio.h>
#include<string.h>

void main()
{
    char name[4];
    printf("Enter your name:");
    scanf("%s",name);
    printf("%s",name);
}
*/
/*
#include<stdio.h>
#include<string.h>

void main()
{
    char name[4];
    puts("Enter name:");
    gets(name);
    puts(name);
}
*/
/*
#include<stdio.h>
#include<string.h>
void main()
{
    char name[10]="Rao Adeel";
    int i,j;
    i=strlen(name);
    j=strlen("Tarzan");
    printf("%d,%d",i,j);
   printf("\n%d",strlen(name));
}*/
/*
#include<stdio.h>
#include<string.h>
void main()
{
    char source[10]="Rao";
    char ahmed[30]="ahmed";
    char target[10];
    strcpy(target,source);//actually this is used to copy
    printf("%s,%s\n",target,ahmed);
    strcpy(source,ahmed);
     printf("%s,%s\n",source,ahmed);
     strcat(source,ahmed);//this helps in understanding diffrence between strcat and strcpy
     printf("%s,%s",source,ahmed);
}
*/
/*
#include<stdio.h>
#include<string.h>
void main()
{
    char source[10]="Rao";
    char target[10]="Adeel";
    strcat(target,source);
    printf("%s,%s",source,target);
}
*/

#include<stdio.h>
#include<string.h>
void main()
{
    char str1[10]="Ferry";
    char str2[10]="Jerry";
    int i;
    i=strcmp(str1,str2);
    //i=strcmp(str1,"Jerry");
    printf("%d\n",i);

    if(i==0)
        printf("equal");
    else
        printf("Not");
}

