#include <iostream>
#include <vector>

template <typename T>
class Stack {
private:
    std::vector<T> data; // Internal vector to store the stack elements

public:
    // Push an element onto the stack
    void push(const T& element) {
        data.push_back(element);
    }

    // Remove and return the top element from the stack
    T pop() {
        if (isEmpty()) {
            throw std::runtime_error("Stack is empty!");
        }
        T topElement = data.back();
        data.pop_back();
        return topElement;
    }

    // Return the top element of the stack without removing it
    T top() const {
        if (isEmpty()) {
            throw std::runtime_error("Stack is empty!");
        }
        return data.back();
    }

    // Check if the stack is empty
    bool isEmpty() const {
        return data.empty();
    }

    // Return the number of elements in the stack
    size_t size() const {
        return data.size();
    }
};

int main() {
    // Example usage of the Stack class with integers
    Stack<int> intStack;

    intStack.push(10);
    intStack.push(20);
    intStack.push(30);

    std::cout << "Size: " << intStack.size() << std::endl; // Output: Size: 3

    std::cout << "Top element: " << intStack.top() << std::endl; // Output: Top element: 30

    int poppedElement = intStack.pop();
    std::cout << "Popped element: " << poppedElement << std::endl; // Output: Popped element: 30

    std::cout << "Is empty? " << (intStack.isEmpty() ? "Yes" : "No") << std::endl; // Output: Is empty? No

    return 0;
}
