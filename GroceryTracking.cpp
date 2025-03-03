#include <iostream>
#include <fstream>
#include <map>
#include <iomanip>
using namespace std;

// Class to handle item tracking and frequency calculation
class GroceryTracker {
private:
    map<string, int> itemFrequency; // Map to store item frequencies
    string inputFile = "CS210_Project_Three_Input_File.txt";
    string outputFile = "frequency.dat";

    // Method to read and process the input file
    void LoadData() {
        ifstream inFile(inputFile);
        string item;

        if (!inFile) {
            cerr << "Error: Unable to open input file!" << endl;
            return;
        }

        while (inFile >> item) {
            itemFrequency[item]++;
        }

        inFile.close();
    }

    // Method to save frequency data to a backup file
    void SaveData() {
        ofstream outFile(outputFile);

        if (!outFile) {
            cerr << "Error: Unable to open output file!" << endl;
            return;
        }

        for (const auto& pair : itemFrequency) {
            outFile << pair.first << " " << pair.second << endl;
        }

        outFile.close();
    }

public:
    // Constructor to initialize and load data
    GroceryTracker() {
        LoadData();
        SaveData();
    }

    // Method to get the frequency of a specific item
    void GetItemFrequency() {
        string item;
        cout << "Enter item to search: ";
        cin >> item;

        if (itemFrequency.find(item) != itemFrequency.end()) {
            cout << "Frequency of " << item << ": " << itemFrequency[item] << endl;
        }
        else {
            cout << "Item not found in records." << endl;
        }
    }

    // Method to print all item frequencies
    void PrintAllFrequencies() {
        cout << "Item Frequency List:" << endl;
        for (const auto& pair : itemFrequency) {
            cout << pair.first << " " << pair.second << endl;
        }
    }

    // Method to print a histogram
    void PrintHistogram() {
        cout << "Item Frequency Histogram:" << endl;
        for (const auto& pair : itemFrequency) {
            cout << setw(12) << left << pair.first << " ";
            for (int i = 0; i < pair.second; ++i) {
                cout << "*";
            }
            cout << endl;
        }
    }
};

// Function to display menu options
void DisplayMenu() {
    cout << "\nMenu Options:" << endl;
    cout << "1 - Search for an item frequency" << endl;
    cout << "2 - Display all item frequencies" << endl;
    cout << "3 - Display histogram" << endl;
    cout << "4 - Exit" << endl;
    cout << "Enter your choice: ";
}

int main() {
    GroceryTracker tracker; // Create an instance of the GroceryTracker class
    int choice;

    do {
        DisplayMenu();
        cin >> choice;

        // Input validation
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a number between 1 and 4." << endl;
            continue;
        }

        switch (choice) {
        case 1:
            tracker.GetItemFrequency();
            break;
        case 2:
            tracker.PrintAllFrequencies();
            break;
        case 3:
            tracker.PrintHistogram();
            break;
        case 4:
            cout << "Exiting program. Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
        }
    } while (choice != 4);

    return 0;
}
