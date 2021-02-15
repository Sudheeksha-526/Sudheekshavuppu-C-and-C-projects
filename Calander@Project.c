#include<stdio.h>
#include<windows.h>

void SetColorAndBackground(int ForgC,int BackC);
int Finding_weekDay(int year)
{
    int Week_Day;
    Week_Day = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year) / 400) + 1) % 7;
    return Week_Day;
}
int main()
{


int i,year,month,Week_Day,DaysInMonth,StartingDay,w,d;
 int a[20];
int M[]={0,3,0,3,2,3,2,3,3,2,3,2};

char *months[]={"January","February","march","April","May","June","July","August","October","September","October","November","December"};
int Monthdays[]={31,28,31,30,31,30,31,31,30,31,30,31};


printf("enter month and year ");
scanf("%d%d",&month,&year);

if((year%4==0&&year%100!=0)||(year%400==0))
{
    Monthdays[1]=29;
}
StartingDay=Finding_weekDay(year);
DaysInMonth=Monthdays[month-1];
SetColorAndBackground(15,13);
printf("\t\t%s %d\t\t\n",months[month-1],year);
SetColorAndBackground(15,0);
printf("-----------------------------------------------------\n");
SetColorAndBackground(12,0);
printf("\n  SUN");
SetColorAndBackground(15,0);
 printf("   MON  TUE  WED  THURS  FRI  SAT\n");
printf("-----------------------------------------------------\n");

for(i=0;i<12;i++)
{
 if((Monthdays[i-1]==29)&&(StartingDay<=6))
{
    StartingDay=StartingDay+1;
}
else if(StartingDay<=6)
{
    StartingDay=StartingDay+M[i];

}

     if(StartingDay>6)
    {
    d=StartingDay-6;
    StartingDay=0;
    StartingDay=StartingDay+d-1;
    }

a[i]=StartingDay;
}

switch(month)
{
case 1:

       for(w=0;w<a[0];w++)
       {

           printf("    -");
       }

         for(Week_Day=1;Week_Day<=Monthdays[month-1];Week_Day++)
        {

        if(w==0)
        {
         SetColorAndBackground(12,0);
          printf("%5d",Week_Day);

        }
     else
    {
        SetColorAndBackground(15,0);
        printf("%5d",Week_Day);
    }

            if(++Week_Day>6)
            {
                printf("\n");
                Week_Day=0;
            }
        }

break;


case 2:

  for(w=0;w<a[1];w++)
        {
           printf("    -");
       }

         for(Week_Day=1;Week_Day<=Monthdays[month-1];Week_Day++)
        {
            if(w==0)
        {
         SetColorAndBackground(12,0);
          printf("%5d",Week_Day);

        }
     else
    {
        SetColorAndBackground(15,0);
        printf("%5d",Week_Day);
    }

            if(++w>6)
            {
                printf("\n");
                w=0;
            }

        }

 break;


case 3:
  for(w=0;w<a[2];w++)
        {
           printf("    -");
       }

         for(Week_Day=1;Week_Day<=Monthdays[month-1];Week_Day++)
        {

            if(w==0)
        {
         SetColorAndBackground(12,0);
          printf("%5d",Week_Day);

        }
     else
    {
        SetColorAndBackground(15,0);
        printf("%5d",Week_Day);
    }
            if(++w>6)
            {
                printf("\n");
                w=0;
            }

        }

break;
case 4:

  for(w=0;w<a[3];w++)
        {
         printf("    -");
        }

         for(Week_Day=1;Week_Day<=Monthdays[month-1];Week_Day++)
        {

             if(w==0)
        {
         SetColorAndBackground(12,0);
          printf("%5d",Week_Day);

        }
     else
    {
        SetColorAndBackground(15,0);
        printf("%5d",Week_Day);
    }
            if(++w>6)
            {
                printf("\n");
                w=0;
            }

        }
 break;
case 5:
     for(w=0;w<a[4];w++)
        {
          printf("    -");
       }

         for(Week_Day=1;Week_Day<=Monthdays[month-1];Week_Day++)
        {

             if(w==0)
        {
         SetColorAndBackground(12,0);
          printf("%5d",Week_Day);

        }
     else
    {
        SetColorAndBackground(15,0);
        printf("%5d",Week_Day);
    }
            if(++w>6)
            {
                printf("\n");
                w=0;
            }

        }
    break;
case 6:
     for(w=0;w<a[5];w++)
        {
    printf("    -");
       }

         for(Week_Day=1;Week_Day<=Monthdays[month-1];Week_Day++)
        {

            if(w==0)
        {
         SetColorAndBackground(12,0);
          printf("%5d",Week_Day);

        }
     else
    {
        SetColorAndBackground(15,0);
        printf("%5d",Week_Day);
    }
            if(++w>6)
            {
                printf("\n");
                w=0;
            }

        }
    break;
case 7:
     for(w=0;w<a[6];w++)
        {
           printf("    -");
       }

         for(Week_Day=1;Week_Day<=Monthdays[month-1];Week_Day++)
        {

            if(w==0)
        {
         SetColorAndBackground(12,0);
          printf("%5d",Week_Day);

        }
     else
    {
        SetColorAndBackground(15,0);
        printf("%5d",Week_Day);
    }
            if(++w>6)
            {
                printf("\n");
                w=0;
            }

        }
    break;

case 8:
    for(w=0;w<a[7];w++)
        {
          printf("    -");
       }

         for(Week_Day=1;Week_Day<=Monthdays[month-1];Week_Day++)
        {

             if(w==0)
        {
         SetColorAndBackground(12,0);
          printf("%5d",Week_Day);

        }
     else
    {
        SetColorAndBackground(15,0);
        printf("%5d",Week_Day);
    }
            if(++w>6)
            {
                printf("\n");
                w=0;
            }

        }
    break;
case 9:
    for(w=0;w<a[8];w++)
        {
           printf("    -");
       }

         for(Week_Day=1;Week_Day<=Monthdays[month-1];Week_Day++)
        {

             if(w==0)
        {
         SetColorAndBackground(12,0);
          printf("%5d",Week_Day);

        }
     else
    {
        SetColorAndBackground(15,0);
        printf("%5d",Week_Day);
    }
            if(++w>6)
            {
                printf("\n");
                w=0;
            }

        }
    break;
case 10:
    for(w=0;w<a[9];w++)
        {
          printf("    -");
       }

         for(Week_Day=1;Week_Day<=Monthdays[month-1];Week_Day++)
        {

             if(w==0)
        {
         SetColorAndBackground(12,0);
          printf("%5d",Week_Day);

        }
     else
    {
        SetColorAndBackground(15,0);
        printf("%5d",Week_Day);
    }
            if(++w>6)
            {
                printf("\n");
                w=0;
            }

        }
    break;
case 11:
    for(w=0;w<a[10];w++)
        {
           printf("    -");
       }

         for(Week_Day=1;Week_Day<=Monthdays[month-1];Week_Day++)
        {

             if(w==0)
        {
         SetColorAndBackground(12,0);
          printf("%5d",Week_Day);

        }
     else
    {
        SetColorAndBackground(15,0);
        printf("%5d",Week_Day);
    }
            if(++w>6)
            {
                printf("\n");
                w=0;
            }

        }
    break;
case 12:
    for(w=0;w<a[11];w++)
        {
         printf("    -");
       }

         for(Week_Day=1;Week_Day<=Monthdays[month-1];Week_Day++)
        {

 if(w==0)
        {
         SetColorAndBackground(12,0);
          printf("%5d",Week_Day);

        }
     else
    {
        SetColorAndBackground(15,0);
        printf("%5d",Week_Day);
    }
            if(++w>6)
            {
                printf("\n");
                w=0;
            }

        }
    break;
}

return 0;
}
void SetColorAndBackground(int ForgC,int BackC)
   {
       WORD wColor=((BackC & 0x0F)<<4)+(ForgC & 0x0F);
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),wColor);
       return;
   }




