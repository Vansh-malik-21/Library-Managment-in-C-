#include<stdio.h>

struct library{
char bn[30];
char wn[30];
int page;
int price;
};
void main()
{
    int i,c=0,ch,p;
    char ian[30];
    struct library l[100];
    do
    {
    clrscr();
    printf("\n###Welcome to E-Library###");
    printf("\n\n1.Add a new book information\n2.Display all books information\n3.Display book of a specific author\n4.Number of books in library\n5.Exit\n\t6.Enter your choice:");
    scanf("%d",&ch);
    if(ch==1)
    {
    printf("\nEnter book name:");
    scanf("%s",&l[c].bn);
    printf("\nEnter author name:");
    fflush(stdin);
    scanf("%s",&l[c].wn);
    printf("\nEnter no. of pages in the book:");
    scanf("%d",&l[c].page);
    printf("\nEnter price of book:");
    scanf("%d",&l[c].price);
    c++;
    }
    else if(ch==2)
    {
    printf("\nB.Name\t\tA.name\tpage\tPrice");
    for(i=0;i<c;i++)
    {
    printf("\n");
    printf("%s\t%s\t%d\t%d",l[i].bn,l[i].wn,l[i].page,l[i].price);
    }
    getch();
    }
    else if(ch==3)
    {
    printf("\nEnter author name which book is to be searched:");
    scanf("%s",&ian);
    for(i=0;i<c;i++)
    {
     p=strcmp(l[i].wn,ian);
     if(p==0){
     break;
     }
    }
    if(p==0)
    {
    printf("\nB.Name\t\tA.name\tpage\tPrice");
    printf("\n%s\t%s\t%d\t%d",l[i].bn,l[i].wn,l[i].page,l[i].price);
    }
    else
    {
    printf("\n Invalid author name");
    }
    getch();
    }
    else if(ch==4)
    {
    printf("\nNumber of books in library:%d",c);
    getch();
    }
    }while(ch!=5);
}