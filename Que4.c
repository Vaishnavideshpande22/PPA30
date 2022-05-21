//4. Accept N numbers from user and return frequency of 11 from it
//Input : N : 6
//      Elements : 85 66 3 80 93 88
//Output : 0
//      Elements : 85 11 3 80 11 88
//Output : 2

#include<stdio.h>
#include<stdlib.h>
int Frequency(int iLength,int Arr[])
{
    int iCnt = 0,iCntN = 0;
    for(iCnt = 0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iCntN++;
        }
    }    
    return iCntN;
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