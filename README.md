# <font color="Tomato">Pragmata</font>

<!-- TOC -->
* [<font color="Tomato">Pragmata</font>](#font-colortomatopragmatafont)
    * [`bool isIncludes(const char &item, const string &range)`](#bool-isincludesconst-char-item-const-string-range)
    * [`bool hasSubstr(const char *origin, const char *substr)`](#bool-hassubstrconst-char-origin-const-char-substr)
    * [`int findIndexInVector(vector<T> const &list, const T &key)`](#int-findindexinvectorvectort-const-list-const-t-key)
    * [`bool isNumeric(string const &str)`](#bool-isnumericstring-const-str)
    * [`bool hasFileExist(const char* path)`](#bool-hasfileexistconst-char-path)
    * [`bool isStringADate(string const &str, string &cause)`](#bool-isstringadatestring-const-str-string-cause)
    * [`bool convertDoubleFromString(string const &text, double &out)`](#bool-convertdoublefromstringstring-const-text-double-out)
    * [`std::string getDelimitedString(const string &range)`](#stdstring-getdelimitedstringconst-string-range)
    * [`void removeSymbolFromString(string &readjust, char const symbol, int leave = 0)`](#void-removesymbolfromstringstring-readjust-char-const-symbol-int-leave--0)
    * [`int getNumberOfDigit(int digit)`](#int-getnumberofdigitint-digit)
    * [`int getRoundedIntWithStep(int val, int step = 10)`](#int-getroundedintwithstepint-val-int-step--10)
    * [`template<size_t T> void flipArray (int (&arr)[T])`](#templatesizet-t-void-fliparray-int-arrt)
    * [`int getRandomIntInRange(int from, int to)`](#int-getrandomintinrangeint-from-int-to)
    * [`vector<T> getShuffleVector(vector<T> const &data)`](#vectort-getshufflevectorvectort-const-data)
    * [`vector<T> getCopyVector(vector<T> const &data, int amount = 0, int firstPos = 0)`](#vectort-getcopyvectorvectort-const-data-int-amount--0-int-firstpos--0)
    * [`vector<T> getShuffledCopyOfVectorRange(vector<T> const &data, int amount = 0, int firstPos = 0)`](#vectort-getshuffledcopyofvectorrangevectort-const-data-int-amount--0-int-firstpos--0)
    * [`string getTrimmedString(string str, string const &whiteSpaces = " \r\n\t\v\f")`](#string-gettrimmedstringstring-str-string-const-whitespaces---rntvf)
    * [`vector<string> splitStringIntoList(string const &str, const char delim = ',', bool isEmptyDenied = true)`](#vectorstring-splitstringintoliststring-const-str-const-char-delim---bool-isemptydenied--true)
    * [`template<typename T> T getUserInput(string const &restrictions = "")`](#templatetypename-t-t-getuserinputstring-const-restrictions--)
    * [`std::string getUserLineString(const string &msg)`](#stdstring-getuserlinestringconst-string-msg)
    * [`int getUserNumeric(const string &msg = "Введите цифры", int from = 0, int to = 0)`](#int-getusernumericconst-string-msg--введите-цифры-int-from--0-int-to--0)
    * [`void outputListToStream(std::ostream &out, vector<vector<string>> const &list, const string &delim = ",", bool isNumbering = false)`](#void-outputlisttostreamstdostream-out-vectorvectorstring-const-list-const-string-delim---bool-isnumbering--false)
    * [`writeListToFile(const char* path, vector<string> const &list, bool isAppMode = true, const std::string &delim = ",")`](#writelisttofileconst-char-path-vectorstring-const-list-bool-isappmode--true-const-stdstring-delim--)
    * [`void printList(vector<string> const &list, const string &msg = "", const string &delim = ",", bool isNumbering = false)`](#void-printlistvectorstring-const-list-const-string-msg---const-string-delim---bool-isnumbering--false)
    * [`bool readFileToList(const char* pathName, vector<string> &list)`](#bool-readfiletolistconst-char-pathname-vectorstring-list)
    * [`void displayFileToScreen(const char* pathName, string const &msg)`](#void-displayfiletoscreenconst-char-pathname-string-const-msg)
    * [`bool loadStringFromBinaryFile(const char* fileName, string &str)`](#bool-loadstringfrombinaryfileconst-char-filename-string-str)
    * [`void saveStringToBinaryFile(const char* path, const string &str, bool isAppMode = false, const char delim = ';')`](#void-savestringtobinaryfileconst-char-path-const-string-str-bool-isappmode--false-const-char-delim--)
    * [`bool loadPersonFromBinaryFile(const char* path, character &person)`](#bool-loadpersonfrombinaryfileconst-char-path-character-person)
    * [`void savePersonToBinaryFile(const char* path, character const &person)`](#void-savepersontobinaryfileconst-char-path-character-const-person)
<!-- TOC -->

---
### `bool isIncludes(const char &item, const string &range)`

Проверяет, встречается ли item хоть раз встречается в диапазоне.

| includes  | depends | return | use in       | links to use                                                                                                  |
|-----------|---------|--------|--------------|---------------------------------------------------------------------------------------------------------------|
| algorithm |         | bool   | getUserInput | [16_6_4](https://github.com/VladislavNovak/16_6_4/blob/5e27ffd9e4b65dbeb05fa8feb3af24d4e61339e0/main.cpp#L12) |

```c++
bool isIncludes(const std::string &range, const char &item) {
    return std::any_of(range.begin(),
                       range.end(),
                       [&item](const char &c) { return c == item; });
}
```

---
### `bool hasSubstr(const char *origin, const char *substr)`

Проверяет строку на вхождение подстроки

| includes | depends | return | use in | links to use                                                                                                        |
|----------|---------|--------|--------|---------------------------------------------------------------------------------------------------------------------|
| cstring  |         | bool   |        | [17_4_3](https://github.com/VladislavNovak/17_4_3/blob/cb3945debec06f908c99caea271d56654937b5ef/main.cpp#L4C1-L4C1) |

```c++
bool hasSubstr(const char *origin, const char *substr) {
    char *found = strstr(origin, substr);

    return found != nullptr;
}
```

---
### `int findIndexInVector(vector<T> const &list, const T &key)`

Поиск key в vector. В случае успеха, возвращает позицию. Если ничего не найдено, возвращается -1

| includes  | depends | return | use in | links to use                                                                                                   |
|-----------|---------|--------|--------|----------------------------------------------------------------------------------------------------------------|
| algorithm |         | int    |        | [20_5_3](https://github.com/VladislavNovak/20_5_3/blob/1362c3ece3cbcf12cd29d26cf90eb84146f75d93/main.cpp#L142) |

```c++
template<typename T>
int findIndexInVector(std::vector<T> const &list, const T &key) {
    const int NOT_FOUND = -1;
    auto it = std::find_if(list.cbegin(), list.cend(), [key](const T &i){ return i == key; });

    if (it != list.cend()) {
        return (int)std::distance(list.cbegin(), it);
    }

    return NOT_FOUND;
}
```

Пример использования:

```c++
std::vector<std::string> list = { "first", "second", "third" };
std::string key = "third";

int result = findIndexInVector(list, key);

if (result != 1)
    std::cout << result << std::endl;
```

---
### `bool isNumeric(string const &str)`

Проверяет, является ли строка целым числом

| includes  | depends | return | links to use                                                                                                   |
|-----------|---------|--------|----------------------------------------------------------------------------------------------------------------|
| algorithm |         | bool   | [20_5_1](https://github.com/VladislavNovak/20_5_1/blob/ffa6db6840c82b32353f1714d6b7aaca3a6bcad2/main.cpp#L109) |

```c++
bool isNumeric(std::string const &str) {
    auto it = std::find_if(
            str.begin(),
            str.end(),
            [](char const &c) { return !std::isdigit(c); });

    return !str.empty() && it == str.end();
}
```

---
### `bool hasFileExist(const char* path)`

Проверяет существование файла

| includes | depends | return | links to use                                                                                                   | prev name   |
|----------|---------|--------|----------------------------------------------------------------------------------------------------------------|-------------|
| fstream  |         | bool   | [20_5_4](https://github.com/VladislavNovak/20_5_4/blob/45e2f0efdb54be265763b2786a89f1d01419fee3/main.cpp#L100) | isFileExist |

```c++
bool hasFileExist(const char* path) {
    bool isFileExist = false;

    std::ifstream file(path);

    if (file.is_open() && !file.bad()) isFileExist = true;

    file.close();

    return isFileExist;
}
```

---
### `bool isStringADate(string const &str, string &cause)`

Проверяет - является ли строка датой. 
Вторым аргументом передается строка, которая возвращает аккумулированный список ошибок, если они случились.

| includes | depends                                                | return | links to use                                                                                                   | prev name |
|----------|--------------------------------------------------------|--------|----------------------------------------------------------------------------------------------------------------|-----------|
|          | isNumeric<br/>getTrimmedString<br/>splitStringIntoList | bool   | [20_5_1](https://github.com/VladislavNovak/20_5_1/blob/ffa6db6840c82b32353f1714d6b7aaca3a6bcad2/main.cpp#L118) | isDate    |

```c++
bool isStringADate(std::string const &str, std::string &cause) {
    bool isValid = true;
    std::vector<std::vector<int>> ranges = { { 1, 31 }, { 1, 12 }, { 1950, 2030 } };
    std::vector<std::string> parts = ыplitStringIntoList(str, '.', false);

    if (parts.size() != 3) {
        cause += "Формат ввода: ДД.ММ.ГГГГ\n";
        isValid = false;
    }

    for (int i = 0; i < parts.size(); ++i) {
        std::string current = parts[i];

        if (!isNumeric(current)) {
            char warning[100];
            sprintf(warning, "%i часть (%s) не является цифрой\n", (i + 1), current.c_str());
            cause += warning;
            isValid = false;
            continue;
        }

        int part = std::stoi(current);
        auto range = ranges[i];

        if (part < range[0] || part > range[1]) {
            char warning[100];
            sprintf(warning, "%i часть (%i) должна быть в диапазоне %i - %i\n", (i + 1), part, range[0], range[1]);
            cause += warning;
            isValid = false;
        }
    }

    return isValid;
}
```
Данная функция пока узко специализирована и, несмотря на то, что выполняет задачу проверки строки, требует доработки. 
Однако она вполне рабочая и может служить общим шаблоном для решения подобных задач.

---
### `bool convertDoubleFromString(string const &text, double &out)`

Преобразует строку в double. Если удалось, то возвращается true

| includes | depends | return | links to use                                                                                                      | prev name      |
|----------|---------|--------|-------------------------------------------------------------------------------------------------------------------|----------------|
|          |         | bool   | [16_6_3_1](https://github.com/VladislavNovak/16_6_3_1/blob/f69c866eb4378c4947e2fdd413b22f253de362dc/main.cpp#L99) | stringToDouble |

```c++
bool convertDoubleFromString(string const &str, double &out) {
    try { out = std::stod(str); }
    catch (std::invalid_argument &err) {
        out = 0;
        std::cerr << err.what() << endl;
        return false;
    }

    return true;
}
```
Можно было бы использовать strtod(str.c_str(), nullptr), который не выбрасывает исключение.

---
### `std::string getDelimitedString(const string &range)`

Добавляет в копию строки между буквами разделитель в виде запятой. 

| includes | depends | return | use in       | links to use                                                                                                  | prev name    |
|----------|---------|--------|--------------|---------------------------------------------------------------------------------------------------------------|--------------|
|          |         | string | getUserInput | [19_5_2](https://github.com/VladislavNovak/19_5_2/blob/ea64d23ae5fc13594a1d51dad3aed8790f77872a/main.cpp#L19) | getJoinRange |


```c++
std::string getDelimitedString(const std::string &str) {
    std::string delimitedString;
    for (int i = 0; i < str.size(); ++i) {
        delimitedString += str[i];
        delimitedString += (i != str.size() - 1) ? ',' : '.';
    }

    return delimitedString;
}
```

---
### `void removeSymbolFromString(string &readjust, char const symbol, int leave = 0)`

Удалить из переданной строки все упоминания указанного символа. 
Дополнительно в leave можно указать количество символов, которое не нужно удалять.

| includes  | depends | return | use in | links to use                                                                                                      |
|-----------|---------|--------|--------|-------------------------------------------------------------------------------------------------------------------|
| algorithm |         | string |        | [16_6_3_1](https://github.com/VladislavNovak/16_6_3_1/blob/f69c866eb4378c4947e2fdd413b22f253de362dc/main.cpp#L14) |

```c++
void removeSymbolFromString(string &readjust, char const symbol, int leave = 0) {
    int count = 0;

    if (readjust[readjust.length() - 1] == symbol) {
        readjust.erase(std::prev(readjust.end()));
    }

    auto it = std::remove_if(
            readjust.begin(),
            readjust.end(),
            [&count, symbol, leave](char &c) {
                if (c == symbol) ++count;
                return (count > leave && c == symbol);
            });

    readjust.erase(it, readjust.end());
}
```
Пример использования:

```c++
// Удаляем из переданной строки точки, кроме первой
std::string getRemoveDotsString(const string &str) {
    std::string readjust = str;
    const char DOT = 46;
    removeSymbolFromString(readjust, DOT, 1);

    return readjust;
}
```

---
### `int getNumberOfDigit(int digit)`

Получаем количество разрядов в int

| includes | depends | return | links to use                                                                                                  | prev name  |
|----------|---------|--------|---------------------------------------------------------------------------------------------------------------|------------|
|          |         | int    | [16_6_2](https://github.com/VladislavNovak/16_6_2/blob/44332ad078311bd91ffc5f6114939ae80ba5916a/main.cpp#L24) | digitCount |

```c++
int getNumberOfDigit(int digit) {
    int count = 0;
    while (digit != 0) {
        digit /= 10;
        ++count;
    }
    return count;
}
```

---
### `int getRoundedIntWithStep(int val, int step = 10)`

Округляет целое до заданных десятков

| includes | depends | return | links to use                                                                                                  |
|----------|---------|--------|---------------------------------------------------------------------------------------------------------------|
|          |         | int    | [20_5_4](https://github.com/VladislavNovak/20_5_4/blob/421aae690b897f39871b48b8336fb7076b8ec704/main.cpp#L91) |

```c++
int getRoundedIntWithStep(int val, int step = 10) {
    return (val + step / 2) / step * step;
}
```

---
### `template<size_t T> void flipArray (int (&arr)[T])`

Перевернуть (на месте) массив типа int arr[] = { 0, 1, 2 };

| includes | depends | return | links to use                                                                                                          |
|----------|---------|--------|-----------------------------------------------------------------------------------------------------------------------|
|          |         |        | [17_4_2](https://github.com/VladislavNovak/17_4_2/blob/cf6327d3eceeab66a27265e0c85dfaea32b4d85d/main.cpp#L16C1-L16C1) |

```c++
template<size_t T>
void flipArray (int (&arr)[T]) {
    for (size_t i{}; i < T / 2; ++i) {
        int temp = *(arr + i);
        *(arr + i) = *(arr + T - i - 1);
        *(arr + T - i - 1) = temp;
    }
}
```

---
### `int getRandomIntInRange(int from, int to)`

Получить случайное целое в диапазоне (с учётом верхней границы). 

Для того чтобы случайное число всегда генерировалось заново, необходимо подключить ctime

| includes          | depends | return | links to use                                                                                                   |
|-------------------|---------|--------|----------------------------------------------------------------------------------------------------------------|
| cstdlib<br/>ctime |         | int    | [16_6_5](https://github.com/VladislavNovak/16_6_5/blob/44f288cbb2a6d42ebf892922805559517f79fbb1/main.cpp#L249) |


```c++
std::srand(std::time(nullptr)); // NOLINT(cert-msc51-cpp)

int getRandomIntInRange(int from, int to) {
    return (from + std::rand() % (to - from + 1)); // NOLINT(cert-msc50-cpp)
}
```

---
### `vector<T> getShuffleVector(vector<T> const &data)`

Перемешивает копию vector. Возвращает новый перемешанный вектор

| includes | depends             | return   | links to use                          |
|----------|---------------------|----------|---------------------------------------|
|          | getRandomIntInRange | vector T | getShuffledCopyOfVectorRangeExample() |

```c++
template<typename T>
std::vector<T> getShuffleVector(std::vector<T> const &data) {
    std::vector<T> out = data;
    for (int i = 0; i < out.size() - 1; ++i) {
        int j = getRandomIntInRange(i, out.size() - 1);
        std::swap(out[i], out[j]);
    }

    return out;
}
```

---
### `vector<T> getCopyVector(vector<T> const &data, int amount = 0, int firstPos = 0)`

Копирует vector. Возвращает или полную копию, или, если указан размер (amount) и/или 
позиция, с которой нужно копировать (firstPos), диапазон

| includes  | depends | return   | links to use                          |
|-----------|---------|----------|---------------------------------------|
| algorithm |         | vector T | getShuffledCopyOfVectorRangeExample() |

```c++
template<typename T>
std::vector<T> getCopyVector(std::vector<T> const &data, int amount = 0, int firstPos = 0) {
    std::vector<T> out;

    int sizeOfCopy = (amount == 0 )|| ((amount + firstPos) > data.size()) ? (data.size() - firstPos) : amount;

    std::copy_n(data.begin() + firstPos, sizeOfCopy, std::back_inserter(out));

    return out;
}
```

---
### `vector<T> getShuffledCopyOfVectorRange(vector<T> const &data, int amount = 0, int firstPos = 0)`

Перемешивает копию vector. Возвращает диапазон перемешанного вектора. 
Является обёрткой для getShuffleVector для получения диапазона

| includes | depends                            | return   | links to use                          |
|----------|------------------------------------|----------|---------------------------------------|
|          | getShuffleVector<br/>getCopyVector | vector T | getShuffledCopyOfVectorRangeExample() |

```c++
template<typename T>
std::vector<T> getShuffledCopyOfVectorRange(std::vector<T> const &data, int amount = 0, int firstPos = 0) {
    std::vector<T> shuffledVector = getShuffleVector(data);

    return getCopyVector(shuffledVector, amount, firstPos);
}

```

---
### `string getTrimmedString(string str, string const &whiteSpaces = " \r\n\t\v\f")`

Обрезает строку. Возвращает строку с удаленными конечными пробелами

| includes | depends | return | links to use                                                                                                          |
|----------|---------|--------|-----------------------------------------------------------------------------------------------------------------------|
|          |         | string | [20_5_2](https://github.com/VladislavNovak/20_5_2/blob/89adfe880b2d931009953b4e03bd19e6181bd05f/main.cpp#L14C2-L14C2) |

```c++
std::string getTrimmedString(std::string str, std::string const &whiteSpaces = " \r\n\t\v\f") {
    auto start = str.find_first_not_of(whiteSpaces);
    str.erase(0, start);
    auto end = str.find_last_not_of(whiteSpaces);
    str.erase(end + 1);

    return str;
}
```

---
### `vector<string> splitStringIntoList(string const &str, const char delim = ',', bool isEmptyDenied = true)`

Разбивает строку на подстроки. Если isEmptyDenied == false, то можно вернуть пустой вектор

| includes | depends          | return            | use in         | links to use                                                                                                  | prev name               |
|----------|------------------|-------------------|----------------|---------------------------------------------------------------------------------------------------------------|-------------------------|
| sstream  | getTrimmedString | vector of strings | getUserNumeric | [20_5_4](https://github.com/VladislavNovak/20_5_4/blob/45e2f0efdb54be265763b2786a89f1d01419fee3/main.cpp#L25) | getSplitStringOnRecords |


```c++
std::vector<std::string> splitStringIntoList(std::string const &str, const char delim = ',', bool isEmptyDenied = true) {
    std::vector<std::string> records;
    std::stringstream ss(str);
    std::string rawRecord;

    // Делим строки на токены по delim
    while (std::getline(ss, rawRecord, delim)) {
        std::string record = getTrimmedString(rawRecord);
        // Не позволяет добавлять пустой элемент
        if (record.empty() && isEmptyDenied) continue;

        records.push_back(record);
    }

    return records;
}
```

---
### `template<typename T> T getUserInput(string const &restrictions = "")`

Пользовательский ввод. Позволяет работать в двух режимах: без переданной строки restrictions и со строкой restrictions. 

Если без, можно получать, соответственно, типы int, double, float.

Во втором случае в typename передается тип char, а в restrictions - строка из любого списка символов, 
которые будут служить ограничением: т.е. получить возможно будет лишь один символ из restrictions.

Есть ещё несколько специфичных параллельных функций:

- `getUserInput` (получить int, double или один символ char в указанном диапазоне)
- `getUserLineString` (основано на std::getline и позволяет получить строку любой длины),
- `getUserNumeric` (получение числа в диапазоне)

| includes | depends                           | return | use in | links to use                                                                                                  | prev name   |
|----------|-----------------------------------|--------|--------|---------------------------------------------------------------------------------------------------------------|-------------|
|          | isIncludes<br/>getDelimitedString | T      |        | [19_5_2](https://github.com/VladislavNovak/19_5_2/blob/ea64d23ae5fc13594a1d51dad3aed8790f77872a/main.cpp#L29) | getUserChar |

```c++
template<typename T> T getUserInput(std::string const &restrictions = "") {
    T input;
    const char* warning = "Error. Symbol %c not in restrictions: %s.\nRepeat: ";

    while (true) {
        std::cin >> input;

        // предыдущее извлечение не удалось?
        if (std::cin.fail()) {
            // возвращаем нас в "нормальный" режим работы
            std::cin.clear();
            // и удаляем неверные входные данные
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Oops, that input is invalid. Please try again.\n";
            continue;
        }

        if ((restrictions.length() && isIncludes(restrictions, input)) || !restrictions.length()) break;

        printf(warning, input, getDelimitedString(restrictions).c_str());

        // Сбрасываем коматозное состояние cin и очищаем потом ввода
        std::cin.clear();
        fflush(stdin);
    }

    // удаляем любые посторонние входные данные
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    return input;
}
```
Примеры использования:

```c++
getUserInput<char>("1456abc"); // получаем лишь символ из строки "1456abc"
// Для следующего примера есть отдельная функция getUserChoiceFromRange
int number = (getUserInput<char>("12678") - '0') // получить число в заданном диапазоне (но не более одной единицы)
getUserInput<char>(); // отработает std::cin и получим первый введенный символ char
getUserInput<double>(); // получим любое введенное число с точкой-разделителем (вплоть до первой НЕ цифры)
getUserInput<int>(); // получим любое введенное число (вплоть до первой НЕ цифры)
```
```c++
// Получить цифру в обозначенном диапазоне
int getUserChoiceFromRange(const std::string &msg, std::string const &range) {
    std::cout << msg << ": ";
    return (getUserInput<char>(range) - '0');
}
```
```c++
// Возвращает true при введении Y/y или false при N/n. Другие символы запрещены
bool hasDialogYesNo(const std::string &msg) {
    printf("%s. Press 'Y/y' to agree or 'N/n' to deny: ", msg.c_str());
    return isIncludes("Yy", getUserChar<char>("YyNn"));
}
```

---
### `std::string getUserLineString(const string &msg)`

Пользовательский ввод. На основе `std::getline` получить всю строку до переноса. Конечные пробелы обрезаются. Пустая строка запрещается.

Есть ещё несколько специфичных параллельных функций:

- `getUserInput` (получить int, double или один символ char в указанном диапазоне)
- `getUserLineString` (основано на std::getline и позволяет получить строку любой длины),
- `getUserNumeric` (получение числа в диапазоне)

| includes | depends          | return | use in         | links to use                                                                                                  | prev name                     |
|----------|------------------|--------|----------------|---------------------------------------------------------------------------------------------------------------|-------------------------------|
|          | getTrimmedString | string | getUserNumeric | [20_5_4](https://github.com/VladislavNovak/20_5_4/blob/45e2f0efdb54be265763b2786a89f1d01419fee3/main.cpp#L42) | getUserWord<br/>getUserString |

```c++
std::string getUserLineString(const std::string &msg) {
    while (true) {
        std::string userLineString;
        printf("%s: ", msg.c_str());
        std::getline(std::cin, userLineString);

        userLineString = getTrimmedString(userLineString);
        if (userLineString.empty()) {
            std::cout << "Строка не может быть пустой. Попробуйте снова!" << std::endl;
            continue;
        }

        return userLineString;
    }
}
```
Пример использования:
```c++
std::string msg1 = "Введете слово";
// получить введенные пользователем слова и вычленить лишь первое
string userInput = splitStringIntoList(getUserLineString(msg1), ' ')[0];
std::string msg2 = "Перечислите слова через запятую";
// Получить введенный пользователем список в виде вектора
std::vector<std::string> userInputList = splitStringIntoList(getUserLineString(msg2), ',');
```

---
### `int getUserNumeric(const string &msg = "Введите цифры", int from = 0, int to = 0)`

Пользовательский ввод. Получить любое целое число. Если from != to, тогда ввести цифры возможно лишь в диапазоне от from до to

Есть ещё несколько специфичных параллельных функций:

- `getUserInput` (получить int, double или один символ char в указанном диапазоне)
- `getUserLineString` (основано на std::getline и позволяет получить строку любой длины),
- `getUserNumeric` (получение числа в диапазоне)

| includes | depends                                   | return | links to use                                                                                                  |
|----------|-------------------------------------------|--------|---------------------------------------------------------------------------------------------------------------|
|          | splitStringIntoList<br/>getUserLineString | int    | [20_5_2](https://github.com/VladislavNovak/20_5_2/blob/9903c48eb00e52b82c5d20b3bd6b8d1ff11931e5/main.cpp#L71) |

```c++
int getUserNumeric(const std::string &msg = "Введите цифры", int from = 0, int to = 0) {
    std::string warning = "Попробуйте снова. Это должно быть целое число";
    bool isRange = (from != to);

    while (true) {
        std::string userInput = splitStringIntoList(getUserLineString(msg), ' ')[0];

        if (!isNumeric(userInput)) {
            printf("%s\n", warning.c_str());
            continue;
        }

        int num = std::stoi(userInput);

        if (isRange && (num < from || num > to)) {
            printf("%s в диапазоне (%i - %i)\n", warning.c_str(), from, to);
            continue;
        }

        return num;
    }
}
```

---
### `void outputListToStream(std::ostream &out, vector<vector<string>> const &list, const string &delim = ",", bool isNumbering = false)`

Печатает данные в указанный поток. Потоком может быть std::cout, а может быть и std::ofstream file. 
Таким образом, данные можно или вывести на экран, или распечатать в файл. Важно лишь, чтобы данные были массивом строк.

| includes | depends | return | links to use           | prev name                                        |
|----------|---------|--------|------------------------|--------------------------------------------------|
| iostream |         |        | writeReadFileExample() | outputComplexData<br/>displayComplexDataToScreen |

```c++
void outputListToStream(std::ostream &out, std::vector<std::string> const &list, const std::string &delim = ",", bool isNumbering = false) {
    for (int i = 0; i < list.size(); ++i)
        out << (isNumbering ? std::to_string(i) + ": " + list[i] : list[i]) << (i != list.size() - 1 ? delim : "");

    out << std::endl;
}
```

Примеры использования (функция модифицирована под вывод вектора векторов в файл):

```c++
void outputComplexToStream(std::ostream &out, vector<vector<string>> const &complexData, const string &format = ",") {
    for (auto &line : complexData) {
        for (int i = 0; i < line.size(); ++i) {
             out << line[i] << (i != line.size() - 1 ? format : "");
        }
        out << std::endl;
    }
}
```

---
### `writeListToFile(const char* path, vector<string> const &list, bool isAppMode = true, const std::string &delim = ",")`

Запись в файл. Печатает вектор в файл

| includes | depends            | return | links to use           | prev name              |
|----------|--------------------|--------|------------------------|------------------------|
| fstream  | outputListToStream |        | writeReadFileExample() | writeComplexDataToFile |

```c++
void writeListToFile(const char* path, std::vector<std::string> const &list, bool isAppMode = true, const std::string &delim = ",") {
    std::ofstream file(path, (isAppMode ? std::ios::app : std::ios::out));
    outputListToStream(file, list, delim);
    file.close();
}
```

---
### `void printList(vector<string> const &list, const string &msg = "", const string &delim = ",", bool isNumbering = false)`

Выводит данные на экран. Обычная печать простого вектора

| includes | depends            | return | links to use           | prev name                  |
|----------|--------------------|--------|------------------------|----------------------------|
|          | outputListToStream |        | writeReadFileExample() | displayComplexDataToScreen |

```c++
void printList(std::vector<std::string> const &list, const std::string &msg = "", const std::string &delim = ",", bool isNumbering = false) {
    if (msg.length())
        std::cout << msg << ": " << std::endl;

    outputListToStream(std::cout, list, delim, isNumbering);
}
```

---
### `bool readFileToList(const char* pathName, vector<string> &list)`

Чтение файла. Записывает файл в вектор. В случае успешного прочтения возвращает true

| includes | depends | return | links to use           | prev name        |
|----------|---------|--------|------------------------|------------------|
| fstream  |         |        | writeReadFileExample() | readFileToVector |

```c++
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
```

---
### `void displayFileToScreen(const char* pathName, string const &msg)`

Чтение файла. Записывает данные из файла в вектор и сразу печатает их на экран.

| includes | depends                      | return | links to use           |
|----------|------------------------------|--------|------------------------|
|          | readFileToList<br/>printList |        | writeReadFileExample() |

```c++
void displayFileToScreen(const char* pathName, std::string const &msg) {
    std::vector<std::string> data;
    bool isReadFileSuccessfully = readFileToList(pathName, data);

    if (!isReadFileSuccessfully) {
        printf("%s не обнаружен. Он должен находиться в директории с исполняемым файлом!\n", pathName);
        return;
    }

    system("cls");

    if (!data.empty()) {
        printList(data, msg, ", ");
    } else {
        std::cout << "Данных пока нет" << std::endl;
    }
}
```

---
### `bool loadStringFromBinaryFile(const char* fileName, string &str)`

Чтение из двоичного (бинарного) файла в строку. Возвращает true, если чтение прошло успешно

| includes | depends      | return | links to use                                                                                                   | past name          |
|----------|--------------|--------|----------------------------------------------------------------------------------------------------------------|--------------------|
| fstream  | hasFileExist | bool   | [20_5_4](https://github.com/VladislavNovak/20_5_4/blob/45e2f0efdb54be265763b2786a89f1d01419fee3/main.cpp#L112) | readFromBinaryFile |

```c++
bool loadStringFromBinaryFile(const char* path, std::string &str) {
    bool isReadSuccessfully = false;
    std::ifstream fileReader(path, std::ios::binary);

    if (hasFileExist(path)) {
        fileReader.seekg(0, std::ifstream::end);
        int bufferSize = (int)fileReader.tellg();
        str.resize(bufferSize);
        fileReader.seekg(0, std::ifstream::beg);

        fileReader.read((char*) str.c_str(), bufferSize);

        isReadSuccessfully = true;
    }

    fileReader.close();

    return isReadSuccessfully;
}
```

Примечание: создать буфер возможно посредством массива char:

```c++
    fileReader.seekg(0, std::ifstream::end);

    int bufferSize = (int)fileReader.tellg();
    char* buffer = new char[bufferSize + 1];
    buffer[bufferSize] = '\0';

    fileReader.seekg(0, std::ifstream::beg);

    fileReader.read(buffer, bufferSize);

    data += buffer;
    delete[] buffer;
```

---
### `void saveStringToBinaryFile(const char* path, const string &str, bool isAppMode = false, const char delim = ';')`

Запись в двоичный (бинарный) файл из строки

| includes | depends      | return | links to use                                                                                                            | past name         |
|----------|--------------|--------|-------------------------------------------------------------------------------------------------------------------------|-------------------|
| fstream  | hasFileExist |        | [20_5_4](https://github.com/VladislavNovak/20_5_4/blob/45e2f0efdb54be265763b2786a89f1d01419fee3/main.cpp#L138C1-L138C1) | writeToBinaryFile |

```c++
void saveStringToBinaryFile(const char* path,
                            std::string const &str,
                            bool isAppMode = false,
                            const char delim = ';') {    
    std::ofstream file(path, std::ios::binary | (isAppMode ? std::ios::app : std::ios::out));

    if (hasFileExist(path) && isAppMode)
        file.write((char*) &delim, sizeof(delim));

    file.write(str.c_str(), str.length());
    
    file.close();
}
```

---
### `template<typename T> bool loadIntoArrFromBinaryFile(const char* path, vector<T> &arr)`

Читает из бинарного (двоичного) файла данные для массива структур.

| includes | depends                      | return | links to use |
|----------|------------------------------|--------|--------------|
| fstream  | readIntoPersonFromBinaryFile | bool   |              |

```c++
template<typename T>
bool loadIntoArrFromBinaryFile(const char* path, vector<T> &arr) {
    std::ifstream fileReader(path, std::ios::binary);
    bool isFileFound = (fileReader.is_open() && !fileReader.bad());

    if (isFileFound) {
        while(!fileReader.eof()) {
            T item;
            bool isItemReadSuccessfully = readIntoPersonFromBinaryFile(fileReader, item);

            if (isItemReadSuccessfully)
                arr.push_back(item);
        }
    }

    fileReader.close();

    return isFileFound;
}
```

В `readIntoPersonFromBinaryFile()` необходимо подставить актуальную структуру с внесенными изменениями

---
### `bool readIntoPersonFromBinaryFile(std::ifstream &fileReader, character &person)`

Читает из бинарного (двоичного) файла в структуру.

Функция выступает лишь как пример, шаблон.

| includes | depends                | return | links to use |
|----------|------------------------|--------|--------------|
| fstream  | savePersonToBinaryFile | bool   |              |

```c++
bool readIntoPersonFromBinaryFile(std::ifstream &fileReader, character &person) {
    bool isItemReadSuccessfully = false;
    int bufferSize;

    // Читаем первую сущность. Это - размер для person.name
    fileReader.read((char*) &bufferSize, sizeof(int));
    // Если она существует в принципе, то продолжаем чтение
    if (!fileReader.eof()) {
        person.name.resize(bufferSize);
        fileReader.read((char*) person.name.c_str(), bufferSize);
        fileReader.read((char*) &person.salary, sizeof(int));

        isItemReadSuccessfully = true;
    }

    return isItemReadSuccessfully;
}
```

Структура данных должна быть заранее известна. 
Вероятнее всего ранее она должна была быть записана в файл методом `savePersonToBinaryFile()` 
В конкретном случае структура должна быть такой:

```c++
struct character { string name; int health; };
```

---
### `void savePersonToBinaryFile(const char* path, character const &person)`

Записывает в бинарный (двоичный) файл структуру.

| includes | depends                   | return | links to use |
|----------|---------------------------|--------|--------------|
| fstream  | loadIntoArrFromBinaryFile |        |              |

```c++
void savePersonToBinaryFile(const char* path, character const &person, bool isAppMode = false) {
    std::ofstream file(path, std::ios::binary | (isAppMode ? std::ios::app : std::ios::out));

    int nameSize = (int)person.name.length();
    file.write((char*) &nameSize, sizeof(nameSize));
    file.write(person.name.c_str(), nameSize);
    file.write((char*) &person.salary, sizeof(person.salary));

    file.close();
}
```

Структура данных должна быть заранее известна.
Вероятнее всего позднее она должна быть прочитана из файла методом `loadIntoArrFromBinaryFile()`
В конкретном случае структура должна быть такой:

```c++
struct character { string name; int salary; };
```






