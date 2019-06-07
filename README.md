ТиМП. Задания на практическое занятие
№2
Ретивых В.А.
24 февраля 2018 г.
1 Однопроходные алгоритмы
Здесь и далее ввод данных производится из stdin, а вывод в stdout, если
не сказано обратное. Использование массивов не допускается.
Вариант 1. Поиск минимума. На вход подаётся число 𝑛 ∈ N : 𝑛 ≤
2147483647, а также 𝑛 чисел 𝑥𝑖 ∈ Z : |𝑥𝑖
| ≤ 2147483647 для любого целого
𝑖 от 1 до 𝑛. Вывести значение минимального 𝑥𝑖
.
Вариант 2. Поиск максимума. На вход подаётся число 𝑛 ∈ N : 𝑛 ≤
2147483647, а также 𝑛 чисел 𝑥𝑖 ∈ Z : |𝑥𝑖
| ≤ 2147483647 для любого целого
𝑖 от 1 до 𝑛. Вывести значение максимального 𝑥𝑖
.
Вариант 3. Сумма последовательности. На вход подаётся число
𝑛 ∈ N : 𝑛 ≤ 2147483647, а также 𝑛 чисел 𝑥𝑖 ∈ Z : |𝑥𝑖
| ≤ 2147483647 для
любого целого 𝑖 от 1 до 𝑛. Вывести значение ∑︁𝑛
𝑖=1
𝑥𝑖
.
Вариант 4. Разность последовательности. На вход подаётся число
𝑛 ∈ N : 𝑛 ≤ 2147483647, а также 𝑛 чисел 𝑥𝑖 ∈ Z : |𝑥𝑖
| ≤ 2147483647 для
любого целого 𝑖 от 1 до 𝑛. Вывести значение ∑︁𝑛
𝑖=1
− 𝑥𝑖
.
Вариант 5. Среднее арифметическое. На вход подаётся число 𝑛 ∈
N : 𝑛 ≤ 2147483647, а также 𝑛 чисел 𝑥𝑖 ∈ Z : |𝑥𝑖
| ≤ 2147483647 для
любого целого 𝑖 от 1 до 𝑛. Вывести значение среднего арифметического
от всех 𝑥𝑖
.
1
1 ОДНОПРОХОДНЫЕ АЛГОРИТМЫ
Вариант 6. Количество положительных чисел. На вход подаётся
число 𝑛 ∈ N : 𝑛 ≤ 2147483647, а также 𝑛 чисел 𝑥𝑖 ∈ Z : |𝑥𝑖
| ≤ 2147483647
для любого целого 𝑖 от 1 до 𝑛. Вывести количество чисел 𝑥𝑖
: 𝑥𝑖 > 0.
Вариант 7. Количество отрицательных чисел. На вход подаётся
число 𝑛 ∈ N : 𝑛 ≤ 2147483647, а также 𝑛 чисел 𝑥𝑖 ∈ Z : |𝑥𝑖
| ≤ 2147483647
для любого целого 𝑖 от 1 до 𝑛. Вывести количество чисел 𝑥𝑖
: 𝑥𝑖 < 0.
Вариант 8. Количество неположительных чисел. На вход подаётся число 𝑛 ∈ N : 𝑛 ≤ 2147483647, а также 𝑛 чисел 𝑥𝑖 ∈ Z : |𝑥𝑖
| ≤
2147483647 для любого целого 𝑖 от 1 до 𝑛. Вывести количество чисел
𝑥𝑖
: 𝑥𝑖 ≤ 0.
Вариант 9. Количество неотрицательных чисел. На вход подаётся число 𝑛 ∈ N : 𝑛 ≤ 2147483647, а также 𝑛 чисел 𝑥𝑖 ∈ Z : |𝑥𝑖
| ≤
2147483647 для любого целого 𝑖 от 1 до 𝑛. Вывести количество чисел
𝑥𝑖
: 𝑥𝑖 ≥ 0.
Вариант 10. Неубывающая последовательность. На вход подаётся число 𝑛 ∈ N : 𝑛 ≤ 2147483647, а также 𝑛 чисел 𝑥𝑖 ∈ Z : |𝑥𝑖
| ≤
2147483647 для любого целого 𝑖 от 1 до 𝑛. Вывести 1, если 𝑥𝑖 ≤ 𝑥𝑖+1 для
любого целого 𝑖 от 1 до 𝑛 − 1, иначе вывести 0.
Вариант 11. Невозрастающая последовательность. На вход подаётся число 𝑛 ∈ N : 𝑛 ≤ 2147483647, а также 𝑛 чисел 𝑥𝑖 ∈ Z : |𝑥𝑖
| ≤
2147483647 для любого целого 𝑖 от 1 до 𝑛. Вывести 1, если 𝑥𝑖 ≥ 𝑥𝑖+1 для
любого целого 𝑖 от 1 до 𝑛 − 1, иначе вывести 0.
Вариант 12. Баланс скобок. На вход подаётся число 𝑛 ∈ N : 𝑛 ≤
2147483647, а также 𝑛 разделённых пробелом символов 𝑥𝑖 ∈
{︁
(,)
}︁
для
любого целого 𝑖 от 1 до 𝑛. Вывести 1, если соблюден баланс скобок (т.е.
первая скобка должна быть открывающейся, и количество открывающихся и закрывающихся скобок должно совпадать), иначе вывести 0.
Вариант 13. Сумма квадратов. На вход подаётся число 𝑛 ∈ N : 𝑛 ≤
2147483647, а также 𝑛 чисел 𝑥𝑖 ∈ Z : |𝑥𝑖
| ≤ 2147483647 для любого целого
𝑖 от 1 до 𝑛. Вывести значение ∑︁𝑛
𝑖=1
𝑥
2
𝑖
.
2
1 ОДНОПРОХОДНЫЕ АЛГОРИТМЫ
Вариант 14. Сумма нечётных квадратов. На вход подаётся число
𝑛 ∈ N : 𝑛 ≤ 2147483647, а также 𝑛 чисел 𝑥𝑖 ∈ Z : |𝑥𝑖
| ≤ 2147483647 для
любого целого 𝑖 от 1 до 𝑛. Вывести значение ∑︁𝑛
𝑖=1
(𝑖 mod 2) · 𝑥
2
𝑖
.
Вариант 15. Сумма чётных кубов. На вход подаётся число 𝑛 ∈ N :
𝑛 ≤ 2147483647, а также 𝑛 чисел 𝑥𝑖 ∈ Z : |𝑥𝑖
| ≤ 2147483647 для любого
целого 𝑖 от 1 до 𝑛. Вывести значение ∑︁𝑛
𝑖=1
((𝑖 + 1) mod 2) · 𝑥
3
𝑖
.
Вариант 16. Разность сумм нечётных и чётных кубов. На вход
подаётся число 𝑛 ∈ N : 𝑛 ≤ 2147483647, а также 𝑛 чисел 𝑥𝑖 ∈ Z : |𝑥𝑖
| ≤
2147483647 для любого целого 𝑖 от 1 до 𝑛. Вывести значение ∑︁𝑛
𝑖=1
(−1)𝑖+1
·
𝑥
3
𝑖
.
Вариант 17. Разность сумм чётных и нечётных квадратов. На
вход подаётся число 𝑛 ∈ N : 𝑛 ≤ 2147483647, а также 𝑛 чисел 𝑥𝑖 ∈
Z : |𝑥𝑖
| ≤ 2147483647 для любого целого 𝑖 от 1 до 𝑛. Вывести значение
∑︁𝑛
𝑖=1
(−1)𝑖
· 𝑥
2
𝑖
.
Вариант 18. Сумма последовательности 2. На вход подаётся число 𝑛 ∈ N : 𝑛 ≤ 2147483647, а также 𝑛 чисел 𝑥𝑖 ∈ Z : |𝑥𝑖
| ≤ 2147483647
для любого целого 𝑖 от 1 до 𝑛. Вывести значение ∑︁𝑛
𝑖=1
𝑥𝑖 − 𝑖.
Вариант 19. Произведение последовательности. На вход подаётся число 𝑛 ∈ N : 𝑛 ≤ 2147483647, а также 𝑛 чисел 𝑥𝑖 ∈ Z : |𝑥𝑖
| ≤
2147483647 для любого целого 𝑖 от 1 до 𝑛. Вывести значение ∏︁𝑛
𝑖=1
𝑥𝑖
.
Вариант 20. Произведение последовательности 2. На вход подаётся число 𝑛 ∈ N : 𝑛 ≤ 2147483647, а также 𝑛 чисел 𝑥𝑖 ∈ Z : |𝑥𝑖
| ≤
2147483647 для любого целого 𝑖 от 1 до 𝑛. Вывести значение ∏︁𝑛
𝑖=1
𝑥𝑖 − 𝑖.
3
