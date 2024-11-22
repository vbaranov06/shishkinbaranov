#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;


// Функция Nº 1: чтение строк из файла в вектор
void readFromFile(const string& filename, vector<string>& lines)
{

}

// Функция Nº 2: вывод строк на экран
void printLines(const vector<string>& lines)
{

}

// Функция Nº 3: запись строк в файл
void writeToFile(const string& filename, const vector<string>& lines)
{

}


int main()
{
    setlocale(LC_ALL, "Russian");
    vector<string> lines;
    string inputFilename = "input.txt";
    string outputFilename = "output.txt";

    // Вызов функций
    cout << "чтение строк из файла " << inputFilename <<" в вектор" << endl;
    readFromFile(inputFilename, lines);
    cout << "вывод строк на экран:   " << endl;
    printLines(lines);
    cout << "запись строк в файл " << outputFilename << endl;
    writeToFile(outputFilename, lines);
    return 0;
}
