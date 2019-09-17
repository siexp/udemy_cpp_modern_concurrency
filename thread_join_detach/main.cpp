#include <iostream>
#include <thread>

void job()
{
    std::cout << "Hello, World!" << std::endl;
}

void twice_join_test()
{
    std::thread t2{job};

    t2.join();
    t2.join();        
}

void join_detached_test()
{
    std::thread t3{job};
    t3.detach();
    t3.join();
}

int main(int argc, char *argv[])
{
    // calls std::terminate because thread is not joined
    // std::thread t1{ job };

    try
    {
        twice_join_test();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        join_detached_test();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}