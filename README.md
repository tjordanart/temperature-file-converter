# Temperature File Converter

A C++ file conversion program that reads Fahrenheit temperatures from a text file, converts them to Celsius, and writes the results to a new text file.

*Built for CS 210 at SNHU.*

## Overview

Temperature File Converter was created to practice reading and writing data using files in C++.

The program reads a list of cities and their average yearly temperatures in Fahrenheit from `FahrenheitTemperature.txt`. Each temperature is converted to Celsius using the standard Fahrenheit-to-Celsius formula.

The converted temperatures are then written to `CelsiusTemperature.txt`.

## Features

- Reads data from a text file
- Writes converted data to a new text file
- Fahrenheit-to-Celsius conversion
- Processes multiple cities using a loop
- Checks whether input and output files open successfully
- Closes both files after processing
- Uses C++ file streams

## How It Works

The program follows three main steps:

1. Open `FahrenheitTemperature.txt` for reading.
2. Read each city and Fahrenheit temperature, convert the temperature to Celsius, and write the result.
3. Save the converted data to `CelsiusTemperature.txt`.

The conversion uses:

```text
°C = (°F - 32) × 5 / 9
```

For example:

```text
Phoenix 100
```

is converted to approximately:

```text
Phoenix 37.7778
```

## Example Input

The input file contains a city name followed by its average yearly temperature in Fahrenheit.

```text
NewYork 55
Phoenix 75
Chicago 52
Miami 82
Denver 50
Seattle 55
```

## Example Output

The program creates `CelsiusTemperature.txt` containing the converted temperatures.

```text
NewYork 12.7778
Phoenix 23.8889
Chicago 11.1111
Miami 27.7778
Denver 10
Seattle 12.7778
```

## File Handling

The program uses two different file stream classes:

- `ifstream` — opens and reads the Fahrenheit input file
- `ofstream` — creates and writes to the Celsius output file

The program checks that both files open successfully before continuing.

After all data has been processed, both files are closed.

## Project Structure

| File | Purpose |
|---|---|
| `temperature_converter.cpp` | Reads, converts, and writes the temperature data |
| `FahrenheitTemperature.txt` | Input file containing city temperatures in Fahrenheit |
| `CelsiusTemperature.txt` | Output file containing the converted Celsius temperatures |

## Requirements

- A C++ compiler (g++, clang, or Visual Studio)
- No external libraries

The program uses the C++ standard library:

- `iostream`
- `fstream`
- `string`

## How to Run

Clone the repository:

```bash
git clone https://github.com/Tjordanart/temperature-file-converter-cpp.git
```

Navigate to the project directory:

```bash
cd temperature-file-converter-cpp
```

Compile the program:

```bash
g++ temperature_converter.cpp -o temperature_converter
```

Run it:

```bash
./temperature_converter
```

The program reads `FahrenheitTemperature.txt` and creates or updates `CelsiusTemperature.txt`.

On Windows, you can also open the `.cpp` file in Visual Studio and build and run the program there.

## What I Practiced

This project provided practice with:

- C++ programming
- File input and output
- `ifstream`
- `ofstream`
- Reading structured text data
- Writing data to a file
- Loops
- Variables and data types
- Mathematical calculations
- Error checking
- File management

## Author

**Tyler Jordan**

[GitHub](https://github.com/Tjordanart)  
[Portfolio](https://www.tjordanart.com)
