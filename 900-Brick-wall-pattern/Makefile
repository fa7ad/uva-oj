appname := $(notdir $(CURDIR))

CXX := g++
CXXFLAGS := -Wall -g

srcfiles := $(wildcard *.cpp)
objects  := $(srcfiles:.cpp=.o)

all: $(appname)

$(appname): $(objects)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -o $(appname) $(objects) $(LDLIBS)

.PHONY: clean
clean:
	rm -f $(objects) $(appname)

run:
	./$(appname)
