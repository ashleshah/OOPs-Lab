#include <iostream>

#define MAX_SIZE 100 // Maximum size of the stack

// Stack structure to hold characters
class Stack {
private:
    char arr[MAX_SIZE]; // Array to hold stack elements
    int top;            // Index of the top element

public:
    Stack() : top(-1) {} // Constructor to initialize stack

    // Function to push an element onto the stack
    void push(char c) {
        if (top < MAX_SIZE - 1) {
            arr[++top] = c; // Increment top and add element
        } else {
            std::cout << "Stack overflow!" << std::endl;
        }
    }

    // Function to pop an element from the stack
    char pop() {
        if (top >= 0) {
            return arr[top--]; // Return the top element and decrement top
        }
        return '\0'; // Return null character if stack is empty
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return top == -1;
    }
};

// Function to reverse a string using the custom stack
void reverseStringUsingStack(const char input[], char output[]) {
    Stack stack; // Create an instance of the Stack

    // Push each character of the input string onto the stack
    for (int i = 0; input[i] != '\0'; i++) {
        stack.push(input[i]);
    }

    // Pop characters from the stack to build the reversed string
    int index = 0;
    while (!stack.isEmpty()) {
        output[index++] = stack.pop();
    }
    output[index] = '\0'; // Null-terminate the output string
}

int main() {
    char inputString[MAX_SIZE]; // Array to store user input
    char reversedString[MAX_SIZE]; // Array to store the reversed string

    // Prompt the user for input
    cout << "Enter a string (max 99 characters): ";
    cin.getline(inputString, MAX_SIZE); // Read the entire line

    // Call the function to reverse the string
    reverseStringUsingStack(inputString, reversedString);

    // Display the reversed string
    cout << "Reversed string: " << reversedString << std::endl;

    return 0; // End of the program
}
