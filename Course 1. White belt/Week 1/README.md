## 1. a_plus_b.cpp

**A плюс B.**
На вход программе через стандартный ввод передаются два целых числа, по модулю не превышающие 100000. Выведите в стандартный вывод их сумму. \
\
`2 3` >> `5` \
`-4 -9`	>> `-13` \
`-1 2` >> `1`

[`open a_plus_b.cpp`](https://github.com/igotbitches/coursera_cpp/blob/master/Course%201.%20White%20belt/Week%201/a_plus_b.cpp)


## 2. min_string.cpp

**Минимальная строка.**
В стандартном потоке даны три строки, разделённые пробелом. Каждая строка состоит из строчных латинских букв и имеет длину не более 30 символов. 
Выведите в стандартный вывод лексикографически минимальную из них. \
\
`milk milkshake month` >>	`milk` \
`c a b` >> `a` \
`fire fog wood` >> `fire`

[`open min_string.cpp`](https://github.com/igotbitches/coursera_cpp/blob/master/Course%201.%20White%20belt/Week%201/min_string.cpp)

## 3. equation.cpp

**Уравнение.** \
На вход вашей программы в стандартном потоке ввода подаются действительные коэффициенты `A`, `B` и `C` уравнения `Ax2 + Bx + C = 0` (квадратное уравнение). 
Выведите все его различные действительные корни в поток вывода в любом порядке, при этом разделяя корни пробелами. 
Гарантируется, что хотя бы один из коэффициентов уравнения не равен нулю. \
\
`2 5 2` >> `-0.5  -2` \
`2 4 2` >> `-1`  \
`2 1 2` >> `	`	 \
`0 4 10` >>	`-2.5` 

**Подсказка:** \
Для вычисления квадратного корня используйте функцию `sqrt` из библиотеки `cmath`. Чтобы подключить библиотеку, в начале программы напишите: `#include <cmath>` \
Статья, которая поможет решить задачу: \
https://www.berdov.com/docs/equation/quadratic_equations/ \
https://function-x.ru/sq_equations.html

[`open equation.cpp`](https://github.com/igotbitches/coursera_cpp/blob/master/Course%201.%20White%20belt/Week%201/equation.cpp)


## 4. devision.cpp

**Деление.** \
Дано два целых числа `A` и `B` в диапазоне от 0 до 1 000 000 включительно. Напишите программу, которая вычисляет целую часть частного от деления `A` на `B`.
Если `B = 0`, выведите `"Impossible"`. \
\
`10 2`  >> 	`5` \
`3 5`	 >> 	`0` \
`11 0`	>>	`Impossible`

[`open devision.cpp`](https://github.com/igotbitches/coursera_cpp/blob/master/Course%201.%20White%20belt/Week%201/devision.cpp)

## 5. cost_item.cpp

**Рассчет стоимости товара.** \
Написать программу вычисления стоимости покупки товара с учётом скидки. Если исходная стоимость товара больше `A` рублей, то на неё устанавливается скидка в `X` процентов. Если исходная стоимость товара больше `B` рублей, то на неё устанавливается скидка в `Y` процентов. \
На вход программе даны пять вещественных чисел: `N`, `A`, `B`, `X`, `Y`. \
`(A < B)` \
`N` - исходная стоимость товара. Выведите стоимость покупки товара с учётом скидки. \
\
`100 110 120 5 10` >> 	`100` \
`115 110 120 5 10` >>		`109.25` \
`150 110 120 5 12.5` >> 	`131.25` 

[`open cost_item.cpp`](https://github.com/igotbitches/coursera_cpp/blob/master/Course%201.%20White%20belt/Week%201/cost_item.cpp)

## 6. even_numbers.cpp

**Четные числа.** \
Дано два целых числа `A` и `B` (`A <= B`, `A >= 1`, `B <= 30000`). Выведите через пробел все чётные числа от `A` до `B` (включительно). \
Для проверки целого числа x на чётность используется операция взятия остатка от деления на 2, которая в C++ оформляется с помощью символа `%`. \
\
`1 10`  >>  	`2 4 6 8 10` \
`2 3`	  >>  	`2` \
`9 11`  >>		`10`

[`open even_numbers.cpp`](https://github.com/igotbitches/coursera_cpp/blob/master/Course%201.%20White%20belt/Week%201/even_numbers.cpp)

## 7. second_input.cpp

**Второе вхождение.** \
Дана строка. Найдите в этой строке второе вхождение буквы `f` и выведите индекс этого вхождения. \
Если буква `f` в данной строке встречается только один раз, выведите число `-1`, а если не встречается ни разу, выведите число `-2`. Индексы нумеруются с нуля. \
\
`comfort`  >>		`-1` \
`coffee`	>>  	`3` \
`car`	 >>		`-2`

[`open second_input.cpp`](https://github.com/igotbitches/coursera_cpp/blob/master/Course%201.%20White%20belt/Week%201/second_input.cpp)


## 8. nod.cpp

**Наибольший общий делитель.** \
В stdin даны два натуральных числа. Выведите в stdout их наибольший общий делитель. \
\
`25 27`  >>		`1` \
`12 16`	 >> 	`4` \
`13 13`	 >>		`13`

[`open nod.cpp`](https://github.com/igotbitches/coursera_cpp/blob/master/Course%201.%20White%20belt/Week%201/nod.cpp)

## 9. binary_numeral_system.cpp

**Двоичные числа.** \
На вход дано целое положительное число `N`. Выведите его в двоичной системе счисления без ведущих нулей. \
\
`5`		>>	 `101` \
`32`	>>	 `100000` \
`1`		>>	 `1` 

**Подсказка:** 
- число `N` можно считывать в переменную типа `int` 
- алгоритм перевода из десятичной системы счисления в двоичную, может быть найден, например, здесь: https://www.yaklass.ru/p/informatika/10-klass/informatciia-i-informatcionnye-protcessy-11955/predstavlenie-chislovoi-informatcii-v-kompiutere-11901/re-62e8903e-ba93-478a-85b5-ae45af40c658 
- в этой задаче вам может пригодиться контейнер `vector`; напоминаем, что добавление значения `x` в конец вектора `v` делается так: `v.push_back(x)`;

[`open binary_numeral_system.cpp`](https://github.com/igotbitches/coursera_cpp/blob/master/Course%201.%20White%20belt/Week%201/binary_numeral_system.cpp)


