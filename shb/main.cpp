#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;


// ������� �2: ����� ����� �� �����
void printLines(const vector<string>& lines)
{
    for (const auto& line : lines) {
        cout << line << endl;  // ������� ������ ������ �� �����
    }
}

// ������� �3: ������ ����� � ����
void writeToFile(const string& filename, const vector<string>& lines)
{
    ofstream outputFile(filename);  // ��������� ���� ��� ������
    if (!outputFile) {
        cerr << "������ �������� ����� ��� ������!" << endl;
        return;
    }

    for (const auto& line : lines) {
        outputFile << line << endl;  // ���������� ������ ������ � ����
    }

    outputFile.close();  // ��������� ���� ����� ������
}

int main()
{
    setlocale(LC_ALL, "Russian");  // ������������� ������� ������ ��� ������
    vector<string> lines;  // ������ ��� �������� �����
    string inputFilename = "input.txt";  // ��� ����� ��� ������
    string outputFilename = "output.txt";  // ��� ����� ��� ������

    // ����� �������
    cout << "������ ����� �� ����� " << inputFilename << " � ������..." << endl;
    readFromFile(inputFilename, lines);

    cout << "����� ����� �� �����: " << endl;
    printLines(lines);

    cout << "������ ����� � ���� " << outputFilename << endl;
    writeToFile(outputFilename, lines);

    return 0;
}
