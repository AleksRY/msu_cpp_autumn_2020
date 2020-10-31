#include <cstdlib>

class Allocator
{
public:
    Allocator();
    ~Allocator();

    void makeAllocator(size_t maxSize);
    char* alloc(size_t size);
    void reset();


private:
    char* mem;
    size_t totalSize;
    size_t offset;
};