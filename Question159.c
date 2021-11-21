/*
4. Write application which accept file name from user and display size of file.
Input : Demo.txt
Output : File size is 56 bytes
*/
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd=0,size=0;
    char Name[30];
    printf("\nEnter the file Name:");
    scanf("%[^\n]%*c",Name);
 
    fd=open(Name,O_RDONLY);

    if(fd==-1)
    {
        printf("\nUnable to open the file.");
        return -1;
    }

    size=lseek(fd,0,SEEK_END);

    printf("%d",size);

    int close(fd);
    return 0;
}