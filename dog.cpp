#include <iostream>
#include <string>
using namespace std;

class Dog {
private:
    string name;
    int birthYear;
    int score; // Private attribute for learning score

public:
    Dog(string n, int year) : name(n), birthYear(year), score(0) {}

    // Function to calculate the dog's age
    int getAge(int currentYear) {
        return currentYear - birthYear;
    }

    // Function for the dog to bark
    void bark() {
        cout << name << " says: Woof! Woof!" << endl;
    }

    // Function to increase the dog's learning score
    void learn() {
        score++;
        cout << name << " has learned something new! Current score: " << score << endl;
    }

    // Function to display the dog's information
    void displayInfo(int currentYear) {
        cout << "Dog's Name: " << name << endl;
        cout << "Dog's Age: " << getAge(currentYear) << " years old" << endl;
        cout << "Dog's Learning Score: " << score << endl;
    }
};

int main() {
    string dogName;
    int dogBirthYear;
    int currentYear;

    // Get the dog's name and birth year
    cout << "Enter the dog's name: ";
    cin >> dogName;
    cout << "Enter the dog's birth year: ";
    cin >> dogBirthYear;
    cout << "Enter the current year: ";
    cin >> currentYear;

    // Create a Dog object
    Dog myDog(dogName, dogBirthYear);

    int choice;
    do {
        cout << "\nEnter 1 for the dog to bark, 2 to increase learning score, 0 to display info and exit: ";
        cin >> choice;

        if (choice == 1) {
            myDog.bark();
        }
        else if (choice == 2) {
            myDog.learn();
        }
        else if (choice == 0) {
            myDog.displayInfo(currentYear);
        }
        else {
            cout << "Invalid choice, please enter 1, 2, or 0." << endl;
        }
    } while (choice != 0);

    return 0;
}
