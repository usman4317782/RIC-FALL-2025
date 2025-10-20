# Simple Product Manager - C++ OOP Mini Project

## Overview
This is a **simplified** Product Management System implemented in C++ that demonstrates basic Object-Oriented Programming concepts including primitive data types, user-defined data types (enums), and simple structures. **No complex nested structures or database scenarios** - just short-term memory with minimal product information.

## 🎯 Learning Objectives Covered

### 1. **Primitive Data Types**
- `int`: Product ID and quantity
- `double`: Product price
- `char arrays`: Product name

### 2. **User Defined Data Types (Enumerations)**
```cpp
enum ProductCategory {
    ELECTRONICS = 1, CLOTHING, BOOKS, OTHER
};
```

### 3. **Simple Structure**
The `Product` structure contains only essential information:
```cpp
struct Product {
    int id;                     // Primitive data type: int
    char name[50];              // Primitive data type: char array
    ProductCategory category;   // User defined data type: enum
    double price;               // Primitive data type: double
    int quantity;               // Primitive data type: int
};
```

### 4. **Array of Structures**
Short-term memory using a simple array:
```cpp
struct ProductList {
    Product products[10];       // Array of Product structures (max 10)
    int count;                  // Current number of products
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
1. **Add Product** - Create products with minimal information (ID, name, category, price, quantity)
2. **Display All Products** - Show all products in a simple table format
3. **Search Product** - Find products by ID
4. **Update Product** - Modify price or quantity
5. **Delete Product** - Remove products from list

### OOP Concepts Demonstrated
- **Structure Declaration**: Defining custom data types
- **Structure Definition**: Creating structure variables
- **Structure Initialization**: Setting initial values
- **Member Access**: Using dot operator to access members
- **Array of Structures**: Managing multiple product records
- **Enumerations**: Using user-defined data types

## 🛠️ Compilation and Execution

### Compile and Run
```bash
g++ -std=c++11 -Wall -Wextra -o simple_product_manager main.cpp product_management.cpp
./simple_product_manager
```

### Using Makefile (if available)
```bash
make run
```

## 📋 Usage Examples

### Adding a Product
The system guides you through entering:
- Product ID (integer)
- Product name (string)
- Category selection (enumeration: Electronics, Clothing, Books, Other)
- Price (double)
- Quantity (integer)

### Accessing Structure Members
```cpp
// Accessing simple structure members
cout << productList.products[0].id;        // Product ID
cout << productList.products[0].name;      // Product name
cout << productList.products[0].price;     // Product price
cout << productList.products[0].quantity;  // Product quantity
```

## 🎓 Educational Value

### Structure Operations Covered
1. **Declaration**: `ProductList list;`
2. **Definition**: Creating and configuring structure variables
3. **Initialization**: Setting values using simple methods
4. **Member Access**: Using dot notation for direct access
5. **Array Management**: Working with arrays of structures

### Real-World Application
This simplified project demonstrates basic concepts that are building blocks for:
- Simple inventory systems
- Basic product catalogs
- Learning data organization
- Understanding structure fundamentals

## 📊 Key Learning Points

### Primitive vs User-Defined Types
- **Primitive**: Built-in types like `int`, `double`, `char`
- **User-Defined**: Custom types like `enum` and `struct`

### Structure Benefits
- **Organization**: Group related data together
- **Simplicity**: Easy to understand and use
- **Maintainability**: Simple to modify and extend

### Short-term Memory Approach
- **No Database**: Data exists only while program runs
- **Array-based**: Simple array storage (max 10 products)
- **Direct Access**: No complex queries or operations

## 🎯 Assignment Extensions
Students can extend this project by:
1. Adding more product categories to the enum
2. Implementing simple sorting (by price, name, etc.)
3. Adding basic input validation
4. Creating a simple file save/load feature
5. Adding more product fields (description, brand, etc.)

## 📝 Notes
- Simple structures use only primitive data types and enums
- Enumerations provide type-safe category constants
- Array-based storage demonstrates basic data management
- The project follows C++ best practices for simple structure design
- **Perfect for beginners** - no complex nested structures or database concepts

This simplified project provides a clear foundation for understanding basic structures and their practical applications in C++ programming.
