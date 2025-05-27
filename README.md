# 🏥 Hospital Billing System (C++)

This is a simple C++ program that simulates a basic hospital billing system. It allows users to calculate a patient's total bill based on the number of days spent in the hospital, surgeries performed, and medications administered.

## 📋 Features

- Calculates hospital stay charges using a fixed daily rate
- Adds charges based on the selected surgery type
- Adds charges based on selected medication type
- Displays the total bill to the user before exiting

## 🛠️ Technologies Used

- **C++**
- Object-Oriented Programming (OOP) concepts: Classes, Encapsulation
- Standard I/O (`iostream`)
- Basic arrays and user input handling

## 📦 Project Structure

- `PatientAccount` class: Manages days in hospital and total charges
- `Surgery` class: Contains predefined surgery charges and applies them
- `Pharmacy` class: Contains medication charges and applies them
- `main()`: Provides a simple text-based menu for user interaction

## 🧪 Example Usage

```text
Enter number of days spent in the hospital: 3

Hospital Billing Menu:
1. Add Surgery Charge
2. Add Medication Charge
3. Checkout and Display Total Bill
4. Exit
Enter your choice: 1
Select Surgery Type (1–5): 2

Enter your choice: 2
Select Medication Type (1–5): 3

Enter your choice: 3
Total Charges: $2,200.00
