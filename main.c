/*******************************************************************************/
/************* Author: Leena Almekkawy                       *******************/
/************* file : string.c                               *******************/
/************* Project: Implementing string.h Library        *******************/
/************* SW version : 1.0.0                            *******************/
/************* Date : 24/4/2024                              *******************/
/*******************************************************************************/


/************* Linking Section *****************/
/**-------------------------------------------**/
#include <stdio.h>
#include <stdlib.h>
#include "Leena_string.h"

/**-------------------------------------------**/
/************* End of Linking Section **********/





/************* Main Program Section ************/
/**-------------------------------------------**/

int main()
{
    int x=5;
    if(x==NULL)
    {
        printf("%i",x);
    }
    char arr[30]= {'a','a','a','n','a'};
    char arr2[30]="aaa";

    Leena_memset(arr,'h',2);
    printf("%s\n",arr);

    Leena_memcpy(arr2,arr,10);


    unsigned char * ptr=Leena_memchr("leena",'n',5);
    if(ptr==NULL)
        printf("no char\n");
    else
        printf("%s\n",ptr);


    ///---------

    char src[50], dest[50];

    Leena_memcpy("This is source",src,20);
    Leena_memcpy( "This is destination",dest,20);

    Leena_strcat(dest, src);

    printf("Final destination string : |%s|\n", dest);


    ///---------



    Leena_memcpy("Leena ",src,20);
    Leena_memcpy( "safa ",dest,20);

    Leena_strncat(dest, src,3);

    printf("Final destination string : |%s|\n", dest);

    ///---------------------------
    unsigned char * ptr2=Leena_strchr("leena",'l');
    if(ptr2==NULL)
        printf("no char\n");
    else
        printf("%s\n",ptr2);

    ///-------------------------------------

    char str1[30], str2[50];

    Leena_memcpy("zzcde",str1,20);
    Leena_memcpy( "azede",str2,20);

    printf("strncmp: %i\n",Leena_strncmp(str1,str2,3));

    ///---------------------------------------
    char str11[13];

    char str22[13];


    Leena_strcpy(str11, "leena");
    Leena_strcpy(str22, "safa");
    Leena_strncpy(str11, str22,10);


    printf("strncpy : %s\n", str11);

    ///-------------------------------------------
    printf("val = %i\n",Leena_strcspn("leena","n") );

    ///------------------------------------------


    printf("len = %i\n",Leena_strlen("leena") );

    ///--------------------------------------
    char * ptrchar=Leena_strpbrk("leena","yes");
    if(ptrchar==NULL)
        printf("no char\n");
    else
        printf("found char is %c\n",*ptrchar);

    ///------------------------------------

    char * ptrchar2=Leena_strrchr("leena",'e');
    if(ptrchar2==NULL)
        printf("no char\n");
    else
        printf("char is %s\n",ptrchar2);

    ///----------------------------------------

    printf("val = %i\n",Leena_strspn("leena","le") );

    ///------------------------------------------

    char * ptrchar3=Leena_strstr("ppoikntplointpoint","point");
    if(ptrchar3==NULL)
        printf("no char\n");
    else
        printf("char is %s\n",ptrchar3);

    ///--------------------------------------------

    char str5[80] = "Dr_Octopus Team.";
    const char s[5] = " _o";
    char *token;

    // get the first token
    token = Leena_strtok(str5, s);

    // walk through other tokens
    while( token!=NULL )
    {
        printf( " %s\n", token );
        token = Leena_strtok(NULL, s);
    }


    return 0;
}
/**-------------------------------------------**/
/********** End of Main Program Section ********/
