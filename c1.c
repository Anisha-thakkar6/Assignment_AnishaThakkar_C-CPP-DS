#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void assacc();

struct book
{
     int  b_no;
     char b_name[40];
     char b_author[40];
     int  price;
     int flag;
};
int main()
{
     struct book b[20];
     int    ch,n,i,j,t,an,count = 0;
     char   temp[40];
     do
     {
          
          printf("\n\n1.TO ADD BOOK DETAILS.");
          printf("\n2.TO DISPLAY BOOK DETAILS.");
          printf("\n3.TO DISPLAY BOOK OF GIVEN AUTHOR.");
          printf("\n4.TO LIST THE TITLE OF SPECIFIED BOOK.");
          printf("\n5.TO COUNT NUMBER OF BOOKS.");
          printf("\n6.TO LIST THE BOOKS IN THE ORDER OF ACCESSION NUMBER.");
          printf("\n7.TO EXIT.");
          printf("\n\nEnter Your Choice: ");
          scanf("%d",&ch);
          switch(ch)
          {
               case 1:
                    printf("\nHow Many Records You Want to Add: ");
                    scanf("%d",&n);
                    printf("\nAdd Details of %d Book\n",n);
                    for(i = 0 ; i < n ; i++)
                    {
                         printf("Enter Book No.     : ");
                         scanf("%d",&b[i].b_no);
                         printf("Book Name          : ");
                         scanf("%s",b[i].b_name);
                         printf("Enter Author Name  : ");
                         scanf("%s",b[i].b_author);
                         printf("Enter price : ");
                         scanf("%d",&b[i].price);
                         printf("Enter flag : (issued or not 1/0?) ");
                         scanf("%d",&b[i].flag);
                    }
                    break;
               case 2:
                    printf("\n\t\tDetails of All Book");
                    printf("\n-----------------------------------------------------------\n");
                    printf("Book No.\tBook Name\tAuthor Name\tPrice\tIssue Status");
                    printf("\n------------------------------------------------------------");
                    for( i = 0 ; i < n ; i++) printf("\n%d\t%s\t%s\t%d\t%d",b[i].b_no,b[i].b_name,b[i].b_author,b[i].price,b[i].flag);
                    printf("\n\n");
                    break;
             case 3:
                    printf("\nEnter Author Name: ");
                    scanf("%s",temp);
                    for( i = 0 ; i < n ; i++) if(strcmp(b[i].b_author,temp) == 0) printf("\n%s\n",b[i].b_name);
                    break;
               case 4 :
                    printf("\nEnter the accession number of book : ");
			        scanf("%d", &an);
			        for( i = 0 ; i < n ; i++) if(b[i].b_no == an) printf("\n%s\n",b[i].b_name);
	                break;
               case 5 :
                    for( i = 0 ; i < n ; i++) if(b[i].flag==0) count++;
                    printf("\nTotal Number of Books in Library : %d\n",count);
                    break;
               case 6 :
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(b[i].b_no>b[j+1].b_no)
			{
				t=b[i].b_no;
				b[i].b_no=b[j+1].b_no;
				b[j+1].b_no=t;
			}
		}
	}
	for(j=0;j<4;j++) printf("\nTitle of book is: %s ",b[j].b_name);
	break;
                case 7:
                exit(0);
          }
          }while(ch != 7);
     return 0;
}
