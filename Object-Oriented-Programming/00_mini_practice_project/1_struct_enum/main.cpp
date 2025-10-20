#include "product_management.h"

int main() {
    // Declaration and initialization of ProductList structure
    ProductList productList;
    initializeProductList(productList);
    
    // Display welcome message
    cout << "\n" << string(50, '*') << endl;
    cout << "   WELCOME TO SIMPLE PRODUCT MANAGER" << endl;
    cout << "      Demonstrating Basic OOP Concepts" << endl;
    cout << string(50, '*') << endl;
    cout << "\nCurrent Products: " << productList.count << endl;
    
    int choice;
    
    // Main program loop
    do {
        displayMenu();
        cin >> choice;
        
        switch (choice) {
            case 1:
                addProduct(productList);
                break;
            case 2:
                displayAllProducts(productList);
                break;
            case 3:
                searchProduct(productList);
                break;
            case 4:
                updateProduct(productList);
                break;
            case 5:
                deleteProduct(productList);
                break;
            case 6:
                cout << "\nThank you for using Simple Product Manager!" << endl;
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
        
        if (choice != 6) {
            cout << "\nPress Enter to continue...";
            cin.ignore();
            cin.get();
        }
        
    } while (choice != 6);
    
    return 0;
}
