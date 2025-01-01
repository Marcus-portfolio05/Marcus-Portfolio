#include <iostream>
using namespace std;

// Declaring Menu Information
string customerName[100], Menu_Items[10] = {"Burger", "Pizza", "Pasta", "Salad", "Sandwich", "Fries", "Nachos", "Wings", "Soup", "Tacos"};
float Menu_Prices[10] = {5.25, 8.00, 7.00, 4.15, 6.75, 2.50, 3.50, 9.00, 4.50, 5.50};
int quantity,option,orderID = 0,i, id, itemNum;
int orderQuantities[100][10] = {0};  
float orderPrices[100][10] = {0};
void addOrder();
void viewOrder();
float totalCost();
void summaryReport();

int main() {
    cout << "Restaurant Order Management System" << endl;

    // Main Menu
    do {
        cout << "\t 1. Add Order" << endl
             << "\t 2. View Orders" << endl
             << "\t 3. Calculate Total Cost" << endl
             << "\t 4. Generate Summary Report" << endl
             << "\t 5. Exit" << endl;
        cout << "\nChoose an option: ";
        cin >> option;
        
        switch (option) { 
            case 1: addOrder(); break; 
            case 2: viewOrder(); break; 
            case 3: cout << "Total Cost of All Orders: $" << totalCost() << endl; break; 
            case 4: summaryReport(); break; 
            case 5: cout << "Exiting the system. Goodbye!" << endl; break; 
            default: cout << "Invalid option. Please choose again."; }
    } while (option < 1 || option > 5);
}
// Add Order
void addOrder() {
    // Interface 2: Food Menu
    
     cout << endl << "Enter customer name: ";
    cin >> customerName[orderID];
    
    cout << endl << "Menu: " << endl;
    for (i = 0; i < 10; i++) {
        cout << "\t" << i + 1 << ". " << Menu_Items[i] << " - $" << Menu_Prices[i] << endl;
    }

    cout << endl << "Select an item by number: ";
    cin >> itemNum;

    do {
        cout << "Enter quantity: ";
        cin >> quantity;
    } while (quantity < 1 || quantity > 100);

    int index = itemNum - 1;
    orderQuantities[orderID][index] += quantity;
    orderPrices[orderID][index] += Menu_Prices[index] * quantity;

    orderID++;
    cout << "Order added successfully!\n";
}

// View Order
void viewOrder() {
    cout << "Order Summary:\n";
    for (int j = 0; j < 10; j++) {
        if (orderQuantities[id][j] > 0) {
            cout << "Order ID: " << orderID << " | Customer: " << customerName << " | Item: " << Menu_Items[j] << " | Quantity: " << orderQuantities[id][j] << " | Price: $" << orderPrices[id][j] << endl;
        }
    }
}

// Total Cost
float totalCost() {
    float total = 0;
    for (int j = 0; j < 10; j++) {
        total = orderPrices[id][j];
    }
    return total;
}

// Summary Report
void summaryReport() {
    cout << "Summary Report:\n" << "Total Orders: "<< endl
    << orderID << endl 
    << "Total Cost: $" << totalCost() << endl;
}
