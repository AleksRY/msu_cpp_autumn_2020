CC=g++
FLAGS=-std=c++17 -Wall -pedantic
SOURCES=main.cpp allocator.cpp
EXECUTABLE=allocator

all: $(EXECUTABLE)

$(EXECUTABLE): $(SOURCES)
	$(CC) $(FLAGS) $(SOURCES) -o $(EXECUTABLE)

clean:
	rm -rf $(EXECUTABLE)

test:
	./$(EXECUTABLE); rm $(EXECUTABLE)

