## 1. factorial.cpp
Найти факториал числа. Так же можно использовать рекурсивную функцию.
#### [`open factorial.cpp`](https://github.com/igotbitches/coursera_cpp/blob/master/Course%201.%20White%20belt/Week%202/factorial.cpp)


## 2. palindrom.cpp
**Палиндром.** 
Если слово, является палинромом, то вывести `true`. Иначе, `false`.

#### [`open palindrom.cpp`](https://github.com/igotbitches/coursera_cpp/blob/master/Course%201.%20White%20belt/Week%202/palindrom.cpp)


## 3. palindrom_filter.cpp
Напишите функцию, которая называется `PalindromFilter`, возвращает `vector<string>` принимает `vector<string> words` и `int minLength` и возвращает все строки из вектора `words`, которые являются палиндромами и имеют длину не меньше `minLength`. \
Входной вектор содержит не более 100 строк, длина каждой строки не больше 100 символов. \
\
`words` -> `minLength` -> `результат` 
\
`abacaba, aba` -> `5` -> `abacaba` \
`abacaba, aba` -> `2` -> `abacaba, aba` \
`weew, bro, code` -> `4` -> `weew` 
\
\
В этой задаче вам надо сделать файл с реализацией функции `PalindromFilter`, а также других функций, если это необходимо (например, функции проверки на палиндром). 
#### [`open palindrom_filter.cpp`](https://github.com/igotbitches/coursera_cpp/blob/master/Course%201.%20White%20belt/Week%202/palindrom_filter.cpp)


## 4. maximizator.cpp
Напишите функцию `UpdateIfGreater`, которая принимает два целочисленных аргумента: `first` и `second`. Если `first` оказался больше `second`, Ваша функция должна записывать в `second` значение параметра `first`. При этом изменение параметра `second` должно быть видно на вызывающей стороне.
#### [`open maximizator.cpp`](https://github.com/igotbitches/coursera_cpp/blob/master/Course%201.%20White%20belt/Week%202/maximizator.cpp)


## 5. moving.cpp
**Перемещение.** \
Напишите функцию `MoveStrings`, которая принимает два вектора строк, `source` и `destination`, и дописывает все строки из первого вектора в конец второго. После выполнения функции вектор `source` должен оказаться пустым. 
\
`vector<string> source = {"a", "b", "c"};`
`vector<string> destination = {"z"};`
`MoveStrings(source, destination);`
\
`source` должен оказаться пустым.
`destination` должен содержать строки `"z"`, `"a"`, `"b"`, `"c"` именно в таком порядке.
#### [`open moving.cpp`](https://github.com/igotbitches/coursera_cpp/blob/master/Course%201.%20White%20belt/Week%202/moving.cpp)


## 6. reversal.cpp
**Разворот.** \
Реализуйте функцию `void Reverse(vector<int>& v)`, которая переставляет элементы вектора в обратном порядке. \
`vector<int> numbers = {1, 5, 3, 4, 2};`
`Reverse(numbers);`
\
`numbers` должен оказаться равен `{2, 4, 3, 5, 1}`
#### [`open reversal.cpp`](https://github.com/igotbitches/coursera_cpp/blob/master/Course%201.%20White%20belt/Week%202/reversal.cpp)


## 7. reversal2.cpp
**Разворот 2.** \
Реализуйте функцию `vector<int> Reversed(const vector<int>& v)`, возвращающую копию вектора `v`, в которой числа переставлены в обратном порядке. \
**Пример.** \
Вектор `v` = `1, 5, 3, 4, 2` \
Результат функции `2, 4, 3, 5, 1`
#### [`open reversal2.cpp`](https://github.com/igotbitches/coursera_cpp/blob/master/Course%201.%20White%20belt/Week%202/reversal2.cpp)


## 8. average_temperature.cpp
**Средняя температура.** \
Даны значения температуры, наблюдавшиеся в течение N подряд идущих дней. Найдите номера дней (в нумерации с нуля) со значением температуры выше среднего арифметического за все N дней. \
Гарантируется, что среднее арифметическое значений температуры является целым числом. 

**Формат ввода.** \
Вводится число `N`, затем `N` неотрицательных целых чисел — значения температуры в 0-й, 1-й, ... (N?1)-й день. 

**Формат вывода.** \
Первое число `K` — количество дней, значение температуры в которых выше среднего арифметического. Затем `K` целых чисел — номера этих дней. 

**Ввод** \
`5` \
`7 6 3 0 9`

**Вывод** \
`3` \
`0 1 4`
#### [`open average_temperature.cpp`](https://github.com/igotbitches/coursera_cpp/blob/master/Course%201.%20White%20belt/Week%202/average_temperature.cpp)


## 9. peoples_in_line.cpp
Люди стоят в очереди, но никогда не уходят из её начала, зато могут приходить в конец и уходить оттуда. Более того, иногда некоторые люди могут прекращать и начинать беспокоиться из-за того, что очередь не продвигается.\
Будем считать, что люди в очереди нумеруются целыми числами, начиная с 0.\
Реализуйте обработку следующих операций над очередью: \
- `WORRY i`: пометить i-го человека с начала очереди как беспокоящегося; \
- `QUIET i`: пометить i-го человека как успокоившегося; \
- `COME k`: добавить k спокойных человек в конец очереди; \
- `COME -k`: убрать k человек из конца очереди; \
- `WORRY_COUNT`: узнать количество беспокоящихся людей в очереди. \
Изначально очередь пуста. \

**Формат ввода.** \
Количество операций `Q`, затем описания операций. \
Для каждой операции `WORRY i` и `QUIET i` гарантируется, что человек с номером `i` существует в очереди на момент операции. \
Для каждой операции `COME -k` гарантируется, что `k` не больше текущего размера очереди. \
**Формат вывода.** \
Для каждой операции `WORRY_COUNT` выведите одно целое число — количество беспокоящихся людей в очереди.\
**Ввод:**\
`8` \
`COME 5` \
`WORRY 1` \
`WORRY 4` \
`COME -2` \
`WORRY_COUNT` \
`COME 3` \
`WORRY 3` \
`WORRY_COUNT` \
\
**Вывод:** \
`1` \
`2`
#### [`open peoples_in_line.cpp`](https://github.com/igotbitches/coursera_cpp/blob/master/Course%201.%20White%20belt/Week%202/peoples_in_line.cpp)

