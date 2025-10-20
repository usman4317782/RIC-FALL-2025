# Product Management System - C++ OOP Mini Project

## Overview
This is a comprehensive Product Management System implemented in C++ that demonstrates fundamental Object-Oriented Programming concepts including primitive data types, user-defined data types, structures, nested structures, and enumerations.

## 🎯 Learning Objectives Covered

### 1. **Primitive Data Types**
- `int`: Product IDs, stock quantities, warranty periods
- `double`: Pricing information (cost, selling price, discount)
- `float`: Physical dimensions (length, width, height, weight)
- `char arrays`: Text data (names, descriptions, addresses)
- `bool`: Boolean flags (featured status, auto-reorder)

### 2. **User Defined Data Types (Enumerations)**
```cpp
enum ProductCategory {
    ELECTRONICS = 1, CLOTHING, BOOKS, HOME_GARDEN, SPORTS, FOOD_BEVERAGES
};

enum ProductStatus {
    AVAILABLE = 1, OUT_OF_STOCK, DISCONTINUED, COMING_SOON
};

enum PriorityLevel {
    LOW = 1, MEDIUM, HIGH, CRITICAL
};
```

### 3. **Simple Structures**
- **Price Structure**: Contains cost price, selling price, discount, and currency
- **Dimensions Structure**: Contains physical specifications (length, width, height, weight)
- **Supplier Structure**: Contains supplier information (ID, name, contact details)
- **Inventory Structure**: Contains stock management data

### 4. **Nested Structures**
The main `Product` structure contains multiple nested structures:
```cpp
struct Product {
    // Primitive data types
    int product_id;
    char product_name[100];
    
    // Enumerations
    ProductCategory category;
    ProductStatus status;
    
    // Nested structures
    Price pricing;              // Structure within structure
    Dimensions physical_specs;  // Structure within structure
    Supplier supplier_info;     // Structure within structure
    Inventory inventory_details; // Structure within structure
};
```

## 📁 Project Structure
```
00_mini_practice_project/
├── product_management.h     # Header file with all declarations
├── product_management.cpp   # Implementation of all functions
├── main.cpp                # Main program with interactive menu
├── sample_demo.cpp         # Demonstration of all OOP concepts
└── README.md              # This documentation file
```

## 🚀 Features

### Core Functionality
1. **Add New Product** - Create products with all nested structure data
2. **Display All Products** - Show complete product information
3. **Search Product** - Find products by ID
4. **Update Product** - Modify stock, price, or status
5. **Delete Product** - Remove products from database
6. **Category Filter** - Display products by category
7. **Low Stock Alert** - Show products below reorder level
8. **Inventory Valuation** - Calculate total inventory value

### OOP Concepts Demonstrated
- **Structure Declaration**: Defining custom data types
- **Structure Definition**: Creating structure variables
- **Structure Initialization**: Setting initial values
- **Member Access**: Using dot operator to access nested members
- **Array of Structures**: Managing multiple product records

## 🛠️ Compilation and Execution

### Method 1: Interactive Program
```bash
g++ -o product_manager main.cpp product_management.cpp
./product_manager
```

### Method 2: Concept Demonstration
```bash
g++ -o demo sample_demo.cpp product_management.cpp
./demo
```

## 📋 Usage Examples

### Adding a Product
The system guides you through entering:
- Basic information (ID, name, description)
- Category selection (enumeration)
- Pricing details (nested structure)
- Physical specifications (nested structure)
- Supplier information (nested structure)
- Inventory details (nested structure)

### Accessing Nested Structure Members
```cpp
// Accessing nested structure members
cout << database.products[0].pricing.cost_price;           // Price structure
cout << database.products[0].physical_specs.weight;       // Dimensions structure
cout << database.products[0].supplier_info.name;          // Supplier structure
cout << database.products[0].inventory_details.current_stock; // Inventory structure
```

## 🎓 Educational Value

### Structure Operations Covered
1. **Declaration**: `ProductDatabase db;`
2. **Definition**: Creating and configuring structure variables
3. **Initialization**: Setting values using various methods
4. **Member Access**: Using dot notation for nested access
5. **Array Management**: Working with arrays of structures

### Real-World Application
This project simulates a real product management system that could be used in:
- Retail stores
- Warehouses
- E-commerce platforms
- Inventory management systems

## 🔍 Sample Data
The `sample_demo.cpp` file creates three sample products:
1. **Gaming Laptop** (Electronics) - High priority, good stock
2. **Cotton T-Shirt** (Clothing) - Medium priority, adequate stock
3. **C++ Programming Guide** (Books) - Critical priority, low stock

## 📊 Key Learning Points

### Primitive vs User-Defined Types
- **Primitive**: Built-in types like `int`, `double`, `char`
- **User-Defined**: Custom types like `enum` and `struct`

### Structure Benefits
- **Organization**: Group related data together
- **Reusability**: Define once, use multiple times
- **Maintainability**: Easy to modify and extend

### Nested Structure Advantages
- **Logical Grouping**: Related data stays together
- **Code Clarity**: Clear hierarchy and relationships
- **Scalability**: Easy to add new nested components

## 🎯 Assignment Extensions
Students can extend this project by:
1. Adding file I/O operations
2. Implementing sorting algorithms
3. Adding more complex search functionality
4. Creating a graphical user interface
5. Adding data validation and error handling

## 📝 Notes
- All structures use primitive data types as building blocks
- Enumerations provide type-safe constants
- Nested structures demonstrate composition relationships
- The project follows C++ best practices for structure design

This project provides a comprehensive foundation for understanding structures and their practical applications in C++ programming.
