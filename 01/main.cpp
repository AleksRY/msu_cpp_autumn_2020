#include <iostream>
#include "allocator.h"

void test1()
{
    std::cout << "Test 1" << std::endl;
    Allocator allocator;
    allocator.makeAllocator(0);
    allocator.alloc(10);
    allocator.reset();
}
void test2()
{
    std::cout << "Test 2" << std::endl;
    Allocator allocator;
    allocator.makeAllocator(100);
    allocator.alloc(10);
    allocator.alloc(90);
    allocator.reset();
}

void test3()
{
    std::cout << "Test 3" << std::endl;
    Allocator allocator;
    allocator.makeAllocator(100);
    allocator.alloc(100);
    allocator.reset();
}

void test4()
{
    std::cout << "Test 4" << std::endl;
    Allocator allocator;
    allocator.alloc(10);
}

void test5()
{
    std::cout << "Test 5" << std::endl;
    Allocator allocator;
    allocator.makeAllocator(100);
    allocator.makeAllocator(10);
}

int main()
{
    test1();
    test2();
    test3();
    test4();
    test5();
    
    return 0;
}