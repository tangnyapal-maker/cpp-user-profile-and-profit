#include <iostream>
#include <string>
using namespace std;

int main() {
    // -------------------------------------
    // TASK I: USER PROFILE PROGRAM
    // -------------------------------------
    string firstName, lastName, fullName, favoriteMeal, favoriteMovie;

    cout << "===============================" << endl;
    cout << "      USER PROFILE DETAILS     " << endl;
    cout << "===============================" << endl;

    // Fake Data
    firstName = "Samantha";
    lastName = "Kimani";
    fullName = "Samantha Kimani";
    favoriteMeal = "Spaghetti Bolognese";
    favoriteMovie = "The Little Mermaid";

    cout << "\n-------------------------------------------" << endl;
    cout << " First Name     : " << firstName << endl;
    cout << " Last Name      : " << lastName << endl;
    cout << " Full Name      : " << fullName << endl;
    cout << " Favorite Meal  : " << favoriteMeal << endl;
    cout << " Favorite Movie : " << favoriteMovie << endl;
    cout << "-------------------------------------------" << endl;

    // -------------------------------------
    // TASK II: PROFIT CALCULATION PROGRAM
    // -------------------------------------
    double buyingPrice, sellingPrice, profit;

    cout << "\n===============================" << endl;
    cout << "   MOTOR VEHICLE PROFIT REPORT " << endl;
    cout << "===============================" << endl;

    // Fake Data
    buyingPrice = 720000;      // KES
    sellingPrice = 875000;     // KES

    profit = sellingPrice - buyingPrice;

    cout << "\nBuying Price  : " << buyingPrice << " KES" << endl;
    cout << "Selling Price : " << sellingPrice << " KES" << endl;
    cout << "-------------------------------------------" << endl;
    cout << "Profit        : " << profit << " KES" << endl;
    cout << "-------------------------------------------" << endl;

    cout << "\nProgram executed successfully!" << endl;

    return 0;
}