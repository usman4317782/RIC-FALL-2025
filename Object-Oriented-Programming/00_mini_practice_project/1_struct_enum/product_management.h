#ifndef PRODUCT_MANAGEMENT_H
#define PRODUCT_MANAGEMENT_H

#include <iostream>
#include <iomanip>

using namespace std;

// Simple Enumeration - Product Category
enum ProductCategory {
    ELECTRONICS = 1,
    CLOTHING,
    BOOKS,
    OTHER
};

// Simple Structure - Product (minimal information)
struct Product {
    int id;                     // Primitive data type: int
    char name[50];              // Primitive data type: char array
    ProductCategory category;   // User defined data type: enum
    double price;               // Primitive data type: double
    int quantity;               // Primitive data type: int
};

// Simple array to store products (short-term memory)
struct ProductList {
    Product products[10];       // Array of Product structures (max 10 products)
    int count;                  // Primitive data type: int - current number of products
};

// Function declarations
void initializeProductList(ProductList& list);
void displayMenu();
void addProduct(ProductList& list);
void displayAllProducts(const ProductList& list);
void searchProduct(const ProductList& list);
void updateProduct(ProductList& list);
void deleteProduct(ProductList& list);
string getCategoryName(ProductCategory category);

#endif
