CPP := g++
CPPFLAGS :=-std=c++17 -Wall -Wextra

PROGRAM := test

SRCS := $(wildcard *.cpp)
OBJS := $(patsubst %.cpp,%.o,$(wildcard *.cpp))

$(PROGRAM):$(OBJS)
	$(CPP) $(CPPFLAGS) -o $(PROGRAM) $(OBJS)

$(OBJS): $(SRCS)
	$(CPP) -c $(CPPFLAGS) $(SRCS)