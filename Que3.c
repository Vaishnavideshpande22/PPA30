//3. Accept N numbers from user check whether that numbers contains 11 in it or not
//Input : N : 6
//      Elements : 85 66 11 80 93 88
//Output : 11 is present
//      Elements : 85 66 3 80 93 88
//Output : 11 is not present 

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int iLength,int Arr[])
{
    int iCnt = 0;
    for(iCnt = 0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            break;
        }
    }
    if(Arr[iCnt] == 11)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int iSize = 0,iCnt = 0;
    int *iPtr = NULL;
    BOOL bRet = FALSE;

    printf("Enter the number of elements : ");
    scanf("%d",&iSize);

    iPtr = (int*)malloc(sizeof(int)*iSize);
    if(iPtr == NULL)
    {
        printf("unable to allocate the memory");
    }
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        printf("Enter the element : ");
        scanf("%d",&iPtr[iCnt]);
    }
    bRet = Check(iSize,iPtr);
        
        if(bRet == 1)
        {
            printf("11 is present");
        }
        else
        {
            printf("11 is not present");
        }

    free(iPtr);
    return 0;
}