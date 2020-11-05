#include <iostream>
#include "allocator.h"
#include <cassert>

void test1()
{
    std::cout << "Test 1" << std::endl;
    Allocator allocator;
    allocator.makeAllocator(0);
    assert(allocator.alloc(10)==nullptr);
    allocator.reset();
    std::cout << "Passed" << std::endl;
}
void test2()
{
    std::cout << "Test 2" << std::endl;
    Allocator allocator;
    allocator.makeAllocator(100);
    assert(allocator.alloc(10)!=nullptr);
    assert(allocator.alloc(90)!=nullptr);
    allocator.reset();
    std::cout << "Passed" << std::endl;
}

void test3()
{
    std::cout << "Test 3" << std::endl;
    Allocator allocator;
    allocator.makeAllocator(100);
    assert(allocator.alloc(100)!=nullptr);
    allocator.reset();
    std::cout << "Passed" << std::endl;
}

void test4()
{
    std::cout << "Test 4" << std::endl;
    Allocator allocator;
    assert(allocator.alloc(10)==nullptr);
    std::cout << "Passed" << std::endl;
}


int main()
{
    test1();
    test2();
    test3();
    test4();
    
    return 0;
}