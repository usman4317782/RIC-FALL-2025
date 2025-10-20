#ifndef PRODUCT_MANAGEMENT_H
#define PRODUCT_MANAGEMENT_H

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

// Enumerations - User defined data types
enum ProductCategory {
    ELECTRONICS = 1,
    CLOTHING,
    BOOKS,
    HOME_GARDEN,
    SPORTS,
    FOOD_BEVERAGES
};

enum ProductStatus {
    AVAILABLE = 1,
    OUT_OF_STOCK,
    DISCONTINUED,
    COMING_SOON
};

enum PriorityLevel {
    LOW = 1,
    MEDIUM,
    HIGH,
    CRITICAL
};

// Simple Structure - Price Information
struct Price {
    double cost_price;        // Primitive data type: double
    double selling_price;     // Primitive data type: double
    double discount_percent;  // Primitive data type: double
    char currency[4];         // Primitive data type: char array
};

// Simple Structure - Dimensions
struct Dimensions {
    float length;    // Primitive data type: float
    float width;     // Primitive data type: float
    float height;    // Primitive data type: float
    float weight;    // Primitive data type: float
    char unit[10];   // Primitive data type: char array
};

// Simple Structure - Supplier Information
struct Supplier {
    int supplier_id;          // Primitive data type: int
    char name[50];            // Primitive data type: char array
    char contact_number[15];  // Primitive data type: char array
    char email[50];           // Primitive data type: char array
    char address[100];        // Primitive data type: char array
};

// Simple Structure - Inventory Details
struct Inventory {
    int current_stock;     // Primitive data type: int
    int minimum_stock;     // Primitive data type: int
    int maximum_stock;     // Primitive data type: int
    int reorder_level;     // Primitive data type: int
    bool auto_reorder;     // Primitive data type: bool
};

// Nested Structure - Product (contains other structures)
struct Product {
    // Basic product information using primitive data types
    int product_id;                    // Primitive data type: int
    char product_name[100];            // Primitive data type: char array
    char description[200];             // Primitive data type: char array
    char manufacturer[50];             // Primitive data type: char array
    char model_number[30];             // Primitive data type: char array
    
    // Enumeration members
    ProductCategory category;          // User defined data type: enum
    ProductStatus status;              // User defined data type: enum
    PriorityLevel priority;            // User defined data type: enum
    
    // Nested structures - structures within structure
    Price pricing;                     // User defined data type: struct
    Dimensions physical_specs;         // User defined data type: struct
    Supplier supplier_info;            // User defined data type: struct
    Inventory inventory_details;       // User defined data type: struct
    
    // Additional primitive data types
    char date_added[11];               // Primitive data type: char array (DD/MM/YYYY)
    char last_updated[11];             // Primitive data type: char array
    bool is_featured;                  // Primitive data type: bool
    int warranty_months;               // Primitive data type: int
};

// Structure for managing multiple products
struct ProductDatabase {
    Product products[100];    // Array of Product structures
    int total_products;       // Primitive data type: int
    char database_name[50];   // Primitive data type: char array
    char created_date[11];    // Primitive data type: char array
};

// Function declarations
void initializeDatabase(ProductDatabase& db);
void displayMenu();
void addProduct(ProductDatabase& db);
void displayAllProducts(const ProductDatabase& db);
void searchProduct(const ProductDatabase& db);
void updateProduct(ProductDatabase& db);
void deleteProduct(ProductDatabase& db);
void displayProductsByCategory(const ProductDatabase& db);
void displayLowStockProducts(const ProductDatabase& db);
void calculateTotalInventoryValue(const ProductDatabase& db);
void displayProductDetails(const Product& product);
string getCategoryName(ProductCategory category);
string getStatusName(ProductStatus status);
string getPriorityName(PriorityLevel priority);
double calculateDiscountedPrice(const Price& pricing);

#endif
