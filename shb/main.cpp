#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;


// Функция №2: вывод строк на экран
void printLines(const vector<string>& lines)
{
    for (const auto& line : lines) {
        cout << line << endl;  // Выводим каждую строку на экран
    }
}

// Функция №3: запись строк в файл
void writeToFile(const string& filename, const vector<string>& lines)
{
    ofstream outputFile(filename);  // Открываем файл для записи
    if (!outputFile) {
        cerr << "Ошибка открытия файла для записи!" << endl;
        return;
    }

    for (const auto& line : lines) {
        outputFile << line << endl;  // Записываем каждую строку в файл
    }

    outputFile.close();  // Закрываем файл после записи
}

int main()
{
    setlocale(LC_ALL, "Russian");  // Устанавливаем русскую локаль для вывода
    vector<string> lines;  // Вектор для хранения строк
    string inputFilename = "input.txt";  // Имя файла для чтения
    string outputFilename = "output.txt";  // Имя файла для записи

    // Вызов функций
    cout << "Чтение строк из файла " << inputFilename << " в вектор..." << endl;
    readFromFile(inputFilename, lines);

    cout << "Вывод строк на экран: " << endl;
    printLines(lines);

    cout << "Запись строк в файл " << outputFilename << endl;
    writeToFile(outputFilename, lines);

    return 0;
}
