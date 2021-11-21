/*
2. Write application which accept file name from user and create that file.
Input : Demo.txt
Output : File created successfully.
*/
#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd=0;
    char Name[30];

    printf("\nEnter the file Name:");
    scanf("%[^\n]%*c",Name);
     
    fd=open(Name,O_RDWR|O_CREAT);

    if(fd==-1)
    {
        printf("\nError in creating file");
        return -1;
    }
    printf("\nFile created successfully.");

    int close(fd);
    return 0;
}