# Makefile for Simple Product Management System

# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra

# Target executable
MAIN_TARGET = simple_product_manager

# Source files
MAIN_SOURCES = main.cpp product_management.cpp
HEADER = product_management.h

# Default target
all: $(MAIN_TARGET)

# Main program target
$(MAIN_TARGET): $(MAIN_SOURCES) $(HEADER)
	$(CXX) $(CXXFLAGS) -o $(MAIN_TARGET) $(MAIN_SOURCES)

# Individual targets
main: $(MAIN_TARGET)

# Clean target
clean:
	rm -f $(MAIN_TARGET) *.exe

# Run target
run: $(MAIN_TARGET)
	./$(MAIN_TARGET)

# Help target
help:
	@echo "Available targets:"
	@echo "  all       - Build the simple product manager"
	@echo "  main      - Build the simple product manager"
	@echo "  run       - Build and run the program"
	@echo "  clean     - Remove executable files"
	@echo "  help      - Show this help message"

.PHONY: all main clean run help
