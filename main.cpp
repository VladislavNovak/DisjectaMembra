#include <iostream>
#include <algorithm>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <ctime>
//#include <sstream>
//#include <windows.h>
#include <vector>
//#include <iterator>
//#include <limits>

int getRandomIntInRange(int from, int to) {
    return (from + std::rand() % (to - from + 1)); // NOLINT(cert-msc50-cpp)
}

void outputListToStream(std::ostream &out, std::vector<std::string> const &list, const std::string &delim = ",", bool isNumbering = false) {
    for (int i = 0; i < list.size(); ++i)
        out << (isNumbering ? std::to_string(i) + ": " + list[i] : list[i]) << (i != list.size() - 1 ? delim : "");

    out << std::endl;
}

void writeListToFile(const char* path, std::vector<std::string> const &list, bool isAppMode = true, const std::string &delim = ",") {
    std::ofstream file(path, (isAppMode ? std::ios::app : std::ios::out));
    outputListToStream(file, list, delim);
    file.close();
}

bool readFileToList(const char* pathName, std::vector<std::string> &list) {
    bool isReadSuccessfully = false;
    std::ifstream in(pathName);

    if (in.is_open() && !in.bad()) {
        std::string textLine;

        while (std::getline(in, textLine)) list.push_back(textLine);

        isReadSuccessfully = true;
    }

    in.close();

    return isReadSuccessfully;
}

void printList(std::vector<std::string> const &list, const std::string &msg = "", const std::string &delim = ",", bool isNumbering = false) {
    if (msg.length())
        std::cout << msg << ": " << std::endl;

    outputListToStream(std::cout, list, delim, isNumbering);
}

void displayFileToScreen(const char* pathName, std::string const &msg) {
    std::vector<std::string> data;
    bool isReadFileSuccessfully = readFileToList(pathName, data);

    if (!isReadFileSuccessfully) {
        printf("%s не обнаружен. Он должен находиться в директории с исполняемым файлом!\n", pathName);
        return;
    }

    system("cls");

    if (!data.empty()) {
        printList(data, msg, ", ", true);
    } else {
        std::cout << "Данных пока нет" << std::endl;
    }
}

void writeReadFileExample() {
    const char* path = R"(..\test.txt)";

    std::vector<std::string> data = { "first", "second", "third" };

    writeListToFile(path, data);
    displayFileToScreen(path, "Печать");
}

template<typename T>
std::vector<T> getCopyVector(std::vector<T> const &data, int amount = 0, int firstPos = 0) {
    std::vector<T> out;

    int sizeOfCopy = (amount == 0 )|| ((amount + firstPos) > data.size()) ? (data.size() - firstPos) : amount;

    std::copy_n(data.begin() + firstPos, sizeOfCopy, std::back_inserter(out));

    return out;
}

template<typename T>
std::vector<T> getShuffleVector(std::vector<T> const &data) {
    std::vector<T> out = data;
    for (int i = 0; i < out.size() - 1; ++i) {
        int j = getRandomIntInRange(i, out.size() - 1);
        std::swap(out[i], out[j]);
    }

    return out;
}

template<typename T>
std::vector<T> getShuffledCopyOfVectorRange(std::vector<T> const &data, int amount = 0, int firstPos = 0) {
    std::vector<T> shuffledVector = getShuffleVector(data);

    return getCopyVector(shuffledVector, amount, firstPos);
}

void getShuffledCopyOfVectorRangeExample() {
    std::srand(std::time(nullptr)); // NOLINT(cert-msc51-cpp)

    std::vector<std::string> listOfSomething = { "first", "second", "third" };

    auto result = getShuffledCopyOfVectorRange(listOfSomething);

    printList(result, "Result");
}


int main() {

}
