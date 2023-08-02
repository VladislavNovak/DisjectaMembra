# <font color="Tomato">Pragmata</font>

<!-- TOC -->
* [<font color="Tomato">Pragmata</font>](#font-colortomatopragmatafont)
    * [`bool isIncludes(const T &range, const N &item)`](#bool-isincludesconst-t-range-const-n-item)
    * [`bool hasSubstr(const char *origin, const char *substr)`](#bool-hassubstrconst-char-origin-const-char-substr)
    * [`int findIndexInVector(vector<T> const &list, const T &key)`](#int-findindexinvectorvectort-const-list-const-t-key)
    * [`bool isNumeric(string const &str)`](#bool-isnumericstring-const-str)
    * [`bool isContainsOnlyLetters(std::string const &str)`](#bool-iscontainsonlylettersstdstring-const-str)
    * [`bool hasFileExist(const char* path)`](#bool-hasfileexistconst-char-path)
    * [`bool isStringADate(string const &str, string &cause)`](#bool-isstringadatestring-const-str-string-cause)
    * [`bool convertDoubleFromString(string const &text, double &out)`](#bool-convertdoublefromstringstring-const-text-double-out)
    * [`string getDelimitedString(const string &list)`](#string-getdelimitedstringconst-string-list)
    * [`void removeSymbolFromString(string &readjust, char const symbol, int leave = 0)`](#void-removesymbolfromstringstring-readjust-char-const-symbol-int-leave--0)
    * [`int getNumberOfDigit(int digit)`](#int-getnumberofdigitint-digit)
    * [`int getRoundedIntWithStep(int val, int step = 10)`](#int-getroundedintwithstepint-val-int-step--10)
    * [`void flipArray (int (&arr)[T])`](#void-fliparray-int-arrt)
    * [`int getRandomIntInRange(int from, int to)`](#int-getrandomintinrangeint-from-int-to)
    * [`vector<N> removeIntersections(vector<N> const &list, vector<N> const &intersection)`](#vectorn-removeintersectionsvectorn-const-list-vectorn-const-intersection)
    * [`vector<T> getShuffleVector(vector<T> const &data)`](#vectort-getshufflevectorvectort-const-data)
    * [`vector<T> getCopyVector(vector<T> const &data, int amount = 0, int firstPos = 0)`](#vectort-getcopyvectorvectort-const-data-int-amount--0-int-firstpos--0)
    * [`vector<T> getShuffledCopyOfVectorRange(vector<T> const &data, int amount = 0, int firstPos = 0)`](#vectort-getshuffledcopyofvectorrangevectort-const-data-int-amount--0-int-firstpos--0)
    * [`string getTrimmedString(string str, string const &whiteSpaces = " \r\n\t\v\f")`](#string-gettrimmedstringstring-str-string-const-whitespaces---rntvf)
    * [`vector<string> splitStringIntoList(string const &str, char const delim = ',')`](#vectorstring-splitstringintoliststring-const-str-char-const-delim--)
    * [`T getUserInput(string const &restrictions = "")`](#t-getuserinputstring-const-restrictions--)
    * [`int getIndexOfUserInputFromList(vector<string> const &list)`](#int-getindexofuserinputfromlistvectorstring-const-list)
    * [`string getUserLineString(const string &msg)`](#string-getuserlinestringconst-string-msg)
    * [`int getUserNumeric(vector<int> const &list = {}, vector<int> const &excludedList = {}) `](#int-getusernumericvectorint-const-list---vectorint-const-excludedlist---)
    * [`void outputListToStream(ostream &out, vector<vector<string>> const &list, const string &delim = ",")`](#void-outputlisttostreamostream-out-vectorvectorstring-const-list-const-string-delim--)
    * [`writeListToFile(const char* path, vector<string> const &list, bool isAppMode = true, string const &delim = ",")`](#writelisttofileconst-char-path-vectorstring-const-list-bool-isappmode--true-string-const-delim--)
    * [`bool readFileToList(const char* pathName, vector<string> &list)`](#bool-readfiletolistconst-char-pathname-vectorstring-list)
    * [`void displayFileToScreen(const char* pathName, string const &msg)`](#void-displayfiletoscreenconst-char-pathname-string-const-msg)
    * [`bool loadStringFromBinaryFile(const char* fileName, string &str)`](#bool-loadstringfrombinaryfileconst-char-filename-string-str)
    * [`void saveStringToBinaryFile(const char* path, const string &str, bool isAppMode = false, char delim = ';')`](#void-savestringtobinaryfileconst-char-path-const-string-str-bool-isappmode--false-char-delim--)
    * [`bool loadIntoArrFromBinaryFile(const char* path, vector<T> &arr)`](#bool-loadintoarrfrombinaryfileconst-char-path-vectort-arr)
    * [`bool readIntoPersonFromBinaryFile(ifstream &fileReader, character &person)`](#bool-readintopersonfrombinaryfileifstream-filereader-character-person)
    * [`void savePersonToBinaryFile(const char* path, character const &person)`](#void-savepersontobinaryfileconst-char-path-character-const-person)
<!-- TOC -->

---
### `bool isIncludes(const T &range, const N &item)`

Проверяет, встречается ли item хоть раз встречается в диапазоне.

```c++
template<typename T, typename N>
bool isIncludes(const T &range, const N &item) {
    return std::any_of(range.begin(),
                       range.end(),
                       [&item](const N &c) { return c == item; });
}
```
<details><summary>Дополнительные данные</summary>

| includes  | depends | return | use in       | links to use                                                                                                  |
|-----------|---------|--------|--------------|---------------------------------------------------------------------------------------------------------------|
| algorithm |         | bool   | getUserInput | [16_6_4](https://github.com/VladislavNovak/16_6_4/blob/5e27ffd9e4b65dbeb05fa8feb3af24d4e61339e0/main.cpp#L12) |

Пример использования:

```c++
std::vector<int> range = {2, 3, 6, 7};
std::string rangeString = "first";

std::cout << isIncludes(range, 5) << std::endl; // 0
std::cout << isIncludes(range, 2) << std::endl; // 1
std::cout << isIncludes(rangeString, 'f') << std::endl; // 1
std::cout << isIncludes(rangeString, 'a') << std::endl; // 0
```
</details>

---
### `bool hasSubstr(const char *origin, const char *substr)`

Проверяет строку на вхождение подстроки

```c++
bool hasSubstr(const char *origin, const char *substr) {
    char *found = strstr(origin, substr);

    return found != nullptr;
}
```

<details><summary>Дополнительные данные</summary>

| includes | depends | return | use in | links to use                                                                                                        |
|----------|---------|--------|--------|---------------------------------------------------------------------------------------------------------------------|
| cstring  |         | bool   |        | [17_4_3](https://github.com/VladislavNovak/17_4_3/blob/cb3945debec06f908c99caea271d56654937b5ef/main.cpp#L4C1-L4C1) |

</details>

---
### `int findIndexInVector(vector<T> const &list, const T &key)`

Поиск key в vector. В случае успеха, возвращает позицию. Если ничего не найдено, возвращается -1

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
<details><summary>Дополнительные данные</summary>

| includes  | depends | return | use in | links to use                                                                                                   |
|-----------|---------|--------|--------|----------------------------------------------------------------------------------------------------------------|
| algorithm |         | int    |        | [20_5_3](https://github.com/VladislavNovak/20_5_3/blob/1362c3ece3cbcf12cd29d26cf90eb84146f75d93/main.cpp#L142) |

Пример использования:

```c++
int result = findIndexInVector<string>({ "first", "second", "third" }, "third");

if (result != 1) std::cout << result << std::endl;
```
</details>

---
### `bool isNumeric(string const &str)`

Проверяет, является ли строка целым числом

```c++
bool isNumeric(std::string const &str) {
    auto it = std::find_if(str.begin(), str.end(), [](const char &c) { return !std::isdigit(c); });

    return (!str.empty() && it == str.end());
}
```

<details><summary>Дополнительные данные</summary>

| includes  | depends | return | links to use                                                                                                   |
|-----------|---------|--------|----------------------------------------------------------------------------------------------------------------|
| algorithm |         | bool   | [20_5_1](https://github.com/VladislavNovak/20_5_1/blob/ffa6db6840c82b32353f1714d6b7aaca3a6bcad2/main.cpp#L109) |

</details>

---
### `bool isContainsOnlyLetters(std::string const &str)`

Проверяет, содержит ли строка лишь буквы

```c++
bool isContainsOnlyLetters(std::string const &str) {
    auto it = std::find_if(str.begin(), str.end(), [](const char &c) { return !std::isalpha(c); });

    return it == str.end();
}
```
<details><summary>Дополнительные данные</summary>

| includes  | depends | return | links to use                                                                                                  |
|-----------|---------|--------|---------------------------------------------------------------------------------------------------------------|
| algorithm |         | bool   | [21_5_1](https://github.com/VladislavNovak/21_5_1/blob/317e26448bf863dc4ce89204c500e0ae82b718d4/main.cpp#L28) |

</details>

---
### `bool hasFileExist(const char* path)`

Проверяет существование файла

```c++
bool hasFileExist(const char* path) {
    bool isFileExist = false;

    std::ifstream file(path);

    if (file.is_open() && !file.bad()) isFileExist = true;

    file.close();

    return isFileExist;
}
```

<details><summary>Дополнительные данные</summary>

| includes | depends | return | links to use                                                                                                   | prev name   |
|----------|---------|--------|----------------------------------------------------------------------------------------------------------------|-------------|
| fstream  |         | bool   | [20_5_4](https://github.com/VladislavNovak/20_5_4/blob/45e2f0efdb54be265763b2786a89f1d01419fee3/main.cpp#L100) | isFileExist |

</details>

---
### `bool isStringADate(string const &str, string &cause)`

Проверяет - является ли строка датой. 
Вторым аргументом передается строка, которая возвращает аккумулированный список ошибок, если они случились.

```c++
bool isStringADate(std::string const &str, std::string &cause) {
    bool isValid = true;
    std::vector<std::vector<int>> ranges = { { 1, 31 }, { 1, 12 }, { 1950, 2030 } };
    std::vector<std::string> parts = splitStringIntoList(str, '.', false);

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

<details><summary>Дополнительные данные</summary>

Данная функция пока узко специализирована и, несмотря на то, что выполняет задачу проверки строки, требует доработки. 
Однако она вполне рабочая и может служить общим шаблоном для решения подобных задач.

| includes | depends                                                | return | links to use                                                                                                   | prev name |
|----------|--------------------------------------------------------|--------|----------------------------------------------------------------------------------------------------------------|-----------|
|          | isNumeric<br/>getTrimmedString<br/>splitStringIntoList | bool   | [20_5_1](https://github.com/VladislavNovak/20_5_1/blob/ffa6db6840c82b32353f1714d6b7aaca3a6bcad2/main.cpp#L118) | isDate    |

</details>

---
### `bool convertDoubleFromString(string const &text, double &out)`

Преобразует строку в double. Если удалось, то возвращается true

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

<details><summary>Дополнительные данные</summary>

Можно было бы использовать strtod(str.c_str(), nullptr), который не выбрасывает исключение.

| includes | depends | return | links to use                                                                                                      | prev name      |
|----------|---------|--------|-------------------------------------------------------------------------------------------------------------------|----------------|
|          |         | bool   | [16_6_3_1](https://github.com/VladislavNovak/16_6_3_1/blob/f69c866eb4378c4947e2fdd413b22f253de362dc/main.cpp#L99) | stringToDouble |

</details>

---
### `string getDelimitedString(const string &list)`

Возвращает новую строку со знаками, разделенными аргументом delim 

```c++
template<typename T>
std::string getDelimitedString(T const &list, char const delim = ',') {
    std::string delimitedString;
    for (int i = 0; i < list.size(); ++i) {
        delimitedString += std::to_string(list[i]);
        if (i != list.size() - 1) delimitedString += delim;
    }

    return delimitedString;
}
```
<details><summary>Дополнительные данные</summary>

| includes | depends | return | use in       | links to use                                                                                                  | prev name    |
|----------|---------|--------|--------------|---------------------------------------------------------------------------------------------------------------|--------------|
|          |         | string | getUserInput | [19_5_2](https://github.com/VladislavNovak/19_5_2/blob/ea64d23ae5fc13594a1d51dad3aed8790f77872a/main.cpp#L19) | getJoinRange |

</details>

Примеры использования:

```c++
string somethingString = "string";
vector<int> someThingRange = {2,4,5};

getDelimitedString(somethingString); // "s,t,r,i,n,g"
getDelimitedString(someThingRange); // "2,4,5"
```

---
### `void removeSymbolFromString(string &readjust, char const symbol, int leave = 0)`

Удалить из переданной строки все упоминания указанного символа. 
Дополнительно в leave можно указать количество символов, которое не нужно удалять.

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

<details><summary>Дополнительные данные</summary>

| includes  | depends | return | use in | links to use                                                                                                      |
|-----------|---------|--------|--------|-------------------------------------------------------------------------------------------------------------------|
| algorithm |         | string |        | [16_6_3_1](https://github.com/VladislavNovak/16_6_3_1/blob/f69c866eb4378c4947e2fdd413b22f253de362dc/main.cpp#L14) |

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
</details>

---
### `int getNumberOfDigit(int digit)`

Получаем количество разрядов в int

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
<details><summary>Дополнительные данные</summary>

| includes | depends | return | links to use                                                                                                  | prev name  |
|----------|---------|--------|---------------------------------------------------------------------------------------------------------------|------------|
|          |         | int    | [16_6_2](https://github.com/VladislavNovak/16_6_2/blob/44332ad078311bd91ffc5f6114939ae80ba5916a/main.cpp#L24) | digitCount |

</details>

---
### `int getRoundedIntWithStep(int val, int step = 10)`

Округляет целое до заданных десятков

```c++
int getRoundedIntWithStep(int val, int step = 10) {
    return (val + step / 2) / step * step;
}
```
<details><summary>Дополнительные данные</summary>

| includes | depends | return | links to use                                                                                                  |
|----------|---------|--------|---------------------------------------------------------------------------------------------------------------|
|          |         | int    | [20_5_4](https://github.com/VladislavNovak/20_5_4/blob/421aae690b897f39871b48b8336fb7076b8ec704/main.cpp#L91) |

</details>

---
### `void flipArray (int (&arr)[T])`

Перевернуть (на месте) массив типа int arr[] = { 0, 1, 2 };

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
<details><summary>Дополнительные данные</summary>

| includes | depends | return | links to use                                                                                                          |
|----------|---------|--------|-----------------------------------------------------------------------------------------------------------------------|
|          |         |        | [17_4_2](https://github.com/VladislavNovak/17_4_2/blob/cf6327d3eceeab66a27265e0c85dfaea32b4d85d/main.cpp#L16C1-L16C1) |

</details>

---
### `int getRandomIntInRange(int from, int to)`

Получить случайное целое в диапазоне (с учётом верхней границы). 

```c++
int getRandomIntInRange(int from, int to) {
    return (from + std::rand() % (to - from + 1)); // NOLINT(cert-msc50-cpp)
}
```
<details><summary>Дополнительные данные</summary>

Для того чтобы случайное число всегда генерировалось заново, необходимо подключить ctime

| includes          | depends | return | links to use                                                                                                   |
|-------------------|---------|--------|----------------------------------------------------------------------------------------------------------------|
| cstdlib<br/>ctime |         | int    | [16_6_5](https://github.com/VladislavNovak/16_6_5/blob/44f288cbb2a6d42ebf892922805559517f79fbb1/main.cpp#L249) |

Перед этим, вначале main создаем точку отсчета:

```c++
std::srand(std::time(nullptr)); // NOLINT(cert-msc51-cpp)
```
</details>

---
### `vector<N> removeIntersections(vector<N> const &list, vector<N> const &intersection)`

Возвращает результат вычета из первого переданного вектора второго

```c++
template<typename N>
vector<N> removeIntersections(vector<N> const &list, vector<N> const &intersection) {
    vector<N> results = list;

    for (int i = 0; i < intersection.size(); ++i) {
        for (int j = 0; j < results.size(); ++j) {
            if (intersection[i] == results[j]) {
                results.erase(results.begin() + j);
                --j;
            }
        }
    }

    return results;
}
```

<details><summary>Дополнительные данные</summary>

| includes | depends | return   | links to use |
|----------|---------|----------|--------------|
|          |         | vector T |              |

Пример применения:

```c++
vector<string> listStr = { "first", "second", "third", "third", "five", "third" };
vector<string> intersectionsStr = { "third", "second" };
vector<int> listInt = { 2,3,4,3,5,6,7,1,1,2};
vector<int> intersectionsInt = { 5,1,2 };

auto results1 = removeIntersections(listStr, intersectionsStr); // first, five
auto results2 = removeIntersections(listInt, intersectionsInt); // 3,4,3,6,7
```

</details>

---
### `vector<T> getShuffleVector(vector<T> const &data)`

Перемешивает копию vector. Возвращает новый перемешанный вектор

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

<details><summary>Дополнительные данные</summary>

| includes | depends             | return   | links to use                          |
|----------|---------------------|----------|---------------------------------------|
|          | getRandomIntInRange | vector T | getShuffledCopyOfVectorRangeExample() |

</details>

---
### `vector<T> getCopyVector(vector<T> const &data, int amount = 0, int firstPos = 0)`

Копирует vector. Возвращает или полную копию, или, если указан размер (amount) и/или 
позиция, с которой нужно копировать (firstPos), диапазон

```c++
template<typename T>
std::vector<T> getCopyVector(std::vector<T> const &data, int amount = 0, int firstPos = 0) {
    std::vector<T> out;

    int sizeOfCopy = (amount == 0 )|| ((amount + firstPos) > data.size()) ? (data.size() - firstPos) : amount;

    std::copy_n(data.begin() + firstPos, sizeOfCopy, std::back_inserter(out));

    return out;
}
```

<details><summary>Дополнительные данные</summary>

| includes  | depends | return   | links to use                          |
|-----------|---------|----------|---------------------------------------|
| algorithm |         | vector T | getShuffledCopyOfVectorRangeExample() |

</details>

---
### `vector<T> getShuffledCopyOfVectorRange(vector<T> const &data, int amount = 0, int firstPos = 0)`

Перемешивает копию vector. Возвращает диапазон перемешанного вектора. 
Является обёрткой для getShuffleVector для получения диапазона

```c++
template<typename T>
std::vector<T> getShuffledCopyOfVectorRange(std::vector<T> const &data, int amount = 0, int firstPos = 0) {
    std::vector<T> shuffledVector = getShuffleVector(data);

    return getCopyVector(shuffledVector, amount, firstPos);
}

```

<details><summary>Дополнительные данные</summary>

| includes | depends                            | return   | links to use                          |
|----------|------------------------------------|----------|---------------------------------------|
|          | getShuffleVector<br/>getCopyVector | vector T | getShuffledCopyOfVectorRangeExample() |

</details>

---
### `string getTrimmedString(string str, string const &whiteSpaces = " \r\n\t\v\f")`

Обрезает строку. Возвращает строку с удаленными конечными пробелами

```c++
std::string getTrimmedString(std::string str, std::string const &whiteSpaces = " \r\n\t\v\f") {
    auto start = str.find_first_not_of(whiteSpaces);
    str.erase(0, start);
    auto end = str.find_last_not_of(whiteSpaces);
    str.erase(end + 1);

    return str;
}
```

<details><summary>Дополнительные данные</summary>

| includes | depends | return | links to use                                                                                                          |
|----------|---------|--------|-----------------------------------------------------------------------------------------------------------------------|
|          |         | string | [20_5_2](https://github.com/VladislavNovak/20_5_2/blob/89adfe880b2d931009953b4e03bd19e6181bd05f/main.cpp#L14C2-L14C2) |

</details>

---
### `vector<string> splitStringIntoList(string const &str, char const delim = ',')`

Разбивает строку на подстроки.

```c++
std::vector<std::string> splitStringIntoList(std::string const &str, char const delim = ',') {
    bool isEmptyRemove = true
            
    std::vector<std::string> list;
    std::stringstream ss(str);
    std::string rawRecord;

    // Делим строки на токены по delim
    while (std::getline(ss, rawRecord, delim)) {
        std::string record = getTrimmedString(rawRecord);
        // Не позволяет добавлять пустой элемент
        if (record.empty() && isEmptyRemove) continue;

        list.push_back(record);
    }

    return list;
}
```

<details><summary>Дополнительные данные</summary>

| includes | depends          | return            | use in         | links to use                                                                                                  | prev name               |
|----------|------------------|-------------------|----------------|---------------------------------------------------------------------------------------------------------------|-------------------------|
| sstream  | getTrimmedString | vector of strings | getUserNumeric | [20_5_4](https://github.com/VladislavNovak/20_5_4/blob/45e2f0efdb54be265763b2786a89f1d01419fee3/main.cpp#L25) | getSplitStringOnRecords |

Если изменить isEmptyRemove на false, то можно вернуть пустой элемент вектора

Пример использования:

```c++
// получить первое слово
std::string getUserWord(std::string const &msg) {
    return splitStringIntoList(getUserLineString((msg)), ' ')[0];
}

```
</details>

---
### `T getUserInput(string const &restrictions = "")`

Пользовательский ввод. Позволяет работать в двух режимах: без переданной строки restrictions и со строкой restrictions. 

Если без, можно получать, соответственно, типы int, double, float.

Во втором случае в typename передается тип char, а в restrictions - строка из любого списка символов, 
которые будут служить ограничением: т.е. получить возможно будет лишь один символ из restrictions.

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

        if ((restrictions.length() && isIncludes(restrictions, input)) || restrictions.empty()) break;

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

<details><summary>Дополнительные данные</summary>

Есть ещё несколько специфичных параллельных функций:

- `getUserInput` (получить int, double или один символ char в указанном диапазоне)
- `getUserLineString` (основано на std::getline и позволяет получить строку любой длины),
- `getUserNumeric` (получение числа в диапазоне)
- `getIndexOfUserInputFromList` (получить одну из опций)

| includes | depends                           | return | use in | links to use                                                                                                  | prev name   |
|----------|-----------------------------------|--------|--------|---------------------------------------------------------------------------------------------------------------|-------------|
| limits   | isIncludes<br/>getDelimitedString | T      |        | [19_5_2](https://github.com/VladislavNovak/19_5_2/blob/ea64d23ae5fc13594a1d51dad3aed8790f77872a/main.cpp#L29) | getUserChar |


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
Возможная альтернатива для `getIndexOfUserInputFromList`:

```c++
// Возвращает true при введении Y/y или false при N/n. Другие символы запрещены
bool hasDialogYesNo(const std::string &msg) {
    printf("%s. Press 'Y/y' to agree or 'N/n' to deny: ", msg.c_str());
    return isIncludes("Yy", getUserChar<char>("YyNn"));
}
```
</details>

---
### `int getIndexOfUserInputFromList(vector<string> const &list)`

Требует ввод от пользователя одного из элементов переданного списка. Возвращает индекс выбранного элемента списка

```c++
int getIndexOfUserInputFromList(std::vector<std::string> const &list) {
    bool isList = list.size() > 1;

    while (true) {
        cout << (isList ? "Выберите одну из опций: " : "Введите команду : ");
        outputListToStream(std::cout, list, (isList ? "|" : ""));

        auto userInput = getUserLineString("Наберите и нажмите enter");
        // return index from list, if word found
        for (int i = 0; i < list.size(); ++i) if (list[i] == userInput) return i;

        cout << "Неверно. Попробуйте снова!" << endl;
    }
}
```
<details><summary>Дополнительные данные</summary>

| includes | depends                                  | return | use in | links to use |
|----------|------------------------------------------|--------|--------|--------------|
| limits   | outputListToStream<br/>getUserLineString | int    |        |              |

Фактически является прототипом меню по действию. В качестве альтернативы можно использовать `getUserInput/hasDialogYesNo`

```c++
  if (getIndexOfUserInputFromList({ "yes", "no" }) == 0) {
    // Действие
  }
```
```c++
auto index = getIndexOfUserInputFromList({ "add", "edit", "about", "exit" });
// Далее - switch case по номерам
```
</details>

---
### `string getUserLineString(const string &msg)`

Пользовательский ввод. На основе `std::getline` получить всю строку до переноса. Конечные пробелы обрезаются. Пустая строка запрещается.

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

<details><summary>Дополнительные данные</summary>

Есть ещё несколько специфичных параллельных функций:

- `getUserInput` (получить int, double или один символ char в указанном диапазоне)
- `getUserLineString` (основано на std::getline и позволяет получить строку любой длины),
- `getUserNumeric` (получение числа в диапазоне)

| includes | depends          | return | use in         | links to use                                                                                                  | prev name                     |
|----------|------------------|--------|----------------|---------------------------------------------------------------------------------------------------------------|-------------------------------|
|          | getTrimmedString | string | getUserNumeric | [20_5_4](https://github.com/VladislavNovak/20_5_4/blob/45e2f0efdb54be265763b2786a89f1d01419fee3/main.cpp#L42) | getUserWord<br/>getUserString |

Пример использования:
```c++
std::string msg1 = "Введете слово";
// получить введенные пользователем слова и вычленить лишь первое
string userInput = splitStringIntoList(getUserLineString(msg1), ' ')[0];
std::string msg2 = "Перечислите слова через запятую";
// Получить введенный пользователем список в виде вектора
std::vector<std::string> userInputList = splitStringIntoList(getUserLineString(msg2), ',');
```
</details>

---
### `int getUserNumeric(vector<int> const &list = {}, vector<int> const &excludedList = {}) `

Пользовательский ввод целого числа. 

```c++
int getUserNumeric(std::vector<int> const &list = {}, std::vector<int> const &excludedList = {}) {

    bool isRange = (list.size() == 2) && (list[0] < list[1]);
    bool isList = !list.empty() && (list.size() != 2 || ((list.size() == 2) && (list[0] > list[1])));
    bool isExcluded = !excludedList.empty();

    while (true) {
        bool isTrouble = false;
        cout << "Введите цифры" << ": ";
        int userInput = getUserInput<int>();

        vector<string> troubles;

        if (isRange && (userInput < list[0] || userInput > list[1])) isTrouble = true;
        if (isList && !isIncludes(list, userInput)) isTrouble = true;
        if (isExcluded && isIncludes(excludedList, userInput)) isTrouble = true;

        if (isTrouble) {
            troubles.emplace_back("Попробуйте снова. Это должно быть целое число");
            if (isRange) troubles.emplace_back("  и в диапазоне (" + std::to_string(list[0]) + " - " + std::to_string(list[1]) + ")");
            if (isList) troubles.emplace_back("  и в списке из (" + getDelimitedString(list) + ")");
            if (isExcluded) troubles.emplace_back("  и не входить в список из (" + getDelimitedString(excludedList) + ")");

            for (auto const &trouble : troubles) cout << trouble << endl;

            continue;
        }

        return userInput;
    }
}

```

<details><summary>Дополнительные данные</summary>

| includes | depends      | return | links to use                                                                                                  |
|----------|--------------|--------|---------------------------------------------------------------------------------------------------------------|
|          | getUserInput | int    | [20_5_2](https://github.com/VladislavNovak/20_5_2/blob/9903c48eb00e52b82c5d20b3bd6b8d1ff11931e5/main.cpp#L71) |


Ввести возможно:

* Любое число - если ничего не передать в массиве.
* В диапазоне - если передать два числа (меньшее и большее) в массиве.
* В перечне - если передать массив НЕ из двух элементов или из двух, в котором первый элемент больше второго
* За исключением - если добавить перечень во второй аргумент

Пример использования:

```c++
std::cout << getUserNumeric({2, 3, 7, 6}) << std::endl; // 2||3||7||6
std::cout << getUserNumeric({2, 6}) << std::endl; // 2 - 6
std::cout << getUserNumeric({6, 2}) << std::endl; // 6 || 2
std::cout << getUserNumeric() << std::endl; // any
std::cout << getUserNumeric({1, 8}, {3,4,5}) << std::endl; // 1,2,6,7,8
```
Есть ещё несколько специфичных параллельных функций:

- `getUserInput` (получить int, double или один символ char в указанном диапазоне)
- `getUserLineString` (основано на std::getline и позволяет получить строку любой длины),
- `getUserNumeric` (получение числа в диапазоне)
- 
</details>

---
### `void outputListToStream(ostream &out, vector<vector<string>> const &list, const string &delim = ",")`

Печатает данные в указанный поток. Потоком может быть std::cout, а может быть и std::ofstream file. 
Таким образом, данные можно или вывести на экран, или распечатать в файл. Важно лишь, чтобы данные были массивом строк.

```c++
void outputListToStream(std::ostream &out, std::vector<std::string> const &list, const std::string &delim = ",") {
    bool isNumbering = false;
    for (int i = 0; i < list.size(); ++i)
        out << (isNumbering ? std::to_string(i) + ": " + list[i] : list[i]) << (i != list.size() - 1 ? delim : "");

    out << std::endl;
}
```
<details><summary>Дополнительные данные</summary>

| includes | depends | return | links to use           | prev name                                        |
|----------|---------|--------|------------------------|--------------------------------------------------|
| iostream |         |        | writeReadFileExample() | outputComplexData<br/>displayComplexDataToScreen |

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
</details>

---
### `writeListToFile(const char* path, vector<string> const &list, bool isAppMode = true, string const &delim = ",")`

Запись в файл. Печатает вектор в файл

```c++
void writeListToFile(const char* path, std::vector<std::string> const &list, bool isAppMode = true, std::string const &delim = ",") {
    std::ofstream file(path, (isAppMode ? std::ios::app : std::ios::out));
    outputListToStream(file, list, delim);
    file.close();
}
```
<details><summary>Дополнительные данные</summary>

| includes | depends            | return | links to use           | prev name              |
|----------|--------------------|--------|------------------------|------------------------|
| fstream  | outputListToStream |        | writeReadFileExample() | writeComplexDataToFile |

</details>

---
### `bool readFileToList(const char* pathName, vector<string> &list)`

Чтение файла. Записывает файл в вектор. В случае успешного прочтения возвращает true

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
<details><summary>Дополнительные данные</summary>

| includes | depends | return | links to use           | prev name        |
|----------|---------|--------|------------------------|------------------|
| fstream  |         |        | writeReadFileExample() | readFileToVector |

</details>

---
### `void displayFileToScreen(const char* pathName, string const &msg)`

Чтение файла. Записывает данные из файла в вектор и сразу печатает их на экран.

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
        // Использовать outputListToStream
    } else {
        std::cout << "Данных пока нет" << std::endl;
    }
}
```
<details><summary>Дополнительные данные</summary>

| includes | depends                               | return | links to use           |
|----------|---------------------------------------|--------|------------------------|
|          | readFileToList<br/>outputListToStream |        | writeReadFileExample() |

</details>

---
### `bool loadStringFromBinaryFile(const char* fileName, string &str)`

Чтение из двоичного (бинарного) файла в строку. Возвращает true, если чтение прошло успешно

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
<details><summary>Дополнительные данные</summary>

| includes | depends      | return | links to use                                                                                                   | past name          |
|----------|--------------|--------|----------------------------------------------------------------------------------------------------------------|--------------------|
| fstream  | hasFileExist | bool   | [20_5_4](https://github.com/VladislavNovak/20_5_4/blob/45e2f0efdb54be265763b2786a89f1d01419fee3/main.cpp#L112) | readFromBinaryFile |


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
</details>

---
### `void saveStringToBinaryFile(const char* path, const string &str, bool isAppMode = false, char delim = ';')`

Запись в двоичный (бинарный) файл из строки

```c++
void saveStringToBinaryFile(const char* path,
                            std::string const &str,
                            bool isAppMode = false,
                            char delim = ';') {    
    std::ofstream file(path, std::ios::binary | (isAppMode ? std::ios::app : std::ios::out));

    if (hasFileExist(path) && isAppMode)
        file.write((char*) &delim, sizeof(delim));

    file.write(str.c_str(), str.length());
    
    file.close();
}
```
<details><summary>Дополнительные данные</summary>

| includes | depends      | return | links to use                                                                                                            | past name         |
|----------|--------------|--------|-------------------------------------------------------------------------------------------------------------------------|-------------------|
| fstream  | hasFileExist |        | [20_5_4](https://github.com/VladislavNovak/20_5_4/blob/45e2f0efdb54be265763b2786a89f1d01419fee3/main.cpp#L138C1-L138C1) | writeToBinaryFile |

</details>

---
### `bool loadIntoArrFromBinaryFile(const char* path, vector<T> &arr)`

Читает из бинарного (двоичного) файла данные для массива структур.

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
<details><summary>Дополнительные данные</summary>

| includes | depends                      | return | links to use |
|----------|------------------------------|--------|--------------|
| fstream  | readIntoPersonFromBinaryFile | bool   |              |

В `readIntoPersonFromBinaryFile()` необходимо подставить актуальную структуру с внесенными изменениями
</details>

---
### `bool readIntoPersonFromBinaryFile(ifstream &fileReader, character &person)`

Читает из бинарного (двоичного) файла в структуру.

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
<details><summary>Дополнительные данные</summary>

Функция выступает лишь как пример, шаблон.

| includes | depends                | return | links to use |
|----------|------------------------|--------|--------------|
| fstream  | savePersonToBinaryFile | bool   |              |

Структура данных должна быть заранее известна. 
Вероятнее всего ранее она должна была быть записана в файл методом `savePersonToBinaryFile()` 
В конкретном случае структура должна быть такой:

```c++
struct character { string name; int health; };
```
</details>

---
### `void savePersonToBinaryFile(const char* path, character const &person)`

Записывает в бинарный (двоичный) файл структуру.

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
<details><summary>Дополнительные данные</summary>

| includes | depends                   | return | links to use |
|----------|---------------------------|--------|--------------|
| fstream  | loadIntoArrFromBinaryFile |        |              |

Структура данных должна быть заранее известна.
Вероятнее всего позднее она должна быть прочитана из файла методом `loadIntoArrFromBinaryFile()`
В конкретном случае структура должна быть такой:

```c++
struct character { string name; int salary; };
```
</details>






