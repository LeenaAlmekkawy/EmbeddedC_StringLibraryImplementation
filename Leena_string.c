/*******************************************************************************/
/************* Author: Leena Almekkawy                       *******************/
/************* file : Leena_string.c                         *******************/
/************* Project: Implementing string.h Library        *******************/
/************* SW version : 1.0.0                            *******************/
/************* Date : 24/4/2024                              *******************/
/*******************************************************************************/

#include <stdio.h>
#include "Leena_string.h"


/************* Functions Definition Section *****************/
/**--------------------------------------------------------**/

void* Leena_memset(void *StartAddress,unsigned char value, unsigned int length )
{
    unsigned char *TempPtr=StartAddress;
    if(NULL==StartAddress)
    {
        printf("Memset function failed due to a NULL pointer!!\n");
    }
    else
    {

        while(length--)
        {
            *TempPtr++ =value;
        }


    }
    return StartAddress;
}



int Leena_memcmp(void const *str1,void const *str2, unsigned int Length )
{
    unsigned char *Str1Ptr=str1;
    unsigned char *Str2Ptr=str2;
    int Checkflag=0;
    if(NULL==str1 || NULL==str2)
    {
        printf("Memcmp function Failed due to a NULL pointer!!\n");
    }
    else
    {


        while(Length--)
        {
            if( (*Str1Ptr) < (*Str2Ptr) )
            {
                Checkflag=-1;
                break;
            }
            else if((*Str1Ptr) > (*Str2Ptr) )
            {
                Checkflag=1;
                break;
            }
            Str1Ptr++;
            Str2Ptr++;
        }


    }

    return Checkflag;
}



void* Leena_memcpy(void *SourceAddress,void const *DestAddress, unsigned int Length )
{
    unsigned char *SourceTempPtr=SourceAddress;
    unsigned char *DestTempPtr=DestAddress;
    if(NULL==SourceAddress || NULL==DestAddress)
    {
        printf("Memcpy function Failed due to a NULL pointer!!\n");
    }
    else
    {

        while(Length--)
        {
            *DestTempPtr++=*SourceTempPtr++;
        }


    }
    return DestAddress;
}



void* Leena_memchr(const void *str,unsigned char c, int n)
{
    unsigned char * strPtr=str;
    unsigned char * ReturnPtr=NULL;

    while(n--)
    {
        if( (*strPtr)==c)
        {
            ReturnPtr=strPtr;
            break;
        }
        strPtr++;
    }
    return ReturnPtr;
}



char *Leena_strcat(char *dest, const char *src)
{
    char * SrcPtr=src;
    char * DestPtr=dest;
    while( (*DestPtr)!='\0')
    {
        DestPtr++;
    }

    while((*SrcPtr)!='\0')
    {
        *DestPtr = *SrcPtr;
        DestPtr++;
        SrcPtr++;
    }
    *DestPtr='\0';
    return dest;
}



char *Leena_strncat(char *dest, const char *src, int n)
{
    char * SrcPtr=src;
    char * DestPtr=dest;
    while( (*DestPtr)!='\0')
    {
        DestPtr++;
    }

    while(n--)
    {
        *DestPtr = *SrcPtr;
        DestPtr++;
        SrcPtr++;
    }
    *DestPtr='\0';
    return dest;
}



void *Leena_strchr(const char *str, unsigned char c)
{
    unsigned char * strPtr=str;
    unsigned char * ReturnPtr=NULL;

    while((*strPtr)!='\0')
    {
        if( (*strPtr)==c)
        {
            ReturnPtr=strPtr;
            break;
        }
        strPtr++;
    }
    return ReturnPtr;
}



int Leena_strcmp(const char *str1, const char *str2)
{

    unsigned char *Str1Ptr=str1;
    unsigned char *Str2Ptr=str2;
    int Checkflag=0;
    if(NULL==str1 || NULL==str2)
    {
        printf("Leena_strcmp function Failed due to a NULL pointer!!\n");
    }
    else
    {


        while((*Str1Ptr)!='\0')
        {
            if( (*Str1Ptr) < (*Str2Ptr) )
            {
                Checkflag=-1;
                break;
            }
            else if((*Str1Ptr) > (*Str2Ptr) )
            {
                Checkflag=1;
                break;
            }
            Str1Ptr++;
            Str2Ptr++;
        }


    }

    return Checkflag;
}



int Leena_strncmp(const char *str1, const char *str2, int n)
{
    unsigned char *Str1Ptr=str1;
    unsigned char *Str2Ptr=str2;
    int Checkflag=0;
    if(NULL==str1 || NULL==str2)
    {
        printf("Leena_strncmp function Failed due to a NULL pointer!!\n");
    }
    else
    {


        while(n--)
        {
            if( (*Str1Ptr) < (*Str2Ptr) )
            {
                Checkflag=-1;
                break;
            }
            else if((*Str1Ptr) > (*Str2Ptr) )
            {
                Checkflag=1;
                break;
            }
            Str1Ptr++;
            Str2Ptr++;
        }


    }

    return Checkflag;
}



char *Leena_strcpy(char *dest, const char *src)
{
    unsigned char *SourceTempPtr=src;
    unsigned char *DestTempPtr=dest;
    if(NULL==src || NULL==dest)
    {
        printf("strcpy function Failed due to a NULL pointer!!\n");
    }
    else
    {

        while((*SourceTempPtr)!='\0')
        {
            *DestTempPtr++=*SourceTempPtr++;
        }
        (*DestTempPtr)='\0';



    }
    return dest;
}



char *Leena_strncpy(char *dest, const char *src, int n)
{
    unsigned char *SourceTempPtr=src;
    unsigned char *DestTempPtr=dest;
    if(NULL==src || NULL==dest)
    {
        printf("strncpy function Failed due to a NULL pointer!!\n");
    }
    else
    {
        int flag=0;

        while(n--)
        {
            (*DestTempPtr)=(*SourceTempPtr);

            if(SourceTempPtr=='\0')
            {
                break;
            }

            DestTempPtr++;
            SourceTempPtr++;
        }
        (*DestTempPtr)='\0';



    }
    return dest;
}



int Leena_strcspn(const char *str1, const char *str2)
{

    const char *Str1Ptr= str1;

    int Retrun_Length=0;
    int Break_flag=0;

    while((*Str1Ptr)!='\0')
    {
        const char *Str2Ptr = str2;

        while((*Str2Ptr)!='\0')
        {
            if( (*Str2Ptr)==(*Str1Ptr) )
            {

                Break_flag=1;
                break;
            }

            Str2Ptr++;

        }
        Str1Ptr++;
        if(Break_flag==1)
        {
            break;
        }
        else
        {
            Retrun_Length++;
        }
    }
    return Retrun_Length;

}



int Leena_strlen(const char *str)
{
    int Retrun_Length=0;

    const char *StrPtr= str;

    while( (*StrPtr)!='\0' )
    {

        Retrun_Length++;

        StrPtr++;

    }

    return Retrun_Length;

}



char *Leena_strpbrk(const char *str1, const char *str2)
{
    const char *Str1Ptr= str1;

    char * Return_char=NULL;
    int Break_flag=0;

    while((*Str1Ptr)!='\0')
    {
        const char *Str2Ptr = str2;

        while((*Str2Ptr)!='\0')
        {
            if( (*Str2Ptr)==(*Str1Ptr) )
            {

                Break_flag=1;
                Return_char=Str2Ptr;

                break;
            }

            Str2Ptr++;

        }
        Str1Ptr++;
        if(Break_flag==1)
        {
            break;
        }

    }

    return Return_char;
}



char *Leena_strrchr(const char *str, int c)
{
    const char *StrPtr= str;

    char * Return_char=NULL;


    while((*StrPtr)!='\0')
    {

        if( c==(*StrPtr) )
        {
            Return_char=StrPtr;
        }


        StrPtr++;


    }

    return Return_char;
}



int Leena_strspn(const char *str1, const char *str2)
{
    const char *Str1Ptr= str1;

    int Retrun_Length=0;


    while((*Str1Ptr)!='\0')
    {
        const char *Str2Ptr = str2;
        int Break_flag=1;

        while((*Str2Ptr)!='\0')
        {
            if( (*Str2Ptr)==(*Str1Ptr) )
            {

                Break_flag=0;
                break;
            }

            Str2Ptr++;

        }

        Str1Ptr++;

        if(Break_flag==1)
        {
            break;
        }
        else
        {
            Retrun_Length++;
        }
    }
    return Retrun_Length;
}



char *Leena_strstr(const char *str, const char *subStr)
{
    const char *StrPtr= str;
    const char *subStrPtr= subStr;

    int subStrLen=Leena_strlen(subStr);
    int StrLen=Leena_strlen(str);

    char *Return_char=NULL;

    for(int i=0; i<=(StrLen-subStrLen); i++)
    {
        int Length=0;
        for(int j=0; j<subStrLen; j++)
        {
            if(*(StrPtr+i+j)==*(subStrPtr+j))
                Length++;
        }
        if(Length==subStrLen)
        {
            Return_char=(StrPtr+i);
            break;
        }
    }

    return Return_char;
}

char *Leena_strtok(char *str, const char *delim)
{
    //store the last state of str by using static pointer
    static char * input=NULL;

    char *strPtr=str;

    if(strPtr!=NULL)
    {
        //update the input with the new string
        input=str;
    }

    char *ReturnPtr=input;
    //no more delimiters to check
    if((*input)=='\0')
        ReturnPtr=NULL;


    //iterate over input string
    while((*input)!='\0')
    {
        int Break_Flag=0;
        char *delimPtr=delim;

        //iterate over the string that contain the delimiters
        while((*delimPtr)!='\0')
        {
            if( (*input)==(*delimPtr) )
            {
                //check if we reach the end of string or not(last delimiter)
                if( *(input+1)=='\0')
                {
                    ReturnPtr=NULL;
                }
                else
                {
                    *(input)='\0';
                    Break_Flag=1;

                }
            }

            delimPtr++;
        }

        input++;

        //break form the loop as we find a delimiter
        if(Break_Flag==1)
        {
            break;
        }

    }

    return ReturnPtr;

}


/**-----------------------------------------------------**/
/********** End of Functions Definition Section **********/



