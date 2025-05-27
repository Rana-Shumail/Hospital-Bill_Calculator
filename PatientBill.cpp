#include <iostream>
#include <string>

using namespace std;

class PatientAccount {
private:
    double charges;
    int days;
    static constexpr double dailyRate = 500.0; // Example daily rate

public:
    PatientAccount(int d) : charges(0), days(d) {}

    void addCharge(double amount) {
        charges += amount;
    }

    double getTotalCharges() const {
        return charges + (days * dailyRate);
    }
};

class Surgery {
private:
    static const double surgeryCharges[5];

public:
    void applyCharge(PatientAccount& account, int surgeryType) {
        if (surgeryType >= 1 && surgeryType <= 5) {
            account.addCharge(surgeryCharges[surgeryType - 1]);
        }
        else {
            cout << "Invalid input" << endl;
        }
    }
};

const double Surgery::surgeryCharges[5] = { 1000, 2000, 3000, 4000, 5000 };

class Pharmacy {
private:
    static const double medicationCharges[5];

public:
    void applyCharge(PatientAccount& account, int medType) {
        if (medType >= 1 && medType <= 5) {
            account.addCharge(medicationCharges[medType - 1]);
        }
        else {
            cout << "Invalid input" << endl;
        }
    }
};

const double Pharmacy::medicationCharges[5] = { 100, 200, 300, 400, 500 };

int main() {
    int days;
    cout << "Enter number of days spent in the hospital: ";
    cin >> days;

    PatientAccount patient(days);
    Surgery surgery;
    Pharmacy pharmacy;

    int choice;
    do {
        cout << "\nHospital Billing Menu:" << endl;
        cout << "1. Add Surgery Charge" << endl;
        cout << "2. Add Medication Charge" << endl;
        cout << "3. Checkout and Display Total Bill" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            int surgeryType;
            cout << "Select Surgery Type (1-5): ";
            cin >> surgeryType;
            surgery.applyCharge(patient, surgeryType);
            break;
        }
        case 2: {
            int medType;
            cout << "Select Medication Type (1-5): ";
            cin >> medType;
            pharmacy.applyCharge(patient, medType);
            break;
        }
        case 3:
            cout << "Total Charges: $" << patient.getTotalCharges() << endl;
            break;
        case 4:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
