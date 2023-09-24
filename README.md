<style>
details {
  margin-left: 32px;
  outline: 1px dashed rgba(255,255,255,0.8);
  outline-offset: 6px;
}
summary > span {
  color:tomato; 
  font-size: 12px;
}

details + details {
  margin-top: 16px;
}
</style>

<!-- TOC -->
* [Main](#main)
  * [Has](#has)
    * [`bool isIncludes`](#bool-isincludes)
    * [`bool hasSubstr`](#bool-hassubstr)
    * [`bool isNumeric`](#bool-isnumeric)
    * [`bool isContainsOnlyLetters`](#bool-iscontainsonlyletters)
  * [General](#general)
    * [`int findKeyIndexInVector`](#int-findkeyindexinvector)
    * [`bool removeKeyFromVector`](#bool-removekeyfromvector)
    * [`string getDelimitedString`](#string-getdelimitedstring)
    * [`void removeSymbolFromString`](#void-removesymbolfromstring)
    * [`int getNumberOfDigit`](#int-getnumberofdigit)
    * [`int getRoundedIntWithStep`](#int-getroundedintwithstep)
    * [`void flipArray`](#void-fliparray)
    * [`int getRandomIntInRange`](#int-getrandomintinrange)
    * [`int getAvailableIndexInRange`](#int-getavailableindexinrange)
    * [`vector<N> removeIntersections`](#vectorn-removeintersections)
    * [`vector<T> getShuffleVector`](#vectort-getshufflevector)
    * [`vector<T> getCopyVector`](#vectort-getcopyvector)
    * [`vector<T> getShuffledCopyOfVectorRange`](#vectort-getshuffledcopyofvectorrange)
    * [`string getTrimmedString`](#string-gettrimmedstring)
    * [`vector<string> splitStringIntoList`](#vectorstring-splitstringintolist)
  * [Convert](#convert)
    * [`bool convertDoubleFromString`](#bool-convertdoublefromstring)
* [User input](#user-input)
    * [`T putInput`](#t-putinput)
    * [`string putNumberAsString`](#string-putnumberasstring)
    * [`int selectMenuItem`](#int-selectmenuitem)
    * [`string putLineString`](#string-putlinestring)
    * [`int putNumeric`](#int-putnumeric)
* [Files and streams](#files-and-streams)
    * [`void outputListToStream`](#void-outputlisttostream)
    * [`bool hasFileExist`](#bool-hasfileexist)
    * [`void writeListToFile`](#void-writelisttofile)
    * [`bool readFileToList`](#bool-readfiletolist)
    * [`void displayFileToScreen`](#void-displayfiletoscreen)
    * [`bool loadStringFromBinaryFile`](#bool-loadstringfrombinaryfile)
    * [`void saveStringToBinaryFile`](#void-savestringtobinaryfile)
    * [`bool loadIntoArrFromBinaryFile`](#bool-loadintoarrfrombinaryfile)
    * [`bool readIntoPersonFromBinaryFile`](#bool-readintopersonfrombinaryfile)
    * [`void savePersonToBinaryFile`](#void-savepersontobinaryfile)
* [Map](#map)
    * [`bool addEntryToMap`](#bool-addentrytomap)
    * [`bool changeEntryInMap`](#bool-changeentryinmap)
    * [`bool removeEntryFromMap`](#bool-removeentryfrommap)
    * [`bool retrieveMapValueByKey`](#bool-retrievemapvaluebykey)
    * [`void removeEmptyEntriesFromMap`](#void-removeemptyentriesfrommap)
* [Time and Date](#time-and-date)
    * [`bool isStringADate`](#bool-isstringadate)
    * [`getRandomDate`](#getrandomdate)
    * [`time_t putTime`](#timet-puttime)
    * [`bool hasLeapYear`](#bool-hasleapyear)
    * [`int extractDayOfYearFromDate`](#int-extractdayofyearfromdate)
    * [`std::tm convertStringToTime`](#stdtm-convertstringtotime)
    * [`bool compareToSortByDay`](#bool-comparetosortbyday)
<!-- TOC -->

# Main

## Has

---
### `bool isIncludes`

Проверяет, встречается ли item хоть раз встречается в диапазоне.

```c++
template<typename T, typename N>
bool isIncludes(const T &range, const N &item) {
    return std::any_of(range.begin(),
                       range.end(),
                       [&item](const N &c) { return c == item; });
}
```
<details><summary><span>INFO</span></summary>

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
### `bool hasSubstr`

Проверяет строку на вхождение подстроки

```c++
bool hasSubstr(const char *origin, const char *substr) {
    char *found = strstr(origin, substr);

    return found != nullptr;
}
```

<details><summary><span>INFO</span></summary>

| includes | depends | return | use in | links to use                                                                                                        |
|----------|---------|--------|--------|---------------------------------------------------------------------------------------------------------------------|
| cstring  |         | bool   |        | [17_4_3](https://github.com/VladislavNovak/17_4_3/blob/cb3945debec06f908c99caea271d56654937b5ef/main.cpp#L4C1-L4C1) |

</details>

---
### `bool isNumeric`

Проверяет, является ли строка целым числом

```c++
bool isNumeric(const std::string &str) {
    auto it = std::find_if(str.begin(), str.end(), [](const char &c) { return !std::isdigit(c); });

    return (!str.empty() && it == str.end());
}
```

<details><summary><span>INFO</span></summary>

| includes  | depends | return | links to use                                                                                                   |
|-----------|---------|--------|----------------------------------------------------------------------------------------------------------------|
| algorithm |         | bool   | [20_5_1](https://github.com/VladislavNovak/20_5_1/blob/ffa6db6840c82b32353f1714d6b7aaca3a6bcad2/main.cpp#L109) |

</details>

---
### `bool isContainsOnlyLetters`

Проверяет, содержит ли строка лишь буквы

```c++
bool isContainsOnlyLetters(const std::string &str) {
    auto it = std::find_if(str.begin(), str.end(), [](const char &c) { return !std::isalpha(c); });

    return it == str.end();
}
```
<details><summary><span>INFO</span></summary>

| includes  | depends | return | links to use                                                                                                  |
|-----------|---------|--------|---------------------------------------------------------------------------------------------------------------|
| algorithm |         | bool   | [21_5_1](https://github.com/VladislavNovak/21_5_1/blob/317e26448bf863dc4ce89204c500e0ae82b718d4/main.cpp#L28) |

</details>

## General

---
### `int findKeyIndexInVector`

Поиск key в vector. В случае успеха, возвращает позицию. Если ничего не найдено, возвращается -1

```c++
template<typename T>
int findKeyIndexInVector(const T &key, const std::vector<T> &list) {
    const int NOT_FOUND = -1;
    auto it = std::find_if(list.cbegin(), list.cend(), [key](const T &i){ return i == key; });

    if (it != list.cend()) {
        return (int)std::distance(list.cbegin(), it);
    }

    return NOT_FOUND;
}
```
<details><summary><span>INFO</span></summary>

| includes  | depends | return | use in | links to use |
|-----------|---------|--------|--------|--------------|
| algorithm |         | int    |        |              |

<details><summary>Пример использования:</summary>

```c++
int result = findKeyIndexInVector<string>("third", { "first", "second", "third" });

if (result != 1) std::cout << result << std::endl;
```
</details>
<details><summary>Реализация поиска в массиве векторов:</summary>

```c++
int findKeyInVectors(const string &key, const std::vector<std::vector<string>> &list) {
    for (auto it = list.begin(); it != list.end(); ++it) {
        int result = findKeyIndexInVector(key, *it);
        if (result >= 0) {
            return (int) std::distance(list.begin(), it);
        }
    }

    return -1;
}
```
Тогда:

```c++
vector<vector<string>> phones = {
        { "234", "698" },
        { "298" },
        { "864", "236", "555" },
        { "111", "222" },
};
std::cout << findKeyInVectors(key, phones) << std::endl;
```
</details>
</details>

--- 
### `bool removeKeyFromVector`

Позволяет удалить позицию из вектора по переданному ключу. Возвращает true, если удаление прошло успешно

```c++
template<typename T>
bool removeKeyFromVector(const T &key, std::vector<T> &list) {
    auto foundIndex = findKeyIndexInVector(key, list);
    if (foundIndex == -1) return false;

    list.erase(list.begin() + foundIndex);

    return true;
}
```

<details><summary><span>INFO</span></summary>

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
### `string getDelimitedString`

Возвращает новую строку со знаками, разделенными аргументом delim 

```c++
template<typename T>
std::string getDelimitedString(const T &list, const char delim = ',') {
    std::string delimitedString;
    for (int i = 0; i < list.size(); ++i) {
        delimitedString += std::to_string(list[i]);
        if (i != list.size() - 1) delimitedString += delim;
    }

    return delimitedString;
}
```
<details><summary><span>INFO</span></summary>

| includes | return | use in   | prev name    |
|----------|--------|----------|--------------|
|          | string | putInput | getJoinRange |

</details>

Примеры использования:

```c++
string somethingString = "string";
vector<int> someThingRange = {2,4,5};

getDelimitedString(somethingString); // "s,t,r,i,n,g"
getDelimitedString(someThingRange); // "2,4,5"
```

---
### `void removeSymbolFromString`

Удалить из переданной строки все упоминания указанного символа. 
Дополнительно в leave можно указать количество символов, которое не нужно удалять.

```c++
void removeSymbolFromString(string &readjust, const char symbol, int leave = 0) {
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

<details><summary><span>INFO</span></summary>

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
### `int getNumberOfDigit`

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
<details><summary><span>INFO</span></summary>

| includes | depends | return | links to use                                                                                                  | prev name  |
|----------|---------|--------|---------------------------------------------------------------------------------------------------------------|------------|
|          |         | int    | [16_6_2](https://github.com/VladislavNovak/16_6_2/blob/44332ad078311bd91ffc5f6114939ae80ba5916a/main.cpp#L24) | digitCount |

</details>

---
### `int getRoundedIntWithStep`

Округляет целое до заданных десятков

```c++
int getRoundedIntWithStep(int val, int step = 10) {
    return (val + step / 2) / step * step;
}
```
<details><summary><span>INFO</span></summary>

| includes | depends | return | links to use                                                                                                  |
|----------|---------|--------|---------------------------------------------------------------------------------------------------------------|
|          |         | int    | [20_5_4](https://github.com/VladislavNovak/20_5_4/blob/421aae690b897f39871b48b8336fb7076b8ec704/main.cpp#L91) |

</details>

---
### `void flipArray`

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
<details><summary><span>INFO</span></summary>

| includes | depends | return | links to use                                                                                                          |
|----------|---------|--------|-----------------------------------------------------------------------------------------------------------------------|
|          |         |        | [17_4_2](https://github.com/VladislavNovak/17_4_2/blob/cf6327d3eceeab66a27265e0c85dfaea32b4d85d/main.cpp#L16C1-L16C1) |

</details>

---
### `int getRandomIntInRange`

Получить случайное целое в диапазоне (с учётом верхней границы). 

```c++
int getRandomIntInRange(int from, int to) {
    return (from + std::rand() % (to - from + 1)); // NOLINT(cert-msc50-cpp)
}
```
<details><summary><span>INFO</span></summary>

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
### `int getAvailableIndexInRange`

Получить первый пропущенный индекс в массиве. Либо новый (т.е. последний + 1)

```c++
int getAvailableIndexInRange(const std::vector<int> &range) {
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

<details><summary><span>INFO</span></summary>

Хорошо подходит для поиска свободного идентификатора

```c++
getAvailableIndexInRange({ 0, 1, 3, 4 }) // 2
getAvailableIndexInRange({ 0, 1, 2, 3 }) // 4
```

</details>

---
### `vector<N> removeIntersections`

Возвращает результат вычета из первого переданного вектора второго

```c++
template<typename N>
std::vector<N> removeIntersections(const vector<N> &list, const vector<N> &intersection) {
    std::vector<N> results = list;

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

<details><summary><span>INFO</span></summary>

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
### `vector<T> getShuffleVector`

Перемешивает копию vector. Возвращает новый перемешанный вектор

```c++
template<typename T>
std::vector<T> getShuffleVector(const std::vector<T> &data) {
    std::vector<T> out = data;
    for (int i = 0; i < out.size() - 1; ++i) {
        int j = getRandomIntInRange(i, out.size() - 1);
        std::swap(out[i], out[j]);
    }

    return out;
}
```

<details><summary><span>INFO</span></summary>

| includes | depends             | return   | links to use                          |
|----------|---------------------|----------|---------------------------------------|
|          | getRandomIntInRange | vector T | getShuffledCopyOfVectorRangeExample() |

</details>

---
### `vector<T> getCopyVector`

Копирует vector. Возвращает или полную копию, или, если указан размер (amount) и/или 
позиция, с которой нужно копировать (firstPos), диапазон

```c++
template<typename T>
std::vector<T> getCopyVector(const std::vector<T> &data, int amount = 0, int firstPos = 0) {
    std::vector<T> out;

    int sizeOfCopy = (amount == 0 )|| ((amount + firstPos) > data.size()) ? (data.size() - firstPos) : amount;

    std::copy_n(data.begin() + firstPos, sizeOfCopy, std::back_inserter(out));

    return out;
}
```

<details><summary><span>INFO</span></summary>

| includes  | depends | return   | links to use                          |
|-----------|---------|----------|---------------------------------------|
| algorithm |         | vector T | getShuffledCopyOfVectorRangeExample() |

</details>

---
### `vector<T> getShuffledCopyOfVectorRange`

Перемешивает копию vector. Возвращает диапазон перемешанного вектора. 
Является обёрткой для getShuffleVector для получения диапазона

```c++
template<typename T>
std::vector<T> getShuffledCopyOfVectorRange(const std::vector<T> &data, int amount = 0, int firstPos = 0) {
    std::vector<T> shuffledVector = getShuffleVector(data);

    return getCopyVector(shuffledVector, amount, firstPos);
}

```

<details><summary><span>INFO</span></summary>

| includes | depends                            | return   | links to use                          |
|----------|------------------------------------|----------|---------------------------------------|
|          | getShuffleVector<br/>getCopyVector | vector T | getShuffledCopyOfVectorRangeExample() |

</details>

---
### `string getTrimmedString`

Обрезает строку. Возвращает строку с удаленными конечными пробелами

```c++
std::string getTrimmedString(std::string str, const std::string &whiteSpaces = " \r\n\t\v\f") {
    auto start = str.find_first_not_of(whiteSpaces);
    str.erase(0, start);
    auto end = str.find_last_not_of(whiteSpaces);
    str.erase(end + 1);

    return str;
}
```

<details><summary><span>INFO</span></summary>

| includes | depends | return | links to use                                                                                                          |
|----------|---------|--------|-----------------------------------------------------------------------------------------------------------------------|
|          |         | string | [20_5_2](https://github.com/VladislavNovak/20_5_2/blob/89adfe880b2d931009953b4e03bd19e6181bd05f/main.cpp#L14C2-L14C2) |

</details>

---
### `vector<string> splitStringIntoList`

Разбивает строку на подстроки.

```c++
std::vector<std::string> splitStringIntoList(const std::string &str, const char delim = ',') {
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

<details><summary><span>INFO</span></summary>

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

## Convert

---
### `bool convertDoubleFromString`

Преобразует строку в double. Если удалось, то возвращается true

```c++
bool convertDoubleFromString(const std::string &str, double &out) {
    try { out = std::stod(str); }
    catch (std::invalid_argument &err) {
        out = 0;
        std::cerr << err.what() << endl;
        return false;
    }

    return true;
}
```

<details><summary><span>INFO</span></summary>

Можно было бы использовать strtod(str.c_str(), nullptr), который не выбрасывает исключение.

| includes | depends | return | links to use                                                                                                      | prev name      |
|----------|---------|--------|-------------------------------------------------------------------------------------------------------------------|----------------|
|          |         | bool   | [16_6_3_1](https://github.com/VladislavNovak/16_6_3_1/blob/f69c866eb4378c4947e2fdd413b22f253de362dc/main.cpp#L99) | stringToDouble |

</details>

# User input

---
### `T putInput`

Пользовательский ввод. Позволяет работать в двух режимах: без переданной строки restrictions и со строкой restrictions. 

Если без, можно получать, соответственно, типы int, double, float.

Во втором случае в typename передается тип char, а в restrictions - строка из любого списка символов, 
которые будут служить ограничением: т.е. получить возможно будет лишь один символ из restrictions.

```c++
template<typename T> T putInput(const std::string &restrictions = "") {
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

<details open><summary><span>Максимально сокращённый вариант</span></summary>

```c++
void resetBuffer() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

double putInput() {
    double input;

    while (true) {
        std::cin >> input;

        if (std::cin.fail()) {
            resetBuffer();
            std::cout << "Input is invalid. Please try again: ";
            continue;
        }
        break;
    }
    resetBuffer()
    
    return input;
}
```
</details>
<details><summary><span>INFO</span></summary>

Есть ещё несколько специфичных параллельных функций:

- `putChar` + `putNumberAsString` (позволяет получить строку состоящую из цифр)
- `putLineString` (основано на std::getline и позволяет получить строку любой длины),
- `putNumeric` (получение числа в диапазоне)
- `selectMenuItem` (получить одну из опций)

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
Возможная альтернатива для `selectMenuItem`:

```c++
// Возвращает true при введении Y/y или false при N/n. Другие символы запрещены
bool hasDialogYesNo(const std::string &msg) {
    printf("%s. Press 'Y/y' to agree or 'N/n' to deny: ", msg.c_str());
    return isIncludes("Yy", getUserChar<char>("YyNn"));
}
```
</details>

---
### `string putNumberAsString`

Позволяет получить строку состоящую из цифр. Как пример: телефон. Можно передать длину результирующей строки

```c++
std::string putNumberAsString(const std::string &msg, int charCount = 1) {
    printf("%s (%i digits): ", msg.c_str(), charCount);
    string input;
    while ((charCount--) > 0) { input += putChar(charCount == 0, input); }

    return input;
}
```

<details><summary><span>INFO</span></summary>

Основывается на аналоге `putInput` - `putChar`:

```c++
void resetBuffer() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

char putChar(bool isEnd, const std::string &current) {
    const std::string &allowedList = "0123456789";
    char input;

    while (!isEnd) {
        std::cin >> input;

        if (std::cin.fail() || (allowedList.length() && !isIncludes(allowedList, input))) {
            resetBuffer();
            std::cout << "Now in buffer: " << current << ". Current char invalid. Try again:";
            continue;
        }
        break;
    }

    if (isEnd) resetBuffer();

    return input;
}
```
Обратим внимание:

- `putChar` является аналогом `putInput`
- аргумент `isEnd` сигнализирует о том, что введен последний символ и сбрасывает буфер
- аргумент `current` содержит информацию об уже введенных символах
- `allowedList` - это список разрешенных символов. В данном случае это только цифры
- одна зависимость: [isIncludes](#bool-isincludesconst-t-range-const-n-item)

Пример:

```c++
auto phone = putNumberAsString("Enter phone", 10);
```

Подумать:

Если передано значение -1, то можно вводить любое количество символов (сейчас - жёстко заданное).

</details>

---

### `int selectMenuItem`

Требует ввод от пользователя одного из элементов переданного списка. Возвращает индекс выбранного элемента списка.

```c++
int selectMenuItem(const std::vector<std::string> &list, const std::string &msg = "Select and") {
    string commands;
    for (const auto &item : list)
        commands += (item + (item != list[list.size() - 1] ? "|" : ""));

    printf("%s enter (%s):", msg.c_str(), commands.c_str());
    while (true) {
        std::string userInput;
        std::getline(std::cin, userInput);

        for (int i = 0; i < list.size(); ++i)
            if (list[i] == userInput) return i;

        std::cout << "Error. Try again:";
    }
}
```

<details><summary><span>INFO</span></summary>

Примеры: 

```c++
  if (selectMenuItem({ "yes", "no" }) == 0) {
    // Действие
  }
```
```c++
auto index = selectMenuItem({ "add", "edit", "about", "exit" });
// Далее - switch case по номерам
```

Альтернатива:

`putInput->hasDialogYesNo`

</details>

---
### `string putLineString`

Пользовательский ввод. На основе `std::getline` получить всю строку до переноса. Конечные пробелы обрезаются. Пустая строка запрещается.

```c++
std::string putLineString(const std::string &msg) {
    printf("%s: ", msg.c_str());
    while (true) {
        std::string userLineString;
        std::getline(std::cin, userLineString);

        if (userLineString.empty()) {
            std::cout << "The string cannot be empty. Try again:";
            continue;
        }

        return userLineString;
    }
}
```

<details><summary><span>INFO</span></summary>

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
### `int putNumeric`

Пользовательский ввод целого числа. 

```c++
int putNumeric(const std::vector<int> &list = {}, const std::vector<int> &excludedList = {}) {

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

<details><summary><span>INFO</span></summary>

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

# Files and streams

---
### `void outputListToStream`

Печатает данные в указанный поток. Потоком может быть std::cout, а может быть и std::ofstream file. 
Таким образом, данные можно или вывести на экран, или распечатать в файл.

```c++
template<typename T>
void outputListToStream(std::ostream &out, const std::vector<T> &list, const std::string &delim = ",") {
    for (const auto &item : list) out << item << (item != list[list.size() - 1] ? delim : "\n");
}
```

<details><summary><span>INFO</span></summary>

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
### `bool hasFileExist`

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

<details><summary><span>INFO</span></summary>

| includes | depends | return | links to use                                                                                                   | prev name   |
|----------|---------|--------|----------------------------------------------------------------------------------------------------------------|-------------|
| fstream  |         | bool   | [20_5_4](https://github.com/VladislavNovak/20_5_4/blob/45e2f0efdb54be265763b2786a89f1d01419fee3/main.cpp#L100) | isFileExist |

</details>


---
### `void writeListToFile`

Запись в файл. Печатает вектор в файл

```c++
void writeListToFile(const char* path, const std::vector<std::string> const &list, bool isAppMode = true, const std::string &delim = ",") {
    std::ofstream file(path, (isAppMode ? std::ios::app : std::ios::out));
    outputListToStream(file, list, delim);
    file.close();
}
```

<details><summary><span>INFO</span></summary>

| includes | depends            | return | links to use           | prev name              |
|----------|--------------------|--------|------------------------|------------------------|
| fstream  | outputListToStream |        | writeReadFileExample() | writeComplexDataToFile |

</details>

---
### `bool readFileToList`

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

<details><summary><span>INFO</span></summary>

| includes | depends | return | links to use           | prev name        |
|----------|---------|--------|------------------------|------------------|
| fstream  |         |        | writeReadFileExample() | readFileToVector |

</details>

---
### `void displayFileToScreen`

Чтение файла. Записывает данные из файла в вектор и сразу печатает их на экран.

```c++
void displayFileToScreen(const char* pathName, const std::string const &msg) {
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

<details><summary><span>INFO</span></summary>

| includes | depends                               | return | links to use           |
|----------|---------------------------------------|--------|------------------------|
|          | readFileToList<br/>outputListToStream |        | writeReadFileExample() |

</details>

---
### `bool loadStringFromBinaryFile`

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
<details><summary><span>INFO</span></summary>

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
### `void saveStringToBinaryFile`

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

<details><summary><span>INFO</span></summary>

| includes | depends      | return | links to use                                                                                                            | past name         |
|----------|--------------|--------|-------------------------------------------------------------------------------------------------------------------------|-------------------|
| fstream  | hasFileExist |        | [20_5_4](https://github.com/VladislavNovak/20_5_4/blob/45e2f0efdb54be265763b2786a89f1d01419fee3/main.cpp#L138C1-L138C1) | writeToBinaryFile |

</details>

---
### `bool loadIntoArrFromBinaryFile`

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

<details><summary><span>INFO</span></summary>

| includes | depends                      | return | links to use |
|----------|------------------------------|--------|--------------|
| fstream  | readIntoPersonFromBinaryFile | bool   |              |

В `readIntoPersonFromBinaryFile()` необходимо подставить актуальную структуру с внесенными изменениями
</details>

---
### `bool readIntoPersonFromBinaryFile`

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

<details><summary><span>INFO</span></summary>

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
### `void savePersonToBinaryFile`

Записывает в бинарный (двоичный) файл структуру.

```c++
void savePersonToBinaryFile(const char* path, const character &person, bool isAppMode = false) {
    std::ofstream file(path, std::ios::binary | (isAppMode ? std::ios::app : std::ios::out));

    int nameSize = (int)person.name.length();
    file.write((char*) &nameSize, sizeof(nameSize));
    file.write(person.name.c_str(), nameSize);
    file.write((char*) &person.salary, sizeof(person.salary));

    file.close();
}
```

<details><summary><span>INFO</span></summary>

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

# Map

---
### `bool addEntryToMap`

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
### `bool changeEntryInMap`

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
### `bool removeEntryFromMap`

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
### `bool retrieveMapValueByKey`

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
### `void removeEmptyEntriesFromMap`

Позволяет удалить из std::map записи, значения которых равны нулю

```c++
void removeEmptyEntriesFromMap(std::map<char, int> &out) {
    for (auto it = out.begin(), next_it = it; it != out.end(); it = next_it) {
        ++next_it;
        if (it->second == 0) out.erase(it);
    }
}
```
<details><summary><span>INFO</span></summary>

Необходимо в будущем добавить template, сделав метод более универсальным

</details>

# Time and Date

---
### `bool isStringADate`

Проверяет - является ли строка датой.
Вторым аргументом передается строка, которая возвращает аккумулированный список ошибок, если они случились.

```c++
bool isStringADate(const std::string &str, std::string &cause) {
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

<details><summary><span>INFO</span></summary>

Данная функция пока узко специализирована и, несмотря на то, что выполняет задачу проверки строки, требует доработки.
Однако она вполне рабочая и может служить общим шаблоном для решения подобных задач.

| includes | depends                                                | return | links to use                                                                                                   | prev name |
|----------|--------------------------------------------------------|--------|----------------------------------------------------------------------------------------------------------------|-----------|
|          | isNumeric<br/>getTrimmedString<br/>splitStringIntoList | bool   | [20_5_1](https://github.com/VladislavNovak/20_5_1/blob/ffa6db6840c82b32353f1714d6b7aaca3a6bcad2/main.cpp#L118) | isDate    |

</details>

---

### `getRandomDate`

Получить случайную дату в диапазоне.

```c++
std::stringstream convertStringsToSS(const std::vector<std::string> &dates) {
    std::string delim = " ";
    std::stringstream ss;
    std::copy(dates.begin(), dates.end(), std::ostream_iterator<std::string>(ss, delim.c_str()));
    return ss;
}

std::time_t getRandomDate() {
    std::vector<std::vector<int>> parts = { { 1970, 2022 }, { 1, 12 }, { 1, 31 } };
    std::vector<std::string> dates;
    for (const auto &part : parts) {
        dates.emplace_back(std::to_string(getRandomIntInRange(part[0], part[1])));
    }

    std::time_t now = time(nullptr);
    std::tm toParse = *localtime(&now);
    auto ss = convertStringsToSS(dates);
    ss >> std::get_time(&toParse, "%Y %m %d");
    return mktime(&toParse);
}
```

<details><summary><span>INFO</span></summary>

- нужно включить <i>sstream</i>
- <i>convertStringsToSS</i> позволяет конвертировать vector в объект stringstream
- <i>convertStringsToSS</i> если будет необходимость, вывести в отдельную функцию как template

</details>

---
### `time_t putTime`

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

<details><summary><span>INFO</span></summary>

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
### `bool hasLeapYear`

Определяет, является ли год високосным

```c++
bool hasLeapYear(time_t targetDate) {
    std::tm* local = localtime(&targetDate);
    int year = local->tm_year + 1900;
    return ((year % 400 == 0 || year % 100 != 0) && year % 4 == 0);
}
```

<details><summary><span>INFO</span></summary>

Необходимо включить заголовок:

```c++
#include <ctime>
```
</details>

---
### `int extractDayOfYearFromDate`

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

<details><summary><span>INFO</span></summary>

Необходимо включить заголовок:

```c++
#include <ctime>
```
Зависит от функции `hasLeapYear`. 

Для большей точности нужно для високосного года добавить проверку: расположена дата до или после 1 марта.

Функция отлично подходит для создания календаря, генерируя ключи в std::map.

</details>

---
### `std::tm convertStringToTime`

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

<details><summary><span>INFO</span></summary>

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
### `bool compareToSortByDay`

Выступает в качестве компаратора для сортировки дат

```c++
bool compareToSortByDay (const time_t baseDate, const time_t comparedDate) {
    std::tm base = *localtime(&baseDate);
    std::tm compared = *localtime(&comparedDate);
    cout << "День в году: " << base.tm_yday << endl;

    return (compared.tm_mon == base.tm_mon) ? compared.tm_mday >= base.tm_mday : compared.tm_mon >= base.tm_mon;
}
```

<details><summary><span>INFO</span></summary>

| includes            | depends | return | links to use |
|---------------------|---------|--------|--------------|
| ctime<br/>algorithm |         | bool   |              |

Используется в сортировке массива чисел:

```c++
std::sort(std::begin(listOfBirthdays), std::end(listOfBirthdays), compareToSortByDay)
```

</details>

