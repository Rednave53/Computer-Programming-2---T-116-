#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
int main()
{
    int Number;
    int ID;
    int PIN;
    int Ban[3][2];

    Ban[0][0] = 135;
    Ban[1][1] = 531;

    Ban[2][2] = 246;
    Ban[2][1] = 642;

    Ban[3][3] = 369;
    Ban[4][4] = 963;

    printf("Enter ID Number: ");
    scanf("%d", &ID);
    printf("Enter PIN: ");
    scanf("%d", &PIN);


    if (ID == Ban[0][0], PIN == Ban[1][1]){
        printf("You have succesfully logged in ID#: %d",Ban[0][0], Ban[1][1]);
    } else if (ID == Ban [2][2], PIN == Ban[2][1]){
    printf("You have succesfully logged in ID#: %d", Ban[2][2], Ban[3][3]);
           }else if (ID == Ban [3][3], PIN == Ban [4][4]){
             printf("You have succesfully logged in ID#: %d", Ban[3][3], Ban[4][4]);
        }else

    printf("Invalid ID/PIN");
    return 0;
}
