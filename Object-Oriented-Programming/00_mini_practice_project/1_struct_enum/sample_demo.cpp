#include "product_management.h"

// Function to create sample products demonstrating all concepts
void createSampleProducts(ProductDatabase& db) {
    // Sample Product 1 - Electronics
    Product laptop;
    
    // Primitive data types initialization
    laptop.product_id = 1001;
    strcpy(laptop.product_name, "Gaming Laptop Pro");
    strcpy(laptop.description, "High-performance gaming laptop with RGB keyboard");
    strcpy(laptop.manufacturer, "TechCorp");
    strcpy(laptop.model_number, "TC-GL-2025");
    
    // Enumeration initialization
    laptop.category = ELECTRONICS;
    laptop.status = AVAILABLE;
    laptop.priority = HIGH;
    
    // Nested structure initialization - Price
    laptop.pricing.cost_price = 800.00;
    laptop.pricing.selling_price = 1200.00;
    laptop.pricing.discount_percent = 10.0;
    strcpy(laptop.pricing.currency, "USD");
    
    // Nested structure initialization - Dimensions
    laptop.physical_specs.length = 35.5;
    laptop.physical_specs.width = 25.0;
    laptop.physical_specs.height = 2.5;
    laptop.physical_specs.weight = 2.8;
    strcpy(laptop.physical_specs.unit, "cm");
    
    // Nested structure initialization - Supplier
    laptop.supplier_info.supplier_id = 501;
    strcpy(laptop.supplier_info.name, "Global Tech Suppliers");
    strcpy(laptop.supplier_info.contact_number, "+1-555-0123");
    strcpy(laptop.supplier_info.email, "sales@globaltech.com");
    strcpy(laptop.supplier_info.address, "123 Tech Street, Silicon Valley, CA");
    
    // Nested structure initialization - Inventory
    laptop.inventory_details.current_stock = 25;
    laptop.inventory_details.minimum_stock = 5;
    laptop.inventory_details.maximum_stock = 50;
    laptop.inventory_details.reorder_level = 8;
    laptop.inventory_details.auto_reorder = true;
    
    // Additional primitive data types
    strcpy(laptop.date_added, "15/10/2025");
    strcpy(laptop.last_updated, "20/10/2025");
    laptop.is_featured = true;
    laptop.warranty_months = 24;
    
    // Add to database
    db.products[db.total_products++] = laptop;
    
    // Sample Product 2 - Clothing
    Product tshirt;
    
    tshirt.product_id = 2001;
    strcpy(tshirt.product_name, "Cotton T-Shirt");
    strcpy(tshirt.description, "100% organic cotton casual t-shirt");
    strcpy(tshirt.manufacturer, "FashionCorp");
    strcpy(tshirt.model_number, "FC-TS-001");
    
    tshirt.category = CLOTHING;
    tshirt.status = AVAILABLE;
    tshirt.priority = MEDIUM;
    
    // Price structure
    tshirt.pricing.cost_price = 8.00;
    tshirt.pricing.selling_price = 15.00;
    tshirt.pricing.discount_percent = 5.0;
    strcpy(tshirt.pricing.currency, "USD");
    
    // Dimensions structure
    tshirt.physical_specs.length = 70.0;
    tshirt.physical_specs.width = 50.0;
    tshirt.physical_specs.height = 1.0;
    tshirt.physical_specs.weight = 0.2;
    strcpy(tshirt.physical_specs.unit, "cm");
    
    // Supplier structure
    tshirt.supplier_info.supplier_id = 502;
    strcpy(tshirt.supplier_info.name, "Textile Manufacturers Ltd");
    strcpy(tshirt.supplier_info.contact_number, "+1-555-0456");
    strcpy(tshirt.supplier_info.email, "orders@textilemanuf.com");
    strcpy(tshirt.supplier_info.address, "456 Fashion Ave, New York, NY");
    
    // Inventory structure
    tshirt.inventory_details.current_stock = 100;
    tshirt.inventory_details.minimum_stock = 20;
    tshirt.inventory_details.maximum_stock = 200;
    tshirt.inventory_details.reorder_level = 25;
    tshirt.inventory_details.auto_reorder = true;
    
    strcpy(tshirt.date_added, "18/10/2025");
    strcpy(tshirt.last_updated, "20/10/2025");
    tshirt.is_featured = false;
    tshirt.warranty_months = 6;
    
    db.products[db.total_products++] = tshirt;
    
    // Sample Product 3 - Books (Low Stock Example)
    Product book;
    
    book.product_id = 3001;
    strcpy(book.product_name, "C++ Programming Guide");
    strcpy(book.description, "Comprehensive guide to C++ programming");
    strcpy(book.manufacturer, "EduBooks Publishing");
    strcpy(book.model_number, "EB-CPP-2025");
    
    book.category = BOOKS;
    book.status = AVAILABLE;
    book.priority = CRITICAL;
    
    // Price structure
    book.pricing.cost_price = 20.00;
    book.pricing.selling_price = 35.00;
    book.pricing.discount_percent = 15.0;
    strcpy(book.pricing.currency, "USD");
    
    // Dimensions structure
    book.physical_specs.length = 24.0;
    book.physical_specs.width = 18.0;
    book.physical_specs.height = 3.0;
    book.physical_specs.weight = 0.8;
    strcpy(book.physical_specs.unit, "cm");
    
    // Supplier structure
    book.supplier_info.supplier_id = 503;
    strcpy(book.supplier_info.name, "Academic Publishers Inc");
    strcpy(book.supplier_info.contact_number, "+1-555-0789");
    strcpy(book.supplier_info.email, "sales@academicpub.com");
    strcpy(book.supplier_info.address, "789 Education Blvd, Boston, MA");
    
    // Inventory structure (Low stock example)
    book.inventory_details.current_stock = 3;  // Below reorder level
    book.inventory_details.minimum_stock = 10;
    book.inventory_details.maximum_stock = 100;
    book.inventory_details.reorder_level = 15;
    book.inventory_details.auto_reorder = true;
    
    strcpy(book.date_added, "10/10/2025");
    strcpy(book.last_updated, "19/10/2025");
    book.is_featured = true;
    book.warranty_months = 0;  // Books don't have warranty
    
    db.products[db.total_products++] = book;
}

// Demonstration function showing all OOP concepts
void demonstrateOOPConcepts() {
    cout << "\n" << string(70, '=') << endl;
    cout << "           DEMONSTRATING OOP CONCEPTS" << endl;
    cout << string(70, '=') << endl;
    
    cout << "\n1. PRIMITIVE DATA TYPES USED:" << endl;
    cout << "   - int: product_id, stock quantities, warranty_months" << endl;
    cout << "   - double: cost_price, selling_price, discount_percent" << endl;
    cout << "   - float: length, width, height, weight" << endl;
    cout << "   - char arrays: product_name, description, currency" << endl;
    cout << "   - bool: is_featured, auto_reorder" << endl;
    
    cout << "\n2. USER DEFINED DATA TYPES (ENUMERATIONS):" << endl;
    cout << "   - ProductCategory: ELECTRONICS, CLOTHING, BOOKS, etc." << endl;
    cout << "   - ProductStatus: AVAILABLE, OUT_OF_STOCK, etc." << endl;
    cout << "   - PriorityLevel: LOW, MEDIUM, HIGH, CRITICAL" << endl;
    
    cout << "\n3. SIMPLE STRUCTURES:" << endl;
    cout << "   - Price: Contains cost_price, selling_price, discount, currency" << endl;
    cout << "   - Dimensions: Contains length, width, height, weight, unit" << endl;
    cout << "   - Supplier: Contains supplier info like name, contact, email" << endl;
    cout << "   - Inventory: Contains stock levels and reorder information" << endl;
    
    cout << "\n4. NESTED STRUCTURES:" << endl;
    cout << "   - Product: Contains all simple structures as members" << endl;
    cout << "     * pricing (Price structure)" << endl;
    cout << "     * physical_specs (Dimensions structure)" << endl;
    cout << "     * supplier_info (Supplier structure)" << endl;
    cout << "     * inventory_details (Inventory structure)" << endl;
    
    cout << "\n5. STRUCTURE OPERATIONS DEMONSTRATED:" << endl;
    cout << "   - Declaration: ProductDatabase db;" << endl;
    cout << "   - Definition: Creating structure variables" << endl;
    cout << "   - Initialization: Setting initial values" << endl;
    cout << "   - Accessing members: db.products[i].pricing.cost_price" << endl;
    
    cout << "\n6. ARRAY OF STRUCTURES:" << endl;
    cout << "   - ProductDatabase contains array of Product structures" << endl;
    cout << "   - Demonstrates managing multiple structure instances" << endl;
}

int main() {
    ProductDatabase database;
    initializeDatabase(database);
    
    // Demonstrate OOP concepts
    demonstrateOOPConcepts();
    
    cout << "\n" << string(50, '-') << endl;
    cout << "Creating sample products..." << endl;
    
    // Create sample products
    createSampleProducts(database);
    
    cout << "Sample products created successfully!" << endl;
    cout << "Total products in database: " << database.total_products << endl;
    
    // Display all sample products
    cout << "\n" << string(50, '-') << endl;
    cout << "DISPLAYING SAMPLE PRODUCTS:" << endl;
    displayAllProducts(database);
    
    // Demonstrate low stock products
    cout << "\n" << string(50, '-') << endl;
    displayLowStockProducts(database);
    
    // Calculate total inventory value
    cout << "\n" << string(50, '-') << endl;
    calculateTotalInventoryValue(database);
    
    // Demonstrate accessing nested structure members
    cout << "\n" << string(50, '-') << endl;
    cout << "ACCESSING NESTED STRUCTURE MEMBERS:" << endl;
    cout << "Product 1 pricing info:" << endl;
    cout << "  Cost Price: " << database.products[0].pricing.cost_price << endl;
    cout << "  Selling Price: " << database.products[0].pricing.selling_price << endl;
    cout << "  Currency: " << database.products[0].pricing.currency << endl;
    
    cout << "\nProduct 1 dimensions:" << endl;
    cout << "  Length: " << database.products[0].physical_specs.length << endl;
    cout << "  Width: " << database.products[0].physical_specs.width << endl;
    cout << "  Weight: " << database.products[0].physical_specs.weight << endl;
    
    return 0;
}
