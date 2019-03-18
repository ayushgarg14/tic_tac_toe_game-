#include<stdio.h>
#include<conio.h>
main()
{
int i,j,k,l,m,b,d,n,o,temp=0;
char a[3][3]={'-','-','-','-','-','-','-','-','-'},c,r;
clrscr();
for(i=0;i<9;i++)
{

scanf("%d",&b);
clrscr();
if(b<=9)
{
switch (b)
{
 case 1:
j=0;
k=0;
break;
case 2:
j=0;
k=1;
break;
case 3:
j=0;
k=2;
break;
case 4:
j=1;
k=0;
break;
case 5:
j=1;
k=1;
break;
case 6:
j=1;
k=2;
break;
case 7:
j=2;
k=0;
break;
case 8:
j=2;
k=1;
break;
case 9:
j=2;
k=2;
break;
   }

if(i%2==0)
   a[j][k]='*';
   else
   a[j][k]='0';

   for(l=0;l<3;l++)
   {
   for(m=0;m<3;m++)
   {
    printf("%c ",a[l][m]);
   }
   printf("\n");
   }

	temp=0;
	d=0;
   for(n=0;n<3;n++)
   {
     c=a[d][d];

   for(o=0;o<3;o++)
   {
   if(a[n][o]==c)
   temp++;
 else
  break;
  }
   if(temp==3)
   break;
   else
  { temp=0;
   d++;}
   }
     if(temp!=3)
   {
	temp=0;
	d=0;
   for(n=0;n<3;n++)
   {
     c=a[d][d];

   for(o=0;o<3;o++)
   {
   if(a[o][n]==c)
   temp++;
 else
  break;
  }
   if(temp==3)
   break;
   else
  { temp=0;
   d++;}
   }
		}
	   if(temp!=3)
  { c=a[0][0];
    if(a[0][0]==a[1][1]&&a[1][1]==a[2][2])
    temp=3;
    else
    temp=0;
    }
  if(temp!=3)
  { c=a[1][1];
    if(a[0][2]==a[1][1]&&a[1][1]==a[2][0])
    temp=3;
    else
    temp=0;
    }
    if(temp==3&&c!='-')
    { printf("winner is %d ",i%2+1);

break;

		 }
    else
if (i<9)
     printf("play next");
	else
	    printf("game end");
    }}
    getch();
    }
