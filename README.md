# CI/CD Test Repository

This repository is used for testing a CI/CD pipeline with Jenkins and Qt-based projects.

## Classes

### MyClass
A simple class with a single method `myInt()` that always returns `0`.

### MySecondClass
A class that stores an integer value and provides getter and setter methods.

## Tests

- `test_myInt`: Verifies that the `myInt()` method of `MyClass` returns `0`.
- `test_mySecondClass`: Verifies the getter and setter methods of `MySecondClass`.

## CI/CD Pipeline

The Jenkins pipeline performs the following tasks:
1. Checks out the code.
2. Builds and tests the project using `qmake` and `make`.
3. Archives the build log.

## Updates

- Added `MySecondClass` and corresponding tests.
