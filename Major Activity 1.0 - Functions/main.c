#include <stdio.h>
#include <stdlib.h>

int main()
{
/*declaration of data*/
    int id, consumed ;
    float unit,surcharge, total;

    printf("Input Customer ID: ");
    scanf("%d", &id);       //get the user input
    printf("Input the unit consumed by the customer: ");
    scanf("%d", &consumed);      //get the user input

    printf("\n\t{ELECTRICITY BILL}\n");
    printf("Customer ID#\t\t\t:%d\n", id);      //showing the ID# of the user
    printf("Unit consumed\t\t\t:%d\n", consumed);       //showing the user input if how many unit they consumed

  /*this statement executes the line if the user input is true and skips if false*/
    if(consumed >= 199 && consumed <= 250){
        unit = consumed * 1.50;
        printf("Unit charge @P. 1.50 per unit\t:%.2f", unit );
    }
    else if(consumed >= 250 && consumed <= 450){
        unit = consumed * 1.60;
        printf("Unit charge @P. 1.60 per unit\t:%.2f", unit );
    }
    else if(consumed >= 450 && consumed <= 600){
        unit = consumed * 1.85;
        printf("Unit charge @P. 1.85 per unit\t:%.2f", unit );
    }
    else if(consumed >600){
        unit = consumed * 2.00;
        printf("\nUnit charge @P. 2.00 per unit\t:%.2f", unit );

    }

    /*this will add surcharge if the total amount is >=100*/
    if(unit >= 100){
        surcharge = unit * .10;
        printf("\nSurcharge amount\t\t:%.2f", surcharge);
    }
    total = unit + surcharge;       //assignment of declared "total"
    printf("\nTotal Customer Bill\t\t:%.2f", total);        //showing the total of all computations



    return 0;       //to end/exit the code
}
