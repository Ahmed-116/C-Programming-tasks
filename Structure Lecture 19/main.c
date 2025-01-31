#include <stdio.h>
struct book
{
    char bname[26];
    float price;
    int pages;
};

void main()
{
   struct book b1;
   printf("Enter book name price and pages\n");
   scanf("%s %f %d",b1.bname,&b1.price,&b1.pages);
   printf("%s %f %d",b1.bname,b1.price,b1.pages);
}

/*
#include <stdio.h>
struct book
{
    char bname[26];
    float price;
    int pages;
};

void main()
{
    struct book b1,b2;
    strcpy(b2.bname,"Mall");
    b2.price=50.0;
    b2.pages=100;
   //strcpy(b1.bname,b2.bname);
    //b1.price=b2.price;
    //b1.pages=b2.pages;
    b1=b2;
    printf("%s %f %d\n",b1.bname,b1.price,b1.pages);
    printf("%s %f %d",b2.bname,b2.price,b2.pages);
}
*//*
#include <stdio.h>
struct book
{
    char bname[26];
    float price;
    int pages;
};

void main()
{
    struct book b1={"Urdu",100.0,50};
    printf("%s,%f,%d\n",b1.bname,b1.price,b1.pages);
    printf("%d,%d,%d",b1.bname,&b1.price,&b1.pages);
}*/
/*
#include <stdio.h>
struct book
{
    char bname[26];
    float price;
    int pages;
};

void main()
{
    struct book b[5];
    int i;
    for(i=0;i<=4;i++)
    {
        printf("Enter book name price and pages:\n");
        scanf("%s %f %d",b[i].bname,&b[i].price,&b[i].pages);

    }
     for(i=0;i<=4;i++)
    {

     printf("%s %f %d\n",b[i].bname,b[i].price,b[i].pages);
    }
}

*/
