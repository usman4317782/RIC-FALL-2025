#include "product_management.h"
#include <cstring>
#include <cstdlib>

// Initialize the product database
void initializeDatabase(ProductDatabase& db) {
    db.total_products = 0;
    strcpy(db.database_name, "Product Management System");
    strcpy(db.created_date, "20/10/2025");
}

// Display main menu
void displayMenu() {
    cout << "\n" << string(50, '=') << endl;
    cout << "       PRODUCT MANAGEMENT SYSTEM" << endl;
    cout << string(50, '=') << endl;
    cout << "1. Add New Product" << endl;
    cout << "2. Display All Products" << endl;
    cout << "3. Search Product" << endl;
    cout << "4. Update Product" << endl;
    cout << "5. Delete Product" << endl;
    cout << "6. Display Products by Category" << endl;
    cout << "7. Display Low Stock Products" << endl;
    cout << "8. Calculate Total Inventory Value" << endl;
    cout << "9. Exit" << endl;
    cout << string(50, '=') << endl;
    cout << "Enter your choice: ";
}

// Add a new product to the database
void addProduct(ProductDatabase& db) {
    if (db.total_products >= 100) {
        cout << "Database is full! Cannot add more products." << endl;
        return;
    }
    
    Product& newProduct = db.products[db.total_products];
    
    cout << "\n--- Adding New Product ---" << endl;
    
    // Basic product information (primitive data types)
    cout << "Enter Product ID: ";
    cin >> newProduct.product_id;
    cin.ignore();
    
    cout << "Enter Product Name: ";
    cin.getline(newProduct.product_name, 100);
    
    cout << "Enter Description: ";
    cin.getline(newProduct.description, 200);
    
    cout << "Enter Manufacturer: ";
    cin.getline(newProduct.manufacturer, 50);
    
    cout << "Enter Model Number: ";
    cin.getline(newProduct.model_number, 30);
    
    // Enumeration input
    cout << "\nSelect Category:" << endl;
    cout << "1. Electronics  2. Clothing  3. Books" << endl;
    cout << "4. Home & Garden  5. Sports  6. Food & Beverages" << endl;
    cout << "Enter choice (1-6): ";
    int categoryChoice;
    cin >> categoryChoice;
    newProduct.category = static_cast<ProductCategory>(categoryChoice);
    
    cout << "\nSelect Status:" << endl;
    cout << "1. Available  2. Out of Stock  3. Discontinued  4. Coming Soon" << endl;
    cout << "Enter choice (1-4): ";
    int statusChoice;
    cin >> statusChoice;
    newProduct.status = static_cast<ProductStatus>(statusChoice);
    
    cout << "\nSelect Priority Level:" << endl;
    cout << "1. Low  2. Medium  3. High  4. Critical" << endl;
    cout << "Enter choice (1-4): ";
    int priorityChoice;
    cin >> priorityChoice;
    newProduct.priority = static_cast<PriorityLevel>(priorityChoice);
    
    // Nested structure: Price information
    cout << "\n--- Price Information ---" << endl;
    cout << "Enter Cost Price: ";
    cin >> newProduct.pricing.cost_price;
    cout << "Enter Selling Price: ";
    cin >> newProduct.pricing.selling_price;
    cout << "Enter Discount Percentage: ";
    cin >> newProduct.pricing.discount_percent;
    cout << "Enter Currency (e.g., USD, PKR): ";
    cin >> newProduct.pricing.currency;
    
    // Nested structure: Dimensions
    cout << "\n--- Physical Specifications ---" << endl;
    cout << "Enter Length: ";
    cin >> newProduct.physical_specs.length;
    cout << "Enter Width: ";
    cin >> newProduct.physical_specs.width;
    cout << "Enter Height: ";
    cin >> newProduct.physical_specs.height;
    cout << "Enter Weight: ";
    cin >> newProduct.physical_specs.weight;
    cout << "Enter Unit (cm, inch, etc.): ";
    cin >> newProduct.physical_specs.unit;
    
    // Nested structure: Supplier information
    cout << "\n--- Supplier Information ---" << endl;
    cout << "Enter Supplier ID: ";
    cin >> newProduct.supplier_info.supplier_id;
    cin.ignore();
    cout << "Enter Supplier Name: ";
    cin.getline(newProduct.supplier_info.name, 50);
    cout << "Enter Contact Number: ";
    cin.getline(newProduct.supplier_info.contact_number, 15);
    cout << "Enter Email: ";
    cin.getline(newProduct.supplier_info.email, 50);
    cout << "Enter Address: ";
    cin.getline(newProduct.supplier_info.address, 100);
    
    // Nested structure: Inventory details
    cout << "\n--- Inventory Details ---" << endl;
    cout << "Enter Current Stock: ";
    cin >> newProduct.inventory_details.current_stock;
    cout << "Enter Minimum Stock: ";
    cin >> newProduct.inventory_details.minimum_stock;
    cout << "Enter Maximum Stock: ";
    cin >> newProduct.inventory_details.maximum_stock;
    cout << "Enter Reorder Level: ";
    cin >> newProduct.inventory_details.reorder_level;
    cout << "Auto Reorder (1 for Yes, 0 for No): ";
    cin >> newProduct.inventory_details.auto_reorder;
    
    // Additional information
    cin.ignore();
    cout << "Enter Date Added (DD/MM/YYYY): ";
    cin.getline(newProduct.date_added, 11);
    strcpy(newProduct.last_updated, newProduct.date_added);
    
    cout << "Is Featured Product (1 for Yes, 0 for No): ";
    cin >> newProduct.is_featured;
    
    cout << "Enter Warranty (in months): ";
    cin >> newProduct.warranty_months;
    
    db.total_products++;
    cout << "\nProduct added successfully!" << endl;
}

// Display all products
void displayAllProducts(const ProductDatabase& db) {
    if (db.total_products == 0) {
        cout << "No products in the database." << endl;
        return;
    }
    
    cout << "\n" << string(80, '=') << endl;
    cout << "                    ALL PRODUCTS" << endl;
    cout << string(80, '=') << endl;
    
    for (int i = 0; i < db.total_products; i++) {
        displayProductDetails(db.products[i]);
        cout << string(80, '-') << endl;
    }
}

// Display detailed product information
void displayProductDetails(const Product& product) {
    cout << "\nProduct ID: " << product.product_id << endl;
    cout << "Name: " << product.product_name << endl;
    cout << "Description: " << product.description << endl;
    cout << "Manufacturer: " << product.manufacturer << endl;
    cout << "Model: " << product.model_number << endl;
    cout << "Category: " << getCategoryName(product.category) << endl;
    cout << "Status: " << getStatusName(product.status) << endl;
    cout << "Priority: " << getPriorityName(product.priority) << endl;
    
    // Display pricing information (nested structure)
    cout << "\n--- Pricing ---" << endl;
    cout << "Cost Price: " << product.pricing.cost_price << " " << product.pricing.currency << endl;
    cout << "Selling Price: " << product.pricing.selling_price << " " << product.pricing.currency << endl;
    cout << "Discount: " << product.pricing.discount_percent << "%" << endl;
    cout << "Final Price: " << calculateDiscountedPrice(product.pricing) << " " << product.pricing.currency << endl;
    
    // Display dimensions (nested structure)
    cout << "\n--- Dimensions ---" << endl;
    cout << "Size: " << product.physical_specs.length << "x" 
         << product.physical_specs.width << "x" 
         << product.physical_specs.height << " " << product.physical_specs.unit << endl;
    cout << "Weight: " << product.physical_specs.weight << " " << product.physical_specs.unit << endl;
    
    // Display supplier info (nested structure)
    cout << "\n--- Supplier ---" << endl;
    cout << "Supplier: " << product.supplier_info.name << " (ID: " << product.supplier_info.supplier_id << ")" << endl;
    cout << "Contact: " << product.supplier_info.contact_number << endl;
    cout << "Email: " << product.supplier_info.email << endl;
    
    // Display inventory (nested structure)
    cout << "\n--- Inventory ---" << endl;
    cout << "Current Stock: " << product.inventory_details.current_stock << endl;
    cout << "Min/Max Stock: " << product.inventory_details.minimum_stock 
         << "/" << product.inventory_details.maximum_stock << endl;
    cout << "Reorder Level: " << product.inventory_details.reorder_level << endl;
    cout << "Auto Reorder: " << (product.inventory_details.auto_reorder ? "Yes" : "No") << endl;
    
    cout << "\n--- Additional Info ---" << endl;
    cout << "Date Added: " << product.date_added << endl;
    cout << "Last Updated: " << product.last_updated << endl;
    cout << "Featured: " << (product.is_featured ? "Yes" : "No") << endl;
    cout << "Warranty: " << product.warranty_months << " months" << endl;
}

// Search for a product by ID
void searchProduct(const ProductDatabase& db) {
    if (db.total_products == 0) {
        cout << "No products in the database." << endl;
        return;
    }
    
    int searchId;
    cout << "Enter Product ID to search: ";
    cin >> searchId;
    
    for (int i = 0; i < db.total_products; i++) {
        if (db.products[i].product_id == searchId) {
            cout << "\nProduct Found!" << endl;
            displayProductDetails(db.products[i]);
            return;
        }
    }
    
    cout << "Product with ID " << searchId << " not found." << endl;
}

// Update product information
void updateProduct(ProductDatabase& db) {
    if (db.total_products == 0) {
        cout << "No products in the database." << endl;
        return;
    }
    
    int updateId;
    cout << "Enter Product ID to update: ";
    cin >> updateId;
    
    for (int i = 0; i < db.total_products; i++) {
        if (db.products[i].product_id == updateId) {
            cout << "\nCurrent Product Details:" << endl;
            displayProductDetails(db.products[i]);
            
            cout << "\nWhat would you like to update?" << endl;
            cout << "1. Stock Quantity" << endl;
            cout << "2. Price" << endl;
            cout << "3. Status" << endl;
            cout << "Enter choice: ";
            
            int choice;
            cin >> choice;
            
            switch (choice) {
                case 1:
                    cout << "Enter new stock quantity: ";
                    cin >> db.products[i].inventory_details.current_stock;
                    break;
                case 2:
                    cout << "Enter new selling price: ";
                    cin >> db.products[i].pricing.selling_price;
                    break;
                case 3:
                    cout << "Select new status (1-4): ";
                    int newStatus;
                    cin >> newStatus;
                    db.products[i].status = static_cast<ProductStatus>(newStatus);
                    break;
                default:
                    cout << "Invalid choice." << endl;
                    return;
            }
            
            strcpy(db.products[i].last_updated, "20/10/2025");
            cout << "Product updated successfully!" << endl;
            return;
        }
    }
    
    cout << "Product with ID " << updateId << " not found." << endl;
}

// Delete a product
void deleteProduct(ProductDatabase& db) {
    if (db.total_products == 0) {
        cout << "No products in the database." << endl;
        return;
    }
    
    int deleteId;
    cout << "Enter Product ID to delete: ";
    cin >> deleteId;
    
    for (int i = 0; i < db.total_products; i++) {
        if (db.products[i].product_id == deleteId) {
            // Shift all products after this one to the left
            for (int j = i; j < db.total_products - 1; j++) {
                db.products[j] = db.products[j + 1];
            }
            db.total_products--;
            cout << "Product deleted successfully!" << endl;
            return;
        }
    }
    
    cout << "Product with ID " << deleteId << " not found." << endl;
}

// Display products by category
void displayProductsByCategory(const ProductDatabase& db) {
    if (db.total_products == 0) {
        cout << "No products in the database." << endl;
        return;
    }
    
    cout << "Select Category:" << endl;
    cout << "1. Electronics  2. Clothing  3. Books" << endl;
    cout << "4. Home & Garden  5. Sports  6. Food & Beverages" << endl;
    cout << "Enter choice (1-6): ";
    
    int categoryChoice;
    cin >> categoryChoice;
    ProductCategory selectedCategory = static_cast<ProductCategory>(categoryChoice);
    
    cout << "\nProducts in " << getCategoryName(selectedCategory) << " category:" << endl;
    cout << string(60, '=') << endl;
    
    bool found = false;
    for (int i = 0; i < db.total_products; i++) {
        if (db.products[i].category == selectedCategory) {
            cout << "ID: " << db.products[i].product_id 
                 << " | Name: " << db.products[i].product_name 
                 << " | Stock: " << db.products[i].inventory_details.current_stock << endl;
            found = true;
        }
    }
    
    if (!found) {
        cout << "No products found in this category." << endl;
    }
}

// Display products with low stock
void displayLowStockProducts(const ProductDatabase& db) {
    if (db.total_products == 0) {
        cout << "No products in the database." << endl;
        return;
    }
    
    cout << "\nLow Stock Products (Below Reorder Level):" << endl;
    cout << string(60, '=') << endl;
    
    bool found = false;
    for (int i = 0; i < db.total_products; i++) {
        if (db.products[i].inventory_details.current_stock <= db.products[i].inventory_details.reorder_level) {
            cout << "ID: " << db.products[i].product_id 
                 << " | Name: " << db.products[i].product_name 
                 << " | Current Stock: " << db.products[i].inventory_details.current_stock
                 << " | Reorder Level: " << db.products[i].inventory_details.reorder_level << endl;
            found = true;
        }
    }
    
    if (!found) {
        cout << "All products have sufficient stock." << endl;
    }
}

// Calculate total inventory value
void calculateTotalInventoryValue(const ProductDatabase& db) {
    if (db.total_products == 0) {
        cout << "No products in the database." << endl;
        return;
    }
    
    double totalValue = 0.0;
    
    cout << "\nInventory Value Report:" << endl;
    cout << string(60, '=') << endl;
    
    for (int i = 0; i < db.total_products; i++) {
        double productValue = db.products[i].inventory_details.current_stock * 
                             db.products[i].pricing.selling_price;
        totalValue += productValue;
        
        cout << db.products[i].product_name 
             << " | Stock: " << db.products[i].inventory_details.current_stock
             << " | Price: " << db.products[i].pricing.selling_price
             << " | Value: " << productValue << endl;
    }
    
    cout << string(60, '-') << endl;
    cout << "Total Inventory Value: " << totalValue << endl;
}

// Helper function to get category name from enum
string getCategoryName(ProductCategory category) {
    switch (category) {
        case ELECTRONICS: return "Electronics";
        case CLOTHING: return "Clothing";
        case BOOKS: return "Books";
        case HOME_GARDEN: return "Home & Garden";
        case SPORTS: return "Sports";
        case FOOD_BEVERAGES: return "Food & Beverages";
        default: return "Unknown";
    }
}

// Helper function to get status name from enum
string getStatusName(ProductStatus status) {
    switch (status) {
        case AVAILABLE: return "Available";
        case OUT_OF_STOCK: return "Out of Stock";
        case DISCONTINUED: return "Discontinued";
        case COMING_SOON: return "Coming Soon";
        default: return "Unknown";
    }
}

// Helper function to get priority name from enum
string getPriorityName(PriorityLevel priority) {
    switch (priority) {
        case LOW: return "Low";
        case MEDIUM: return "Medium";
        case HIGH: return "High";
        case CRITICAL: return "Critical";
        default: return "Unknown";
    }
}

// Calculate discounted price
double calculateDiscountedPrice(const Price& pricing) {
    return pricing.selling_price * (1.0 - pricing.discount_percent / 100.0);
}
