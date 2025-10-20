#include "product_management.h"

int main() {
    // Declaration and initialization of ProductDatabase structure
    ProductDatabase database;
    initializeDatabase(database);
    
    // Display welcome message
    cout << "\n" << string(60, '*') << endl;
    cout << "    WELCOME TO PRODUCT MANAGEMENT SYSTEM" << endl;
    cout << "         Demonstrating OOP Concepts" << endl;
    cout << string(60, '*') << endl;
    cout << "\nDatabase: " << database.database_name << endl;
    cout << "Created: " << database.created_date << endl;
    cout << "Current Products: " << database.total_products << endl;
    
    int choice;
    
    // Main program loop
    do {
        displayMenu();
        cin >> choice;
        
        switch (choice) {
            case 1:
                addProduct(database);
                break;
            case 2:
                displayAllProducts(database);
                break;
            case 3:
                searchProduct(database);
                break;
            case 4:
                updateProduct(database);
                break;
            case 5:
                deleteProduct(database);
                break;
            case 6:
                displayProductsByCategory(database);
                break;
            case 7:
                displayLowStockProducts(database);
                break;
            case 8:
                calculateTotalInventoryValue(database);
                break;
            case 9:
                cout << "\nThank you for using Product Management System!" << endl;
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
        
        if (choice != 9) {
            cout << "\nPress Enter to continue...";
            cin.ignore();
            cin.get();
        }
        
    } while (choice != 9);
    
    return 0;
}
