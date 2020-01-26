GCC := g++	# Set compiler

OUTPUT := basic # set output that will be produced
#SOURCE := $(wildcard *.cpp) #wildcard is used for pattern matching
SOURCE := basic.cpp #Set source file to compile
CCFLAGS := -std=c++11 -pthread # Compiler flags 

all: $(OUTPUT) # $ is used for variables

$(OUTPUT): 
	# Executset the below command
	$(GCC) -o $(OUTPUT) $(CCFLAGS) $(SOURCE) 
	

clean:
	rm $(OUTPUT)

.PHONY : all