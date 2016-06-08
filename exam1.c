#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>
#include<errno.h>
int main(int argc, char *argv[])
{

int fd;
errno=0;
//please change this path and file name.
fd=open("/home/khushi/file_hello.txt",O_RDONLY);
if(fd==-1)
{
printf(("\n open() fialed with error[%s] \n"),strerror(errno));
return 1;
}
else
{printf("\n opening file open() was succcesful\n");
close(fd);
}
return 0;
}

