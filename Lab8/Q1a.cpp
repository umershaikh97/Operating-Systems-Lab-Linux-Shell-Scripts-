#include<iostream>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
using namespace std;

void fn()
{
    fork();
    fork();
    cout<< "Hello" <<endl;
    return;
}
int main()
{
    fn();
    cout<< "Hello" <<endl;
    exit(0);
}

