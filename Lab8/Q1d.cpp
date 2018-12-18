#include<iostream>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
using namespace std;
int counter=1;
int main()
{
    if (fork()==0)
    {
        counter--;
        exit(0);
    }
    else
    {
        wait(NULL);
        counter++;
        cout<<"counter = "<< counter << endl;
    }
    exit(0);
}
