# Logic Solver

## Overview

This project provides a CLI tool for solving truth tables for propositional logic expressions. Propositional logic is a branch of formal logic that deals with propositions, where propositions can be either true or false. Truth tables are a fundamental tool in propositional logic used to analyze the truth values of complex logical expressions based on the truth values of their atomic propositions.

This truth table solver simplifies the process of evaluating and understanding the behavior of propositional logic expressions by generating a complete truth table.

## Features

- Evaluate and generate truth tables for complex propositional logic expressions.
- Support for various logical operators, including `AND`, `OR`, `NOT`, `IMPLIES`, and `IFF`.
- Handle parentheses to control the order of operations.
- Display the truth values for all sub-expressions.
- Determine the overall truth value of the given expression for all possible combinations of truth values for its variables.

## Usage

Certainly! If your project is using CMake for building and managing dependencies, you can update the installation instructions accordingly. Here's how you can do that:

### Installation

1. **Clone the Repository**: Clone the repository to your local machine or download the source code.

   ```bash
   git clone https://github.com/yourusername/propositional-logic-truth-table-solver.git
   ```

2. **Navigate to the Project Directory**: Change your current directory to the project directory.

   ```bash
   cd propositional-logic-truth-table-solver
   ```

3. **Build the Project with CMake**:

   a. Create a build directory to keep your build files separate from the source code. This is a good practice and helps keep your source directory clean.

   ```bash
   mkdir build
   cd build
   ```

   b. Use CMake to configure and generate the build files.

   ```bash
   cmake ..
   ```

   This command configures the project with CMake. It sets up the build system based on your project's CMakeLists.txt file.

   c. Build the project using your preferred build tool (e.g., Make, Ninja).

   ```bash
   make
   ```

   Replace `make` with the appropriate build tool if you're using something different.

4. **Run the Solver**: Now, you can execute the `solver` binary that was built using CMake.

   ```bash
   ./solver
   ```

   If you encounter any issues, ensure that you have all the necessary dependencies installed on your system.

### Dependencies

Make sure to document any project dependencies in your `CMakeLists.txt` file and provide instructions on how to install them if they are not standard dependencies.

This updated installation process assumes that you're building the project with CMake. Be sure to adjust the instructions based on your specific project's structure and dependencies.


3. **Run the Solver**: Execute the `lsolver` command to use the truth table solver.

   ```bash
   lsolver <expression>
   ```

4. **Input**: Enter a valid propositional logic expression when prompted.

   Example input: `A AND (B OR NOT C)`

5. **Output**: The tool will generate and display the truth table for the provided expression, showing the truth values for each sub-expression and the overall result.

   Example output:

   ```
   | A | B | C | A AND (B OR NOT C) |
   |---|---|---|---------------------|
   | 0 | 0 | 0 |          1          |
   | 0 | 0 | 1 |          0          |
   | 0 | 1 | 0 |          0          |
   | 0 | 1 | 1 |          0          |
   | 1 | 0 | 0 |          1          |
   | 1 | 0 | 1 |          0          |
   | 1 | 1 | 0 |          1          |
   | 1 | 1 | 1 |          1          |
   ```

## Contributors

- [Eduardo Machado](https://github.com/yourusername) - Project Lead and Developer

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Feedback and Issues

If you encounter any issues, have questions, or want to contribute to this project, please open an issue on the [GitHub repository](https://github.com/yourusername/propositional-logic-truth-table-solver).