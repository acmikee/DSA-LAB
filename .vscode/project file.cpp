#include <iostream>
using namespace std;

int main() {
    // Start with a welcoming ASCII box for visual appeal
    cout << "*****************************************************\n";
    cout << "*                                                   *\n";
    cout << "*   Welcome to the Product Sales and Inventory      *\n";
    cout << "*   Analysis Program!                               *\n";
    cout << "*                                                   *\n";
    cout << "*****************************************************\n\n";

    // Program description with added details
    cout << "This program is designed to assist store owners in managing product sales and inventory levels. 🚀\n";
    cout << "It allows for the seamless input and tracking of sales data, monitoring stock levels, and generating insightful reports. 📊\n";
    cout << "By providing an open view of sales trends and stock conditions, this tool helps optimize inventory and makes decision-making easier. 🛒\n";
    cout << "It simplifies store management by giving you a comprehensive overview of your business operations. \n\n";

    // Reminder about compiled languages
    cout << "**************************************************************************\n";
    
    cout << "  Reminder: C++ is a compiled language, meaning it must be compiled before execution. ⚙️      \n";
    cout << "This means the source code is translated into machine code before it can run on your system. 🖥   ️\n\n";
    cout << "**************************************************************************\n\n";

    cout << "Let's get started with your product tracking! 📈\n";

    return 0;
}
2 Declare Variables for Product Details
#include <iostream>
using namespace std;
int main() {
    // Declaring variables for product details
     string productName;
    int productCategory;
    int initialInventoryQuantity;
    float productPricePerUnit;
    int numberOfItemsSold; 
  }
3  Declare Variables for Computed Values:
#include <iostream>
using namespace std;
int main() {
    int newInventory;
    float totalSalesAmount;          
    string inventoryStatus;

    return 0;
}
4 Demonstrate Different Initialization Methods
#include <iostream>
using namespace std;
int main() {
// method number 1 Direct initialization
  int a = 5;   
double b = 9.68;     
string c= "michael";   
// method number 2 List Initialization 
int A {71}; 
double B {9.68}       
string C{"michael"};  
//method number 3 Assignment after Declaration
    int a;
    x = 5; 
    double b;
    y = 9.68;
    string z;
    z = "michael;
}
5  Use Type Deduction to Create Extra Helper Variables

#include <iostream>
using namespace std;

int main() {
    // Original product details variables
    int initialInventoryQuantity = 90;          
    float productPricePerUnit = 12.89;        
    int numberOfItemsSold = 50;                 
   // to calculate the total sales amount 
    float totalSales = numberOfItemsSold * productPricePerUnit;

    // Createing  helper variable using auto 

    auto salesHelper = totalSales; 

    // Createing helper variable using decltype
    decltype(initialInventoryQuantity) extraInventory = 90;  // Same type as initialInventoryQuantity (which is int)

}
6 Define Constants:
 
#include <iostream>
using namespace std;

int main() {
#define TAX_RATE 0.12      
const float taxRate = 0.12;  
}

7. Input from the User: 
#include <iostream>
using namespace std;

int main() {
     string productName;
    int productCategory;
    int initialInventoryQuantity;
    float productPricePerUnit;
    int numberOfItemsSold; 

    cout << "\nEnter Product Name (single word): ";
    cin >> productName;
    
    cout << "Enter Product Category (1 to 5): ";
    cin >> productCategory;
    
    cout << "Enter Initial Inventory Quantity: ";
    cin >> initialInventoryQuantity;
    
    cout << "Enter Product Price per Unit: ";
    cin >> productPricePerUnit;
    
    cout << "Enter Number of Items Sold: ";
    cin >> numberOfItemsSold;
}

8 Perform Calculations
#include <iostream>
using namespace std;
int main() {
     string productName;
    int productCategory;
    int initialInventoryQuantity;
    float productPricePerUnit;
    int numberOfItemsSold; 
  
    newInventory = initialInventoryQuantity;
    newInventory -= itemsSold;  

    totalSales = numberOfItemsSold * productPricePerUnit;
}
9 Use a Conditional (Ternary) Operator
#include <iostream>
using namespace std;

int main() {
     string productName;
    int productCategory;
    int initialInventoryQuantity;
    float productPricePerUnit;
    int numberOfItemsSold; 
    inventoryStatus = (newInventory < 10) ? "Low Inventory" : "Sufficient Inventory";
}

10 Implement Flow Control
#include <iostream>
using namespace std;

int main() {
    int productCategory;   // Product category (1 to 5)
    
    cout << "Enter the product category (1-5): ";
    cin >> productCategory;
    if (productCategory >= 1 && productCategory <= 5) {
        cout << "Valid product category. \n";

       
        switch (productCategory) {
            case 1:
                cout << "Category 1: Electronics \n" ;
                break;
            case 2:
                cout << "Category 2: Groceries \n" ;
                break;
            case 3:
                cout << "Category 3: Clothing \n";
                break;
            case 4:
                cout << "Category 4: Stationery \n" ;
                break;
            case 5:
                cout << "Category 5: Miscellaneous \n" ;
                break;
            default:
                cout << "Invalid category \n." ;
        }
    } else {
        cout << "Invalid product category. Please enter a category between 1 and 5. \n";
    }

    return 0;
}
11. Use a For Loop:
#include <iostream>
using namespace std;

int main() {
    // Define product details
    int numberOfItemsSold = 50;      
  float productPricePerUnit = 12.89;        
    cout << "*********************** Receipt *********************** \n"; 
    cout << "Item #   Price \n";
    cout << "-------------------------------------- \n" ;
    for (int i = 1; i <= numberOfItemsSold; ++i) {
        cout << "Item " << i << "   $" << productPricePerUnit ;
    }
    float totalAmount = numberOfItemsSold * productPricePerUnit;
    cout << "----------------------------- \n";
    cout << "Total: $" << totalAmount ;
    cout << "********************** Thank you for shopping! **********************";

    return 0;
}

12 . Output All Information:
    cout << "\nTax Rate (Preprocessor): " << TAX_RATE << endl;
    cout << "Tax Rate (const variable): " << taxRate << endl;
    cout << "\n--- Product Summary ---\n";
    cout << "Product Name: " << productName << endl;
    cout << "Category: " << productCategory << endl;
    cout << "Initial Inventory: " << initialInventoryQuantity << endl;
    cout << "Product Price: $" << productPricePerUnit << endl;
    cout << "Items Sold: " << numberOfItemsSold << endl;
    cout << "New Inventory: " << newInventory << endl;
    cout << "Total Sales: $" << totalSales << endl;
    cout << "Inventory Status: " << inventoryStatus << endl;

    cout << "\n--- Helper Variables ---\n";
    cout << "Sales Helper (auto): $" << salesHelper << endl;
    cout << "Extra Inventory (decltype): " << extraInventory << endl;

    return 0;
}


A Complete C++ Code
#include <iostream>
#define TAX_RATE 0.12 
using namespace std;
int main() {
    // Display Introductory Message
    cout << "*****************************************************\n";
    cout << "*   Welcome to the Product Sales and Inventory      *\n";
    cout << "*   Analysis Program!                               *\n";
    cout << "*****************************************************\n\n";

    cout << "This program helps store owners track inventory and sales efficiently. 📊\n";
    cout << "Reminder: C++ is a compiled language, meaning it must be compiled before execution. ⚙️\n\n";

    // Declare Variables for Product Details
    string productName;
    int productCategory;
    int initialInventoryQuantity;
    float productPricePerUnit;
    int numberOfItemsSold;

    // Get Input from User
    cout << "Enter Product Name (single word): ";
    cin >> productName;
    
    cout << "Enter Product Category (1 to 5): ";
    cin >> productCategory;
    
    cout << "Enter Initial Inventory Quantity: ";
    cin >> initialInventoryQuantity;
    
    cout << "Enter Product Price per Unit: ";
    cin >> productPricePerUnit;
    
    cout << "Enter Number of Items Sold: ";
    cin >> numberOfItemsSold;

    // Declare Variables for Computed Values
    int newInventory = initialInventoryQuantity - numberOfItemsSold; // Compound assignment
    float totalSales = numberOfItemsSold * productPricePerUnit;
    string inventoryStatus = (newInventory < 10) ? "Low Inventory" : "Sufficient Inventory";

    // Demonstrate Different Initialization Methods
    int a = 5;       // Direct initialization
    double b {9.68}; // List initialization
    string c = "naHome"; // Direct initialization
    int d;
    d = 71; // Assignment after declaration

    // Use Type Deduction
    auto salesHelper = totalSales;
    decltype(initialInventoryQuantity) extraInventory = 90;

    // Define Constants
    const float taxRate = 0.12;

    // Implement Flow Control
    if (productCategory >= 1 && productCategory <= 5) {
        cout << "Valid product category.\n";
        switch (productCategory) {
            case 1: cout << "Category 1: Electronics\n"; break;
            case 2: cout << "Category 2: Groceries\n"; break;
            case 3: cout << "Category 3: Clothing\n"; break;
            case 4: cout << "Category 4: Stationery\n"; break;
            case 5: cout << "Category 5: Miscellaneous\n"; break;
        }
    } else {
        cout << "Invalid product category. Please enter a category between 1 and 5.\n";
    }

    // Use a For Loop for Receipt Printing
    cout << "\n*********************** Receipt ***********************\n";
    cout << "Item #   Price\n";
    cout << "--------------------------------------\n";
    for (int i = 1; i <= numberOfItemsSold; ++i) {
        cout << "Item " << i << "   $" << productPricePerUnit << endl;
    }
    cout << "-----------------------------\n";
    cout << "Total: $" << totalSales << endl;
    cout << "********************** Thank you for shopping! **********************\n\n";

    // Output All Information
    cout << "\nTax Rate (Preprocessor): " << TAX_RATE << endl;
    cout << "Tax Rate (const variable): " << taxRate << endl;
    cout << "\n--- Product Summary ---\n";
    cout << "Product Name: " << productName << endl;
    cout << "Category: " << productCategory << endl;
    cout << "Initial Inventory: " << initialInventoryQuantity << endl;
    cout << "Product Price: $" << productPricePerUnit << endl;
    cout << "Items Sold: " << numberOfItemsSold << endl;
    cout << "New Inventory: " << newInventory << endl;
    cout << "Total Sales: $" << totalSales << endl;
    cout << "Inventory Status: " << inventoryStatus << endl;

    cout << "\n--- Helper Variables ---\n";
    cout << "Sales Helper (auto): $" << salesHelper << endl;
    cout << "Extra Inventory (decltype): " << extraInventory << endl;

    return 0;
}
