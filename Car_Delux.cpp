#include <iostream>
#include <string>
using namespace std;

int main() {
    std::string name;
    int carBrand;
    int carModel;
    int carPrice = 0; // Initialize carPrice to 0

    cout << "Please Enter Your Name: ";
    cin >> name;

    cout << "Hello " << name << ", Welcome To Ahmad Car Deluxe Company" << endl;
    cout << "We Have The Following Cars Available Right Now" << endl;
    cout << "1) Toyota  2) Honda  3) Audi" << endl;
    cout << "Press the corresponding number to proceed: ";
    cin >> carBrand;

    switch (carBrand) {
        case 1:
            cout << "You Choose Toyota Brand" << endl;
            cout << "Following Are The Cars Model Available in Toyota Brand" << endl;
            cout << "1) Toyota Camry  2) Toyota Corolla  3) Toyota RAV4" << endl;
            cout << "Enter the relative number to proceed: ";
            cin >> carModel;

            switch (carModel) {
                case 1:
                    cout << "You Choose Toyota Camry" << endl;
                    cout << "Its Price Is $1,000,000" << endl;
                    carPrice = 1000000;
                    break;
                case 2:
                    cout << "You Choose Toyota Corolla" << endl;
                    cout << "Its Price Is $10,000,000" << endl;
                    carPrice = 10000000;
                    break;
                case 3:
                    cout << "You Choose Toyota RAV4" << endl;
                    cout << "Its Price Is $100,000,000" << endl;
                    carPrice = 100000000;
                    break;
                default:
                    cout << "Invalid car model selection." << endl;
            }
            break;

        case 2:
            cout << "You Choose Honda Brand" << endl;
            cout << "Following Are The Cars Model Available in Honda Brand" << endl;
            cout << "1) Honda Civic  2) Honda Accord  3) Honda CR-V" << endl;
            cout << "Enter the relative number to proceed: ";
            cin >> carModel;

            switch (carModel) {
                case 1:
                    cout << "You Choose Honda Civic" << endl;
                    cout << "Its Price Is $1,000,000" << endl;
                    carPrice = 1000000;
                    break;
                case 2:
                    cout << "You Choose Honda Accord" << endl;
                    cout << "Its Price Is $10,000,000" << endl;
                    carPrice = 10000000;
                    break;
                case 3:
                    cout << "You Choose Honda CR-V" << endl;
                    cout << "Its Price Is $100,000,000" << endl;
                    carPrice = 100000000;
                    break;
                default:
                    cout << "Invalid car model selection." << endl;
            }
            break;

        case 3:
            cout << "You Choose Audi Brand" << endl;
            cout << "Following Are The Cars Model Available in Audi Brand" << endl;
            cout << "1) Audi A3  2) Audi A4  3) Audi A6" << endl;
            cout << "Enter the relative number to proceed: ";
            cin >> carModel;

            switch (carModel) {
                case 1:
                    cout << "You Choose Audi A3" << endl;
                    cout << "Its Price Is $1,000,000" << endl;
                    carPrice = 1000000;
                    break;
                case 2:
                    cout << "You Choose Audi A4" << endl;
                    cout << "Its Price Is $10,000,000" << endl;
                    carPrice = 10000000;
                    break;
                case 3:
                    cout << "You Choose Audi A6" << endl;
                    cout << "Its Price Is $100,000,000" << endl;
                    carPrice = 100000000;
                    break;
                default:
                    cout << "Invalid car model selection." << endl;
            }
            break;

        default:
            cout << "Invalid car brand selection." << endl;
    }

    if (carPrice > 0) {
        cout << "--------------------------------------------" << endl;
        cout << "Congratulations " << name << " for buying a new car" << endl;
        cout << "Your Total Bill Is $" << carPrice << endl;
    }

    return 0;
}

