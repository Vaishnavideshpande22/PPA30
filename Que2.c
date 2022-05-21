//2. Accept N numbers from user and return Difference between frequency of even numbers and odd numbers
//Input : N : 6
//      Elements : 85 66 3 80 93 88
//Output : 1(4-3)

#include<stdio.h>
#include<stdlib.h>
int Frequency(int iLength,int Arr[])
{
    int iCnt = 0,iCntEven = 0,iCntOdd= 0,iDiff = 0;
    for(iCnt = 0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iCntEven++;
        }
        else
        {
            iCntOdd++;
        }
    }
    iDiff = iCntEven - iCntOdd;
    return iDiff;
}
int main()
{
    int iSize = 0,iRet = 0,iCnt = 0;
    int *iPtr = NULL;

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
    iRet = Frequency(iSize,iPtr);
        printf("%d\t",iRet);

    free(iPtr);
    return 0;
}