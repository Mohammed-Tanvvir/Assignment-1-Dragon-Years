# Assignment-1-Dragon-Years
This C++ code is a simple program that calculates the age of a dragon in wizard years based on a given formula. Here's a breakdown of the code:

**Namespace:** The `using namespace std;` statement allows the use of objects and functions from the standard C++ library without prefixing them with `std::`.

**main Function:**
   - The `main` function is the entry point of the program.
   - `string name;` declares a variable to store the dragon's name.
   - `float age;` declares a variable to store the dragon's age.

**Input:** `cin >> name >> age;` prompts the user to enter the dragon's name and age. The input values are stored in the variables `name` and `age`.

**Calculation:** The dragon's age in wizard years is calculated using the provided formula: `21 + ((age - 2) * 4)`.

**Output:** `cout << "The dragon named " << name << " is " << 21 + ((age - 2) * 4) << " years old in wizard years.";` prints the result, indicating the dragon's name and its age in wizard years.
