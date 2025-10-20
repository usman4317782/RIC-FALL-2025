# Makefile for Product Management System

# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra

# Target executables
MAIN_TARGET = product_manager
DEMO_TARGET = demo

# Source files
MAIN_SOURCES = main.cpp product_management.cpp
DEMO_SOURCES = sample_demo.cpp product_management.cpp
HEADER = product_management.h

# Default target
all: $(MAIN_TARGET) $(DEMO_TARGET)

# Main program target
$(MAIN_TARGET): $(MAIN_SOURCES) $(HEADER)
	$(CXX) $(CXXFLAGS) -o $(MAIN_TARGET) $(MAIN_SOURCES)

# Demo program target
$(DEMO_TARGET): $(DEMO_SOURCES) $(HEADER)
	$(CXX) $(CXXFLAGS) -o $(DEMO_TARGET) $(DEMO_SOURCES)

# Individual targets
main: $(MAIN_TARGET)

demo: $(DEMO_TARGET)

# Clean target
clean:
	rm -f $(MAIN_TARGET) $(DEMO_TARGET) *.exe

# Run targets
run-main: $(MAIN_TARGET)
	./$(MAIN_TARGET)

run-demo: $(DEMO_TARGET)
	./$(DEMO_TARGET)

# Help target
help:
	@echo "Available targets:"
	@echo "  all       - Build both main program and demo"
	@echo "  main      - Build main interactive program"
	@echo "  demo      - Build concept demonstration program"
	@echo "  run-main  - Build and run main program"
	@echo "  run-demo  - Build and run demo program"
	@echo "  clean     - Remove executable files"
	@echo "  help      - Show this help message"

.PHONY: all main demo clean run-main run-demo help
