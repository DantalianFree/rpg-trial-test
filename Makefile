#COMPILER AND FLAGS
CXX = g++
CXXFLAGS = -I src/header -I src/header/Character -I src/header/Classes -I src/header/Spells -I src/header/Enemy

#DIRECTORIES
SRC_DIR = src/source
CHARACTER_DIR = $(SRC_DIR)/Character
CLASSES_DIR = $(SRC_DIR)/Classes
SPELLS_DIR = $(SRC_DIR)/Spells
ENEMY_DIR = $(SRC_DIR)/Enemy

#SOURCE FILES
SOURCES = src/main.cpp $(wildcard $(SRC_DIR)/*.cpp) $(wildcard $(CHARACTER_DIR)/*.cpp) $(wildcard $(CLASSES_DIR)/*.cpp) $(wildcard $(SPELLS_DIR)/*.cpp) $(wildcard $(ENEMY_DIR)/*.cpp)

#OUTPUT EXE
OUTPUT = main

#TARGET TO BUILD THE PROJECT
$(OUTPUT) : $(SOURCES)
	$(CXX) $(CXXFLAGS) -o $(OUTPUT) $(SOURCES)

clean:
	rm -f $(OUTPUT)

