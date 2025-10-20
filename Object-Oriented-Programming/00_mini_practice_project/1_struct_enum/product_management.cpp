#include "product_management.h"
#include <cstring>

// Initialize the product list
void initializeProductList(ProductList& list) {
    list.count = 0;
    cout << "\n=== Simple Product Management System ===" << endl;
    cout << "Maximum capacity: 10 products" << endl;
}

// Display main menu
void displayMenu() {
    cout << "\n" << string(40, '=') << endl;
    cout << "   SIMPLE PRODUCT MANAGER" << endl;
    cout << string(40, '=') << endl;
    cout << "1. Add Product" << endl;
    cout << "2. Display All Products" << endl;
    cout << "3. Search Product" << endl;
    cout << "4. Update Product" << endl;
    cout << "5. Delete Product" << endl;
    cout << "6. Exit" << endl;
    cout << string(40, '=') << endl;
    cout << "Enter your choice: ";
}

// Add a new product
void addProduct(ProductList& list) {
    if (list.count >= 10) {
        cout << "Product list is full! Cannot add more products." << endl;
        return;
    }
    
    Product& newProduct = list.products[list.count];
    
    cout << "\n--- Adding New Product ---" << endl;
    
    // Basic product information (primitive data types)
    cout << "Enter Product ID: ";
    cin >> newProduct.id;
    cin.ignore();
    
    cout << "Enter Product Name: ";
    cin.getline(newProduct.name, 50);
    
    // Enumeration input
    cout << "\nSelect Category:" << endl;
    cout << "1. Electronics  2. Clothing  3. Books  4. Other" << endl;
    cout << "Enter choice (1-4): ";
    int categoryChoice;
    cin >> categoryChoice;
    newProduct.category = static_cast<ProductCategory>(categoryChoice);
    
    cout << "Enter Price: ";
    cin >> newProduct.price;
    
    cout << "Enter Quantity: ";
    cin >> newProduct.quantity;
    
    list.count++;
    cout << "\nProduct added successfully!" << endl;
}

// Display all products
void displayAllProducts(const ProductList& list) {
    if (list.count == 0) {
        cout << "No products in the list." << endl;
        return;
    }
    
    cout << "\n" << string(60, '=') << endl;
    cout << "                ALL PRODUCTS" << endl;
    cout << string(60, '=') << endl;
    cout << "ID\tName\t\tCategory\tPrice\tQty" << endl;
    cout << string(60, '-') << endl;
    
    for (int i = 0; i < list.count; i++) {
        const Product& p = list.products[i];
        cout << p.id << "\t" << p.name << "\t\t" 
             << getCategoryName(p.category) << "\t$" << p.price 
             << "\t" << p.quantity << endl;
    }
    cout << string(60, '=') << endl;
}

// Search for a product by ID
void searchProduct(const ProductList& list) {
    if (list.count == 0) {
        cout << "No products in the list." << endl;
        return;
    }
    
    int searchId;
    cout << "Enter Product ID to search: ";
    cin >> searchId;
    
    for (int i = 0; i < list.count; i++) {
        if (list.products[i].id == searchId) {
            cout << "\nProduct Found!" << endl;
            const Product& p = list.products[i];
            cout << "ID: " << p.id << endl;
            cout << "Name: " << p.name << endl;
            cout << "Category: " << getCategoryName(p.category) << endl;
            cout << "Price: $" << p.price << endl;
            cout << "Quantity: " << p.quantity << endl;
            return;
        }
    }
    
    cout << "Product with ID " << searchId << " not found." << endl;
}

// Update product information
void updateProduct(ProductList& list) {
    if (list.count == 0) {
        cout << "No products in the list." << endl;
        return;
    }
    
    int updateId;
    cout << "Enter Product ID to update: ";
    cin >> updateId;
    
    for (int i = 0; i < list.count; i++) {
        if (list.products[i].id == updateId) {
            cout << "\nWhat would you like to update?" << endl;
            cout << "1. Price" << endl;
            cout << "2. Quantity" << endl;
            cout << "Enter choice: ";
            
            int choice;
            cin >> choice;
            
            switch (choice) {
                case 1:
                    cout << "Enter new price: ";
                    cin >> list.products[i].price;
                    break;
                case 2:
                    cout << "Enter new quantity: ";
                    cin >> list.products[i].quantity;
                    break;
                default:
                    cout << "Invalid choice." << endl;
                    return;
            }
            
            cout << "Product updated successfully!" << endl;
            return;
        }
    }
    
    cout << "Product with ID " << updateId << " not found." << endl;
}

// Delete a product
void deleteProduct(ProductList& list) {
    if (list.count == 0) {
        cout << "No products in the list." << endl;
        return;
    }
    
    int deleteId;
    cout << "Enter Product ID to delete: ";
    cin >> deleteId;
    
    for (int i = 0; i < list.count; i++) {
        if (list.products[i].id == deleteId) {
            // Shift all products after this one to the left
            for (int j = i; j < list.count - 1; j++) {
                list.products[j] = list.products[j + 1];
            }
            list.count--;
            cout << "Product deleted successfully!" << endl;
            return;
        }
    }
    
    cout << "Product with ID " << deleteId << " not found." << endl;
}

// Helper function to get category name from enum
string getCategoryName(ProductCategory category) {
    switch (category) {
        case ELECTRONICS: return "Electronics";
        case CLOTHING: return "Clothing";
        case BOOKS: return "Books";
        case OTHER: return "Other";
        default: return "Unknown";
    }
}
