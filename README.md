# <font color="Tomato">Pragmata</font>

<!-- TOC -->
* [<font color="Tomato">Pragmata</font>](#font-colortomatopragmatafont)
    * [`bool isIncludes(const T &range, const N &item)`](#bool-isincludesconst-t-range-const-n-item)
    * [`bool hasSubstr(const char *origin, const char *substr)`](#bool-hassubstrconst-char-origin-const-char-substr)
    * [`int findKeyIndexInVector(const T &key, vector<T> const &list)`](#int-findkeyindexinvectorconst-t-key-vectort-const-list)
    * [`bool removeKeyFromVector(const T &key, vector<T> &list)`](#bool-removekeyfromvectorconst-t-key-vectort-list)
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
    * [`int getAvailableIndexInRange(vector<int> const &range)`](#int-getavailableindexinrangevectorint-const-range)
    * [`vector<N> removeIntersections(vector<N> const &list, vector<N> const &intersection)`](#vectorn-removeintersectionsvectorn-const-list-vectorn-const-intersection)
    * [`vector<T> getShuffleVector(vector<T> const &data)`](#vectort-getshufflevectorvectort-const-data)
    * [`vector<T> getCopyVector(vector<T> const &data, int amount = 0, int firstPos = 0)`](#vectort-getcopyvectorvectort-const-data-int-amount--0-int-firstpos--0)
    * [`vector<T> getShuffledCopyOfVectorRange(vector<T> const &data, int amount = 0, int firstPos = 0)`](#vectort-getshuffledcopyofvectorrangevectort-const-data-int-amount--0-int-firstpos--0)
    * [`string getTrimmedString(string str, string const &whiteSpaces = " \r\n\t\v\f")`](#string-gettrimmedstringstring-str-string-const-whitespaces---rntvf)
    * [`vector<string> splitStringIntoList(string const &str, char const delim = ',')`](#vectorstring-splitstringintoliststring-const-str-char-const-delim--)
    * [`T putInput(string const &restrictions = "")`](#t-putinputstring-const-restrictions--)
    * [`int selectFromList(vector<string> const &list)`](#int-selectfromlistvectorstring-const-list)
    * [`int selectMenuItem(vector<string> const &list)`](#int-selectmenuitemvectorstring-const-list)
    * [`string putLineString(const string &msg)`](#string-putlinestringconst-string-msg)
    * [`int putNumeric(vector<int> const &list = {}, vector<int> const &excludedList = {}) `](#int-putnumericvectorint-const-list---vectorint-const-excludedlist---)
    * [`void outputListToStream(ostream &out, vector<vector<string>> const &list, const string &delim = ",")`](#void-outputlisttostreamostream-out-vectorvectorstring-const-list-const-string-delim--)
    * [`writeListToFile(const char* path, vector<string> const &list, bool isAppMode = true, string const &delim = ",")`](#writelisttofileconst-char-path-vectorstring-const-list-bool-isappmode--true-string-const-delim--)
    * [`bool readFileToList(const char* pathName, vector<string> &list)`](#bool-readfiletolistconst-char-pathname-vectorstring-list)
    * [`void displayFileToScreen(const char* pathName, string const &msg)`](#void-displayfiletoscreenconst-char-pathname-string-const-msg)
    * [`bool loadStringFromBinaryFile(const char* fileName, string &str)`](#bool-loadstringfrombinaryfileconst-char-filename-string-str)
    * [`void saveStringToBinaryFile(const char* path, const string &str, bool isAppMode = false, char delim = ';')`](#void-savestringtobinaryfileconst-char-path-const-string-str-bool-isappmode--false-char-delim--)
    * [`bool loadIntoArrFromBinaryFile(const char* path, vector<T> &arr)`](#bool-loadintoarrfrombinaryfileconst-char-path-vectort-arr)
    * [`bool readIntoPersonFromBinaryFile(ifstream &fileReader, character &person)`](#bool-readintopersonfrombinaryfileifstream-filereader-character-person)
    * [`void savePersonToBinaryFile(const char* path, character const &person)`](#void-savepersontobinaryfileconst-char-path-character-const-person)
    * [`bool addEntryToMap(const std::pair<F, S> &entry, std::map<F, S> &target)`](#bool-addentrytomapconst-stdpairf-s-entry-stdmapf-s-target)
    * [`bool changeEntryInMap(const std::pair<F, S> &entry, std::map<F, S> &target)`](#bool-changeentryinmapconst-stdpairf-s-entry-stdmapf-s-target)
    * [`bool removeEntryFromMap(const F &key, std::map<F, S> &target)`](#bool-removeentryfrommapconst-f-key-stdmapf-s-target)
    * [`bool retrieveMapValueByKey(S &target, const F &key, const std::map<F, S> &source)`](#bool-retrievemapvaluebykeys-target-const-f-key-const-stdmapf-s-source)
    * [`void removeEmptyEntriesFromMap(std::map<char, int> &out)`](#void-removeemptyentriesfrommapstdmapchar-int-out)
    * [`time_t putTime(char timeType, time_t basisTime)`](#timet-puttimechar-timetype-timet-basistime)
    * [`bool hasLeapYear(time_t targetDate)`](#bool-hasleapyeartimet-targetdate)
    * [`int extractDayOfYearFromDate(time_t date)`](#int-extractdayofyearfromdatetimet-date)
    * [`std::tm convertStringToTime(const string &date)`](#stdtm-convertstringtotimeconst-string-date)
    * [`bool compareToSortByDay (const time_t baseDate, const time_t comparedDate)`](#bool-comparetosortbyday-const-timet-basedate-const-timet-compareddate)
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

| includes  | depends | return | use in   | links to use                                                                                                  |
|-----------|---------|--------|----------|---------------------------------------------------------------------------------------------------------------|
| algorithm |         | bool   | putInput | [16_6_4](https://github.com/VladislavNovak/16_6_4/blob/5e27ffd9e4b65dbeb05fa8feb3af24d4e61339e0/main.cpp#L12) |

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
### `int findKeyIndexInVector(const T &key, vector<T> const &list)`

Поиск key в vector. В случае успеха, возвращает позицию. Если ничего не найдено, возвращается -1

```c++
template<typename T>
int findKeyIndexInVector(const T &key, std::vector<T> const &list) {
    const int NOT_FOUND = -1;
    auto it = std::find_if(list.cbegin(), list.cend(), [key](const T &i){ return i == key; });

    if (it != list.cend()) {
        return (int)std::distance(list.cbegin(), it);
    }

    return NOT_FOUND;
}
```
<details><summary>Дополнительные данные</summary>

| includes  | depends | return | use in | links to use |
|-----------|---------|--------|--------|--------------|
| algorithm |         | int    |        |              |

Пример использования:

```c++
int result = findKeyIndexInVector<string>("third", { "first", "second", "third" });

if (result != 1) std::cout << result << std::endl;
```
</details>

--- 
### `bool removeKeyFromVector(const T &key, vector<T> &list)`

Позволяет удалить позицию из вектора по переданному ключу. Возвращает true, если удаление прошло успешно

```c++
template<typename T>
bool removeKeyFromVector(const T &key, vector<T> &list) {
    auto foundIndex = findKeyIndexInVector(key, list);
    if (foundIndex == -1) return false;

    list.erase(list.begin() + foundIndex);

    return true;
}
```

<details><summary>Дополнительная информация</summary>

| includes | depends              | return | use in | links to use |
|----------|----------------------|--------|--------|--------------|
|          | findKeyIndexInVector | bool   |        |              |

Пример использования:

```c++
void removeCommand(string const &key, vector<string> &list) {
    removeKeyFromVector<string>(key, list);
}
```
```c++
vector<string> commands = { "add", "exit", "edit" };
vector<int> range = { 5, 4, 2};

removeKeyFromVector<string>("edit", commands); // "exit", "edit"
// теперь можно и так:
removeCommand("exit", commands); // "edit"

removeKeyFromVector(2, range); // 5, 4
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

| includes | depends | return | use in   | links to use                                                                                                  | prev name    |
|----------|---------|--------|----------|---------------------------------------------------------------------------------------------------------------|--------------|
|          |         | string | putInput | [19_5_2](https://github.com/VladislavNovak/19_5_2/blob/ea64d23ae5fc13594a1d51dad3aed8790f77872a/main.cpp#L19) | getJoinRange |

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
### `int getAvailableIndexInRange(vector<int> const &range)`

Получить первый пропущенный индекс в массиве. Либо новый (т.е. последний + 1)

```c++
int getAvailableIndexInRange(std::vector<int> const &range) {
    std::vector<int> tempRange = range;
    std::sort(tempRange.begin(), tempRange.end());
    
    int current = 0;
    while(current < tempRange.size()) {
        if (current != tempRange[current]) break;
        ++current;
    }
    
    return current;
}
```

<details><summary>Дополнительные данные</summary>

Хорошо подходит для поиска свободного идентификатора

```c++
getAvailableIndexInRange({ 0, 1, 3, 4 }) // 2
getAvailableIndexInRange({ 0, 1, 2, 3 }) // 4
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
    bool isEmptyRemove = true;
            
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

| includes | depends          | return            | use in     | links to use                                                                                                  | prev name               |
|----------|------------------|-------------------|------------|---------------------------------------------------------------------------------------------------------------|-------------------------|
| sstream  | getTrimmedString | vector of strings | putNumeric | [20_5_4](https://github.com/VladislavNovak/20_5_4/blob/45e2f0efdb54be265763b2786a89f1d01419fee3/main.cpp#L25) | getSplitStringOnRecords |

Если изменить isEmptyRemove на false, то можно вернуть пустой элемент вектора

Пример использования:

```c++
// получить первое слово
std::string getUserWord(std::string const &msg) {
    return splitStringIntoList(putLineString((msg)), ' ')[0];
}

```
</details>

---
### `T putInput(string const &restrictions = "")`

Пользовательский ввод. Позволяет работать в двух режимах: без переданной строки restrictions и со строкой restrictions. 

Если без, можно получать, соответственно, типы int, double, float.

Во втором случае в typename передается тип char, а в restrictions - строка из любого списка символов, 
которые будут служить ограничением: т.е. получить возможно будет лишь один символ из restrictions.

```c++
template<typename T> T putInput(std::string const &restrictions = "") {
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

- `putLineString` (основано на std::getline и позволяет получить строку любой длины),
- `putNumeric` (получение числа в диапазоне)
- `selectFromList` (получить одну из опций)

| includes | depends                           | return | use in | links to use                                                                                                  | prev name                    |
|----------|-----------------------------------|--------|--------|---------------------------------------------------------------------------------------------------------------|------------------------------|
| limits   | isIncludes<br/>getDelimitedString | T      |        | [19_5_2](https://github.com/VladislavNovak/19_5_2/blob/ea64d23ae5fc13594a1d51dad3aed8790f77872a/main.cpp#L29) | getUserChar<br/>getUserInput |


Примеры использования:

```c++
putInput<char>("1456abc"); // получаем лишь символ из строки "1456abc"
// Для следующего примера есть отдельная функция getUserChoiceFromRange
int number = (putInput<char>("12678") - '0') // получить число в заданном диапазоне (но не более одной единицы)
putInput<char>(); // отработает std::cin и получим первый введенный символ char
putInput<double>(); // получим любое введенное число с точкой-разделителем (вплоть до первой НЕ цифры)
putInput<int>(); // получим любое введенное число (вплоть до первой НЕ цифры)
```
```c++
// Получить цифру в обозначенном диапазоне
int getUserChoiceFromRange(const std::string &msg, std::string const &range) {
    std::cout << msg << ": ";
    return (putInput<char>(range) - '0');
}
```
Возможная альтернатива для `selectFromList`:

```c++
// Возвращает true при введении Y/y или false при N/n. Другие символы запрещены
bool hasDialogYesNo(const std::string &msg) {
    printf("%s. Press 'Y/y' to agree or 'N/n' to deny: ", msg.c_str());
    return isIncludes("Yy", getUserChar<char>("YyNn"));
}
```
</details>

---
### `int selectFromList(vector<string> const &list)`

Требует ввод от пользователя одного из элементов переданного списка. Возвращает индекс выбранного элемента списка

```c++
int selectFromList(std::vector<std::string> const &list) {
    bool isList = list.size() > 1;

    while (true) {
        cout << (isList ? "Выберите одну из опций: " : "Введите команду : ");
        outputListToStream(std::cout, list, (isList ? "|" : ""));

        auto userInput = putLineString("Наберите и нажмите enter");
        // return index from list, if word found
        for (int i = 0; i < list.size(); ++i) if (list[i] == userInput) return i;

        cout << "Неверно. Попробуйте снова!" << endl;
    }
}
```
<details><summary>Дополнительные данные</summary>

| includes | depends                              | return | use in | links to use |
|----------|--------------------------------------|--------|--------|--------------|
| limits   | outputListToStream<br/>putLineString | int    |        |              |

Фактически является прототипом меню по действию. В качестве альтернативы можно использовать 

`getMenuItem` - упрощённый аналог для тестирования
`putInput/hasDialogYesNo`

```c++
  if (selectFromList({ "yes", "no" }) == 0) {
    // Действие
  }
```
```c++
auto index = selectFromList({ "add", "edit", "about", "exit" });
// Далее - switch case по номерам
```
</details>

---
### `int selectMenuItem(vector<string> const &list)`

Требует ввод от пользователя одного из элементов переданного списка. Возвращает индекс выбранного элемента списка.

```c++
int selectMenuItem(std::vector<std::string> const &list) {
    while (true) {
        cout << (list.size() > 1 ? "Выберите одну из опций: " : "Введите команду : ");
        for (const auto &item : list) cout << item << (item != list[list.size() - 1] ? "|" : "\n");

        while (true) {
            std::string userInput;
            std::cout << "Наберите и нажмите enter: ";
            std::getline(std::cin, userInput);

            for (int i = 0; i < list.size(); ++i)
                if (list[i] == userInput) return i;

            cout << "Неверно. Попробуйте снова!" << endl;
        }
    }
}
```
<details><summary>Дополнительная информация</summary>

Упрощенный вариант (по коду) функции `selectFromList`. Не имеет зависимостей. Удобно использовать для тестирования

</details>

---
### `string putLineString(const string &msg)`

Пользовательский ввод. На основе `std::getline` получить всю строку до переноса. Конечные пробелы обрезаются. Пустая строка запрещается.

```c++
std::string putLineString(const std::string &msg) {
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

- `putInput` (получить int, double или один символ char в указанном диапазоне)
- `putNumeric` (получение числа в диапазоне)

| includes | depends          | return | use in     | links to use                                                                                                  | prev name                                           |
|----------|------------------|--------|------------|---------------------------------------------------------------------------------------------------------------|-----------------------------------------------------|
|          | getTrimmedString | string | putNumeric | [20_5_4](https://github.com/VladislavNovak/20_5_4/blob/45e2f0efdb54be265763b2786a89f1d01419fee3/main.cpp#L42) | getUserWord<br/>getUserString<br/>getUserLineString |

Пример использования:
```c++
std::string msg1 = "Введете слово";
// получить введенные пользователем слова и вычленить лишь первое
string userInput = splitStringIntoList(putLineString(msg1), ' ')[0];
std::string msg2 = "Перечислите слова через запятую";
// Получить введенный пользователем список в виде вектора
std::vector<std::string> userInputList = splitStringIntoList(putLineString(msg2), ',');
```
</details>

---
### `int putNumeric(vector<int> const &list = {}, vector<int> const &excludedList = {}) `

Пользовательский ввод целого числа. 

```c++
int putNumeric(std::vector<int> const &list = {}, std::vector<int> const &excludedList = {}) {

    bool isRange = (list.size() == 2) && (list[0] < list[1]);
    bool isList = !list.empty() && (list.size() != 2 || ((list.size() == 2) && (list[0] > list[1])));
    bool isExcluded = !excludedList.empty();

    while (true) {
        bool isTrouble = false;
        cout << "Введите цифры" << ": ";
        int userInput = putInput<int>();

        vector<std::string> troubles;

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

| includes | depends  | return | links to use                                                                                                  | prevname       |
|----------|----------|--------|---------------------------------------------------------------------------------------------------------------|----------------|
|          | putInput | int    | [20_5_2](https://github.com/VladislavNovak/20_5_2/blob/9903c48eb00e52b82c5d20b3bd6b8d1ff11931e5/main.cpp#L71) | getUserNumeric |


Ввести возможно:

* Любое число - если ничего не передать в массиве.
* В диапазоне - если передать два числа (меньшее и большее) в массиве.
* В перечне - если передать массив НЕ из двух элементов или из двух, в котором первый элемент больше второго
* За исключением - если добавить перечень во второй аргумент

Пример использования:

```c++
std::cout << putNumeric({2, 3, 7, 6}) << std::endl; // 2||3||7||6
std::cout << putNumeric({2, 6}) << std::endl; // 2 - 6
std::cout << putNumeric({6, 2}) << std::endl; // 6 || 2
std::cout << putNumeric() << std::endl; // any
std::cout << putNumeric({1, 8}, {3,4,5}) << std::endl; // 1,2,6,7,8
```
Есть ещё несколько специфичных параллельных функций:

- `putInput` (получить int, double или один символ char в указанном диапазоне)
- `putLineString` (основано на std::getline и позволяет получить строку любой длины),

</details>

---
### `void outputListToStream(ostream &out, vector<vector<string>> const &list, const string &delim = ",")`

Печатает данные в указанный поток. Потоком может быть std::cout, а может быть и std::ofstream file. 
Таким образом, данные можно или вывести на экран, или распечатать в файл.

```c++
template<typename T>
void outputListToStream(std::ostream &out, std::vector<T> const &list, const std::string &delim = ",") {
    for (const auto &item : list) out << item << (item != list[list.size() - 1] ? delim : "\n");
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

---
### `bool addEntryToMap(const std::pair<F, S> &entry, std::map<F, S> &target)`

Добавить одну запись в std::map. Возвращает false, если записи по указанному ключу не обнаружено

```c++
template<typename F, typename S>
bool addEntryToMap(const std::pair<F, S> &entry, std::map<F, S> &target) {
    if (target.count(entry.first) == 1) return false;

    target.insert(entry);

    return true;
}
```

---
### `bool changeEntryInMap(const std::pair<F, S> &entry, std::map<F, S> &target)`

Изменить одну запись в std::map. Возвращает false, если записи по указанному ключу не обнаружено

```c++
template<typename F, typename S>
bool changeEntryInMap(const std::pair<F, S> &entry, std::map<F, S> &target) {
    if (target.count(entry.first) == 0) return false;

    auto it = target.find(entry.first);
    it->second = entry.second;

    return true;
}
```

---
### `bool removeEntryFromMap(const F &key, std::map<F, S> &target)`

Удалить одну запись в std::map. Возвращает false, если записи по указанному ключу не обнаружено

```c++
template<typename F, typename S>
bool removeEntryFromMap(const F &key, std::map<F, S> &target) {
    const auto it = target.find(key);

    if (it == target.end()) return false;

    target.erase(it);

    return true;
}
```

---
### `bool retrieveMapValueByKey(S &target, const F &key, const std::map<F, S> &source)`

Вернуть одну запись в std::map. Возвращает false, если записи по указанному ключу не обнаружено

```c++
template<typename F, typename S>
bool retrieveMapValueByKey(S &target, const F &key, const std::map<F, S> &source) {
    const auto it = source.find(key);

    if (it == source.end()) return false;

    target = it->second;

    return true;
}
```
---
### `void removeEmptyEntriesFromMap(std::map<char, int> &out)`

Позволяет удалить из std::map записи, значения которых равны нулю

```c++
void removeEmptyEntriesFromMap(std::map<char, int> &out) {
    for (auto it = out.begin(), next_it = it; it != out.end(); it = next_it) {
        ++next_it;
        if (it->second == 0) out.erase(it);
    }
}
```
<details><summary>Дополнительно</summary>

Необходимо в будущем добавить template, сделав метод более универсальным

</details>

---
### `time_t putTime(char timeType, time_t basisTime)`

Пользовательский ввод времени или даты. Тип времени или даты задается в timeType.

```c++
time_t putTime(char timeType, time_t basisTime) {
    std::string fmtDate = { '%', timeType };

    std::tm* localTime = localtime(&basisTime);
    time_t result;

    while(true) {
        std::cin >> std::get_time(localTime, fmtDate.c_str());

        if (std::cin.fail()) {
            std::cout << "Неверный формат. Попробуйте снова: ";
            reloadStream();
            continue;
        }

        result = mktime(localTime);
        if (result < 0) {
            std::cout << "Дата должна быть не ранее January 1, 1970. Попробуйте снова: ";
            reloadStream();
            continue;
        }

        reloadStream();
        return mktime(localTime);
    }
}
```
<details><summary>Дополнительная информация</summary>

Необходимо включить заголовок:

```c++
#include <ctime>
```
Также необходимо использовать вспомогательную функцию для очищения буфера после ввода:

```c++
void reloadStream() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
```
Пример использования. Позволяет последовательно ввести год, месяц и день:

```c++
time_t putTimeByFormat(const std::string &format, char delim = '/') {
    vector<std::string> parts;
    std::stringstream ss(format);
    std::string temp;

    while(std::getline(ss, temp, delim)) parts.emplace_back(temp);

    time_t date = time(nullptr);

    for (const auto &dateType : parts) {
        cout << "Введите " << dateType << ": ";
        date = putTime(dateType[0], date);
    }

    return date;
}

time_t fullBirthDate = putTimeByFormat("YYYY/mm/dd");
```
</details>

---
### `bool hasLeapYear(time_t targetDate)`

Определяет, является ли год високосным

```c++
bool hasLeapYear(time_t targetDate) {
    std::tm* local = localtime(&targetDate);
    int year = local->tm_year + 1900;
    return ((year % 400 == 0 || year % 100 != 0) && year % 4 == 0);
}
```

<details><summary>Дополнительная информация</summary>

Необходимо включить заголовок:

```c++
#include <ctime>
```
</details>

---
### `int extractDayOfYearFromDate(time_t date)`

Позволяет извлечь день из даты

```c++
int extractDayOfYearFromDate(time_t date) {
    std::tm local = *localtime(&date);
    time_t current = time(nullptr);
    int corrective{0};

    if (hasLeapYear(date) && !hasLeapYear(current)) corrective -= 1;
    else if (!hasLeapYear(date) && hasLeapYear(current)) corrective += 1;

    return (local.tm_yday + corrective);
}
```
<details><summary>Дополнительная информация</summary>

Необходимо включить заголовок:

```c++
#include <ctime>
```
Зависит от функции `hasLeapYear`. 

Для большей точности нужно для високосного года добавить проверку: расположена дата до или после 1 марта.

Функция отлично подходит для создания календаря, генерируя ключи в std::map.

</details>

---
### `std::tm convertStringToTime(const string &date)`

Конвертирует строку в структуру std::tm. 

```c++
std::tm convertStringToTime(const string &date) {
    time_t now = time(nullptr);
    std::tm toParse = *localtime(&now);
    std::istringstream ss(date);
    ss >> std::get_time(&toParse, "%a %b %d %H:%M:%S %Y");
    return toParse;
}
```

<details><summary>Дополнительная информация</summary>

Необходимо включить:

```c++
#include <ctime>
#include <iomanip>
```
Важно, чтобы строка, которая должна быть конвертирована, ранее была создана из времени.

Пример использования:

```c++
// putTimeByFormat здесь лишь для примера. Это может быть любое время в формате time_t
time_t fullBirthDate = putTimeByFormat(format);
string fullBirthDateAsString = std::ctime(&fullBirthDate);
std::tm parse = convertStringToTime(fullBirthDateAsString);
printf("%i/%i/%i\n", parse.tm_mday, (parse.tm_mon + 1), (parse.tm_year + 1900));
```

</details>

---
### `bool compareToSortByDay (const time_t baseDate, const time_t comparedDate)`

Выступает в качестве компаратора для сортировки дат

```c++
bool compareToSortByDay (const time_t baseDate, const time_t comparedDate) {
    std::tm base = *localtime(&baseDate);
    std::tm compared = *localtime(&comparedDate);
    cout << "День в году: " << base.tm_yday << endl;

    return (compared.tm_mon == base.tm_mon) ? compared.tm_mday >= base.tm_mday : compared.tm_mon >= base.tm_mon;
}
```

<details><summary>Дополнительные данные</summary>

| includes            | depends | return | links to use |
|---------------------|---------|--------|--------------|
| ctime<br/>algorithm |         | bool   |              |

Используется в сортировке массива чисел:

```c++
std::sort(std::begin(listOfBirthdays), std::end(listOfBirthdays), compareToSortByDay)
```

</details>

