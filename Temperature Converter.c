#include<stdio.h>
#include<conio.h>

/* functions declaration*/

float cel_fah(float); // *c to *f
float fah_cel(float); // *f to *c
float cel_kel(float); // *c to *k
float kel_cel(float); // *k to *c
float fah_kel(float); // *f to *k
float kel_fah(float); // *k to *f
void main_function(char); //function
/* main function*/

void main()
{
    clrscr();
    int choice,option;
    float cel,fah,kel,result;
    char ask;
    printf("Welcome to Temperature Converter");
    printf("\nWhat do you want to convert ?");
    printf("\nPress 1 : Celcius and Fahrenheit ");
    printf("\nPress 2 : Celcius and Kelvin ");
    printf("\nPress 3 : Fahrenheit and Kelvin ");
    printf("\nEnter Your Choice :\t");
    scanf("%d",&choice);
    printf("---------------------------------\n");

    /* first choice */

    switch(choice)
    {
    case 1:
        printf("\nConvert Celcius & Fahrenheit :");
        printf("\nPress 1 : Convert Celcius to Fahrenheit ");
        printf("\nPress 2 : Convert Fahrenheit to Celsius ");
        printf("\nEnter your Choice :\t");
        scanf("%d",&option);
        printf("---------------------------------\n");

        /* 2nd choice */

        switch(option)
        {
        case 1: // convert C to f
            printf("\nEnter Temperature :\t");
            scanf("%f",&cel);
            result = cel_fah(cel);
            printf("\n Result : %.2f °c= %.2f °f",cel,result);
            break;
        case 2: // convert F to C
            printf("\nEnter Temperature :\t");
            scanf("%f",&fah);
            result = fah_cel(fah);
            printf("\n Result : %.2f °f= %.2f °c",fah,result);
            break;
        default:
            printf("\nInvalid Choice");
        }
        break;
    case 2:
        printf("\nConvert Celcius & Kelvin :");
        printf("\nPress 1 : Convert Celcius to Kelvin ");
        printf("\nPress 2 : Convert Kelvin to Celsius ");
        printf("\nEnter your Choice :\t");
        scanf("%d",&option);
        printf("---------------------------------\n");

        /* 2nd choice */

        switch(option)
        {
        case 1: // convert C to k
            printf("\nEnter Temperature :\t");
            scanf("%f",&cel);
            result = cel_kel(cel);
            printf("\n Result : %.2f °c= %.2f °k",cel,result);
            break;
        case 2: // convert k to C
            printf("\nEnter Temperature :\t");
            scanf("%f",&kel);
            result = kel_cel(kel);
            printf("\n Result : %.2f °k= %.2f °c",kel,result);
            break;
        default:
            printf("\nInvalid Choice");
        }
        break;
    case 3:
        printf("\n Convert Fahrenheit & Kelvin :");
        printf("\nPress 1 : Convert Fahrenheit to Kelvin ");
        printf("\nPress 2 : Convert Kelvin to Fahrenheit ");
        printf("\nEnter your Choice :\t");
        scanf("%d",&option);
        printf("---------------------------------\n");

        /* 2nd choice */

        switch(option)
        {
        case 1: // convert f to k
            printf("\nEnter Temperature :\t");
            scanf("%f",&fah);
            result = fah_kel(fah);
            printf("\n Result : %.2f °f = %.2f °k",fah,result);
            break;
        case 2: // convert k to f
            printf("\nEnter Temperature :\t");
            scanf("%f",&kel);
            result = kel_fah(kel);
            printf("\n Result : %.2f °k = %.2f °f",kel,result);
            break;
        default:
            printf("\nInvalid Choice");
        }
        break;
    default:
        printf("\n Invalid choice");
        printf("\n ---------------------------------\n");
    }

    /* End of switch statements */

    printf("-----------------------------\n");
    printf("\n Do you want to continue ?");
    printf("\n Press 'Y' to continue & 'N' to exit.");
    scanf("%s",&ask);
    return main_function(ask);
    getch();
}

/* functions are declared below */

void main_function(char ask)
{
    if (ask=='Y'||ask=='y')
        return main();
    else if(ask=='N'||ask=='n')
    {
        printf("\n-----------------------------\n");
        printf("\t*** Program Exit ****");
    }
    else
    {
        printf("\n Invalid choice");
        printf("\n-----------------------------\n");
        printf("\t*** Program Terminated ****");
    }
}

float cel_fah(float cel) // Celsius to Fahrenheit
{
    float ans;
    ans =  1.8*cel+32;
    return ans;
}

float fah_cel(float fah) // Fahrenheit to Celsius
{
    float ans;
    ans=(fah-32)/1.8;
    return ans;
}

float cel_kel(float cel) // celcius to kelvin
{
    float ans;
    ans=cel+273;
    return ans;
}

float kel_cel(float kel) // Kelvin to Celsius
{
    float ans;
    ans=kel-273;
    return ans;
}

float fah_kel(float fah) // Fahrenheit to Kelvin
{
    float ans;
    ans=(fah-32)/1.8+273;
    return ans;
}

float kel_fah(float kel) // Kelvin to Fahrenheit
{
    float ans;
    ans=(kel-273)*1.8+32;
    return ans;
}