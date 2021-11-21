/*
3. Write application which accept file name from user and read all data from that file
and display contents on screen.
Input : Demo.txt
Output : Display all data of file.
*/

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    char Name[30];
    char Arr[54];
    int fd=0;
    int iRet=0;

    printf("\nEnter file Name:");
    scanf("%[^\n]%*c",Name);

    fd=open(Name,O_RDONLY);
    
    if(fd==-1)
    {
        printf("Unable to open file.");
        return -1;

    }
    
    printf("\nFile opened successfully.");

     iRet=read(fd,Arr,54);

     printf("\nData are as follows:%s\n",Arr);
  
     int close(fd);
    return 0;
}