/*
//TASK 1
#include <iostream>
#include <fstream>
using namespace std;
int main() {
	// Open the file for reading
	ifstream inputFile("example.txt");

	// Check if the file is successfully opened
	if (!inputFile.is_open()) {
		cout << "Error opening the file." << endl;
		return 1;  // Return with an error code
	}

	// Read and display characters from the file
	char character;
	while (inputFile.get(character)) {
		cout << character;
	}
	// Close the file
	inputFile.close();
	system("pause");
	return 0;
}

//TASK 2
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
	string inputString;

	// Get the string from the user
	cout << "Enter a string to write to the file: ";
	getline(cin, inputString);

	// Open a file for writing
	ofstream outputFile("example.txt");

	// Check if the file is successfully opened
	if (!outputFile.is_open()) {
		cout << "Error opening the file for writing." <<endl;
		return 1;  // Return with an error code
	}

	// Write the string to the file
	outputFile << inputString;

	// Close the file
	outputFile.close();

	cout << "String successfully written to the file." <<endl;

	return 0;
}

//TASK 3
#include <fstream>
using namespace std;
int main() {
	ifstream inputFile("example.txt");

	// Check if the file is successfully opened
	if (!inputFile.is_open()) {
		cout << "Error opening the file." <<endl;
		return 1;  // Return with an error code
	}
	char character;
	int charCount = 0;
	// Read characters from the file and count them
	while (inputFile.get(character)) {
		charCount++;
	}
	// Close the file
	inputFile.close();
	// Print the result
	cout << "Total number of characters in the file: " << charCount <<endl;

	return 0;


//TASK 4
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Named structure Student
struct Student {
	string name;
	int age;
	double cgpa;
	string dob;
	string placeOfBirth;
};

int main() {
	// Create and open the file for writing
	ofstream outputFile("Data.txt");

	// Check if the file is successfully opened
	if (!outputFile.is_open()) {
		cout << "Error opening the file for writing." << endl;
		return 1;  // Return with an error code
	}

	// Array to store information about five students
	Student students[5];

	// Input information for each student
	for (int i = 0; i < 5; ++i) {
		cout << "Enter information for student " << i + 1 << ":\n";
		cout << "Name: ";
		getline(cin, students[i].name);

		cout << "Age: ";
		cin >> students[i].age;
		cin.ignore();  // Ignore the newline character

		cout << "CGPA: ";
		cin >> students[i].cgpa;
		cin.ignore();  // Ignore the newline character

		cout << "Date of Birth (DOB): ";
		getline(cin, students[i].dob);

		cout << "Place of Birth: ";
		getline(cin, students[i].placeOfBirth);

		// Write student information to the file
		outputFile << students[i].name << ',' << students[i].age << ',' << students[i].cgpa
			<< ',' << students[i].dob << ',' << students[i].placeOfBirth << '\n';

		cout << "Information saved for student " << i + 1 << endl;
	}

	// Close the file
	outputFile.close();

	cout << "Data saved to the file 'Data.txt'." << endl;

	return 0;
}

//TASK 5
#include <iostream>
#include <fstream>
using namespace std;
int main() {
	// Open the input file for reading
	ifstream inputFile("Data.txt");

	// Check if the file is successfully opened
	if (!inputFile.is_open()) {
		cout<< "Error opening the input file 'num.txt'." <<endl;
		return 1;  // Return with an error code
	}

	// Open the output file for writing
	ofstream outputFile("Data.txt");

	// Check if the file is successfully opened
	if (!outputFile.is_open()) {
		cout << "Error opening the output file 'sum.txt'." <<endl;
		inputFile.close();  // Close the input file before returning
		return 1;          // Return with an error code
	}

	int num1, num2, num3;

	// Read three numbers from each line, calculate the sum, and write to the output file
	while (inputFile >> num1 >> num2 >> num3) {
		int sum = num1 + num2 + num3;

		// Write the original three numbers and the sum to the output file
		outputFile << num1 << ' ' << num2 << ' ' << num3 << ' ' << sum <<endl;
	}

	// Close the input and output files
	inputFile.close();
	outputFile.close();
	 cout << "Sum calculated and saved to 'sum.txt'." <<endl;

	return 0;
}

//EXTRA TASK 1
#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include<vector>
using namespace std;
// Function to reverse the order of words in a string
string reverseWords(const string& input) {
	istringstream iss(input);
	vector <string> words(istream_iterator<string>{iss},
		istream_iterator<string>());

	reverse(words.begin(), words.end());

	ostringstream oss;
	for (const auto& word : words) {
		oss << word << " ";
	}

	return oss.str();
}

int main() {
	// Open the input file for reading
	ifstream inputFile("Data.txt");

	// Check if the file is successfully opened
	if (!inputFile.is_open()) {
		cout << "Error opening the input file 'input.txt'." <<endl;
		return 1;  // Return with an error code
	}

	// Open the output file for writing
	ofstream outputFile("Data.txt");

	// Check if the file is successfully opened
	if (!outputFile.is_open()) {
		cout << "Error opening the output file 'output.txt'." <<endl;
		inputFile.close();  // Close the input file before returning
		return 1;          // Return with an error code
	}
	string line;

	// Read each line from the input file, reverse the order of words, and write to the output file
	while (getline(inputFile, line)) {
		string reversedLine = reverseWords(line);
		outputFile << reversedLine <<endl;
	}

	// Close the input and output files
	inputFile.close();
	outputFile.close();
	cout << "Words reversed and saved to 'output.txt'." <<endl;

	return 0;
}

//EXTRA TASK 2
#include <iostream>
#include <fstream>
using namespace std;
int main() {
	ifstream inputFile("example.txt");

	// Check if the file is successfully opened
	if (!inputFile.is_open()) {
		cout << "Error opening the file." <<endl;
		return 1;  // Return with an error code
	}
	char character;
	int charCount = 0;
	// Read characters from the file and count them
	while (inputFile.get(character)) {
		charCount++;
	}
	// Close the file
	inputFile.close();
	// Print the result
	cout << "Total number of characters in the file: " << charCount <<endl;

	return 0;
}
*/