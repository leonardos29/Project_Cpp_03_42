# C++ Module 03 — 42 School

## About
Introduction to inheritance in C++98. Covers single inheritance, multi-level inheritance, protected members, construction/destruction chaining, and the diamond problem with virtual inheritance.

## Concepts
- Single inheritance — derived class inherits from one base class
- Multi-level inheritance — chain of inherited classes
- `protected` members — accessible by the class and its derived classes
- Construction/destruction chaining — base constructor called first, destructor last
- Diamond problem — two parent classes share the same base class
- Virtual inheritance — solves the diamond problem

## Exercises

### ex00 — Aaaaand... OPEN!
First implementation of the `ClapTrap` class with `attack`, `takeDamage` and `beRepaired` methods. Base class for all subsequent exercises.

### ex01 — Serena, my love!
`ScavTrap` inherits from `ClapTrap` with different stats and its own `guardGate` ability. Demonstrates construction/destruction chaining.

### ex02 — Repetitive work
`FragTrap` inherits from `ClapTrap` with different stats and its own `highFivesGuys` ability. Reinforces inheritance concepts.

### ex03 — Now it's weird! *(optional)*
`DiamondTrap` inherits from both `FragTrap` and `ScavTrap` — the diamond problem. Solved with virtual inheritance so `ClapTrap` is constructed only once.

## Compilation
```bash
make        # compile
make clean  # remove objects
make fclean # remove objects and executable
make re     # recompile from scratch
```

## Requirements
- Compiler: `c++`
- Flags: `-Wall -Wextra -Werror -std=c++98`
- No STL containers or algorithms
- No `printf`, `alloc`, or `free`
- No `using namespace`
