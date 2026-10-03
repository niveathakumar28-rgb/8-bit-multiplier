# 8-Bit Binary Multiplier

## Project Overview

This project implements an 8-bit binary multiplier using the shift-and-add multiplication algorithm.

The multiplier accepts two unsigned 8-bit numbers as input and produces a 16-bit product.

## Objective

The objective of this project is to understand how binary multiplication can be implemented using basic arithmetic and bitwise operations instead of using the built-in multiplication operator.

## Features

- Accepts two unsigned 8-bit numbers
- Supports values from 0 to 255
- Produces a 16-bit result
- Uses the shift-and-add multiplication algorithm
- Displays numbers in binary
- Displays each multiplication step
- Includes input validation
- Includes test cases

## Working Principle

The multiplier uses three main operations:

1. Check the least significant bit (LSB) of the multiplier.
2. If the LSB is 1, add the multiplicand to the product.
3. Shift the multiplicand left and the multiplier right.

These steps are repeated 8 times.

### Algorithm

```text
Start
  ↓
Read two 8-bit numbers
  ↓
Initialize Product = 0
  ↓
Check LSB of Multiplier
  ↓
LSB = 1?
 ┌───────┴───────┐
Yes              No
 ↓                ↓
Add              Skip
Multiplicand     Addition
 └───────┬───────┘
         ↓
Shift Multiplicand Left
         ↓
Shift Multiplier Right
         ↓
Repeat 8 times
         ↓
Display 16-bit Product
         ↓
End
