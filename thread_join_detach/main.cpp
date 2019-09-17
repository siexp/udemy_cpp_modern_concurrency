#include <iostream>
#include <thread>

void job()
{
    std::cout << "Hello, World!" << std::endl;
}

int main (int argc, char *argv[])
{
    std::thread t1{ job };
    
    return 0;
}	