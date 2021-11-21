/*
 Write application which accept file name from user and one string from user. Write
that string at the end of file.
Input : Demo.txt
Hello World
Output : Write Hello World at the end of Demo.txt file
*/
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
    int fd=0,iRet=0;
    char Name[30];
    char string[30];

    printf("\nEnter the file name:");
    scanf("%[^\n]%*c",Name);

    printf("\nEnter the string:");
    scanf("%[^\n]%*c",string);


    fd=open(Name,O_WRONLY|O_APPEND);

    if(fd==-1)
    {
        printf("\nUnable to openthe file.");
        return -1;
    }
    iRet=write(fd,string,11);
    int close(fd);  
    return 0;
}