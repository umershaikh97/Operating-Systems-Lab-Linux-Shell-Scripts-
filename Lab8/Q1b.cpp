#include<iostream>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
using namespace std;
void fn()
{
    if( fork() == 0 )
    {
    fork();
    cout<< "Hello" << endl;
    exit(0);
    }
return;
}
int main()
{
    fn();
    cout<< "Hello" << endl ;
    exit(0);
}
