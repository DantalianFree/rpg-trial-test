lear#COMPILER AND FLAGS
CXX = g++
CXXFLAGS = -I src/header -I src/header/Character -I src/header/Classes -I src/header/Spells

#DIRECTORIES
SRC_DIR = src/source
CHARACTER_DIR = $(SRC_DIR)/Character

#SOURCE FILES
SOURCES = src/main.cpp $(wildcard $(SRC_DIR)/*.cpp) $(wildcard $(CHARACTER_DIR)/*.cpp)

#OUTPUT EXE
OUTPUT = main

#TARGET TO BUILD THE PROJECT
$(OUTPUT) : $(SOURCES)
	$(CXX) $(CXXFLAGS) -o $(OUTPUT) $(SOURCES)

clean:
	rm -f $(OUTPUT)

