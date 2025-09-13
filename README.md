# Overloading-in-cpp

Aim: To study constructor overloading, function overloading, and operator overloading in C++.

Tools: VS Code

## Theory:

Overloading in C++ is a feature that allows the same function name or operator to be used with different meanings based on the input parameters. It improves code readability and reusability. There are mainly three types: function overloading, constructor overloading, and operator overloading. In function and constructor overloading, multiple functions/constructors with the same name are defined but with different parameter lists. Operator overloading allows redefining operators like +, -, == for user-defined classes. Overall, overloading makes programs more intuitive and closer to natural usage.

## Types of Overloading

* Constructor Overloading – When a class includes more than one constructor with a different number or types of parameters, allowing objects to be created in multiple ways.

* Function Overloading – When a function name is reused with different parameter lists, and the choice of which to call is made by the compiler during compilation.

* Operator Overloading – The redefinition of operators like +, -, *, and / for user-defined types, allowing objects to interact in an intuitive way.

## Syntax for Overloading in C++

## Constructor Overloading

```
class ClassName {
public:
    // Default constructor
    ClassName() {
        // initialization code
    }

    // Parameterized constructor
    ClassName(int a, int b) {
        // initialization code
    }
};
```
## Function Overloading

```
class ClassName {
public:
    void display() {
        // no-argument version
    }

    void display(int a) {
        // version with one integer argument
    }

    void display(double x, double y) {
        // version with two double arguments
    }
};
```
## Operator Overloading

```
class ClassName {
    int value;
public:
    ClassName(int v = 0) {
        value = v;
    }
    // Overloading + operator
    ClassName operator+(ClassName &obj) {
        ClassName temp;
        temp.value = value + obj.value;
        return temp;
    }
};
```
## Program 1: Constructor Overloading

### Logic:

This program shows how multiple constructors can exist in one class. The class Add has three constructors, each with a different parameter list. When objects are created, the compiler automatically detects which constructor to use based on the arguments passed. For example, one constructor adds two integers, another adds two floating-point numbers, and the third one adds three integers.

## Program 2: Constructor Overloading 

### Logic:

This program demonstrates constructor overloading using a Sales class. One constructor calculates profit or loss when cost price, selling price, and quantity sold are given. Another constructor calculates the remaining inventory by subtracting the sold items from the total available stock. This shows how the same class can be used for two different tasks without writing separate functions.

## Algorithm:

1. Start

2. Define a class Product.

3. Create one constructor to calculate profit or loss using cost price, selling price, and items sold.

4. Create another constructor to calculate remaining stock from total available and sold quantity.

5. In main, create objects with required parameters for both operations.

6. Display results.

7. End

## Program 3: Function Overloading

### Logic:

This program demonstrates function overloading in C++, where the same function name Concatenate is defined with different parameter types. One version of the function takes two strings and concatenates them, while the other takes two characters and returns their combination as a string. The compiler determines which function to call based on the type of arguments passed. Function overloading allows performing similar operations on different data types using the same function name, improving code readability and reusability. This showcases compile-time polymorphism in C++.

## Algorithm:

1. Start the program.

2. Define a class Concat with two functions named Concatenate: --Function 1: Takes two string arguments and returns their concatenation. --Function 2: Takes two char      arguments, converts them to a string, and returns the result.

3. In the main() function, create an object c of class Concat.

4. Call c.Concatenate("Papri", "Sen") calls the string version of the function.

5. Call c.Concatenate('P', 'S') calls the character version of the function.

6. Display the results of both function calls.

7. End

## Program 4: Operator Overloading 

### Logic:

This program demonstrates operator overloading by redefining the + operator for a Complex class. It allows complex numbers to be added naturally using the c1 + c2 syntax. The overloaded + operator function adds the real parts and imaginary parts separately, returning a new object that holds the result. This makes complex number addition as simple and intuitive as adding normal integers or floats.

## Algorithm:

1. Start

2. Define a class Complex with members for real and imaginary parts.

3. Write a constructor to initialize values.

4. Overload the + operator to add two Complex objects.

5. Create two Complex objects in main, add them using +, and display the result.

6. End

## Program 5: Operator Overloading 

### Logic:

This program shows how arithmetic operators like +, -, *, and / can be overloaded for a Calc class. By overloading these operators, the objects can perform addition, subtraction, multiplication, and division just like primitive data types. This makes the interaction between objects simple, clean, and intuitive

## Algorithm:

1. Start

2. Define a class Calc with a member num.

3. Overload +, -, *, and / operators to return results as new Calc objects.

4. Create objects in main and perform all operations.

5. Display the results.

6. End

## Conclusion

Constructor overloading initializes objects in distinctive ways. Function overloading uses the same name for different purposes, making the code easier to read and maintain. Operator overloading allows an object to behave like a built-in type, providing a simple and natural way to perform operations while keeping them readable and clean. These techniques promote an effective programming style, making programs more flexible, cleaner, and more object-oriented.
