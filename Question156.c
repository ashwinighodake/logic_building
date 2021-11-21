/*1. Write application which accept file name from user and open that file in read mode.
Input : Demo.txt
Output : File opened successfully.
*/
#include<stdio.h>
#include<fcntl.h>

int main()
{
    char Name[30];
    int fd=0;

    printf("\nEnter the file Name:");
    scanf("%[^\n]%*c",Name);

    fd=open(Name,O_RDONLY);
    if(fd==-1)
    {
        printf("\nUnable to open the file.");
        return -1;
    }
    printf("\nFile opened Successfully=%d",fd);
    int close(fd);
    return 0;
}