#include "allocator.h"
#include <iostream>

Allocator::Allocator()
{
    mem = nullptr;
    totalSize = 0;
    offset = 0;
}

Allocator::~Allocator()
{
    delete[] mem;
}

void Allocator::makeAllocator(size_t maxSize)
{
    if(mem == nullptr)
    {
        mem = new char[maxSize];
    }
    else
    {
        delete[] mem;
        mem = new char[maxSize];
    }
    
    offset = 0;
    totalSize = maxSize;
    std::cout << mem;
}

char* Allocator::alloc(size_t size)
{
    if(mem == nullptr)
    {
        std::cerr << "Allocator is not initialized" << std::endl;
        return nullptr;
    }
    if(size+offset <= totalSize)
    {
        char* temp = mem + offset;
        offset += size;
        return temp;
    }
    else
    {
        std::cerr << "Not enough memory" << std::endl;
        return nullptr;
    }
}

void Allocator::reset()
{
    offset = 0;
}