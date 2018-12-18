#include<iostream>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
using namespace std;
main()
{


int var = fork();

if(var==0)
{
    cout<<"I am Child Process and my pid is "<<getpid()<<endl;
    cout<<"My Parent pid is "<<getppid()<<endl;
    cout<<"I am also a zombie process"<<endl<<endl;
}
else if(var>0)
{
sleep(5);
cout<<"I am Parent Process and my pid is "<<getpid()<<endl;
cout<<"Status : "<<endl;
char* a []= {"ps","aux",NULL};
execv("/bin/ps", a);
}
else
{
cout<<"Error";
}



return 0;
}