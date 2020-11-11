/// Проект для работы в классе.

#include <iostream>
#include <cmath>

int main() {
/// Задачи урока 9.2
#pragma region Задача 1. Начальник.
/// Напишите программу для робота-начальника. Он спрашивает у пользователя, выполнил
/// ли он задания, которые выдавал вчера, и продолжает это делать до тех пор,
/// пока тот не ответит ему “Да, конечно, сделал”.
/// Подсказка: строки можно сравнивать вот так: (answer == “Да, конечно, сделал”),
/// answer - переменная с типом std::string
/*
    std::string answer;

    do {
        std::cout << "Выполнил задание, которое я задал вчера? ";
        std::cin >> answer;
    } while ("Да" != answer);

    std::cout << "Выполнил.\n";
*/
#pragma endregion

#pragma region Задача 2. Купи слона.
/// Напишите программу-дразнилку “Купи слона”. Она спрашивает у пользователя, как
/// его зовут, затем отвечает “%username%, купи слона!”. Дальше, что бы он ни
/// говорил, она передразнивает: Все говорят “...”, а ты купи слона! Так повторяется
/// бесконечно.
/// Пример:
/// - Хорошо, давай куплю.
/// - Все говорят “Хорошо, давай куплю.”, а ты купи слона!
/*
    std::string username;
    std::string answer;

    std::cout << "Как тебя зовут? ";
    std::cin >> username;

    std::cin.ignore(20, '\n');
    std::cout << username << ", купи слона!\n";

    while ("q" != answer) {
        getline(std::cin, answer);
        std::cout << "Все говорят \"" << answer << ".\", а ты купи слона!\n";
    }
*/
#pragma endregion

#pragma region Задача 3. Таблица степеней.
/// Напишите программу, которая выводила бы N первых степеней числа К. Посмотрите,
/// что случится, если N или K будут достаточно большими.
/*
    int n, k;
    int nCount = 0, s = 1;

    std::cout << "Введите число: ";
    std::cin >> k;

    std::cout << "Введите количество 1 степеней: ";
    std::cin >> n;

    while (nCount <= n) {
        if (nCount == 0) {
            std::cout << "Число " << k << " в степени " << nCount << " равно " << s << "\n";
        } else
            std::cout << "Число " << k << " в степени " << nCount << " равно " << (s *= k) << "\n";
        nCount++;
    }
*/
#pragma endregion

#pragma region Задача 4. Напоминалка.
/// Василий — очень ответственный менеджер, но очень забывчивый. Иногда он пьет
/// воду несколько раз подряд, потому что забыл, что только что пил. Напишите
/// для него программу-напоминалку. В самом начале программа спрашивает, сколько
/// раз ему напомнить, а затем нужное количество раз выводит “Вы хотели не забыть
/// о чем-то”.
/// Усложнение: добавьте возможность ввести фразу-напоминалку, чтобы можно было напоминать о чем-то конкретном.
/*
    int notificationCount, i;

    std::string notification;

    std::cout << "Сколько раз Вам напоминать? ";
    std::cin >> notificationCount;

    std::cin.ignore(5, '\n');

    std::cout << "О чем вам напомнить? ";
    getline(std::cin, notification);
    std::cout << "\n";

    i = 0;
    while (i < notificationCount) {
        std::cout << "Вы хотели не забыть о " << notification << ".\n";
        i++;
    }
*/

#pragma endregion

#pragma region Задача 5. Банкомат 3.0.
/// В банке ПлюсПлюсБанк тестируют новую систему пин-кодов на банкоматы. Теперь
/// вместо фиксированного пин-кода пользователь должен ввести 4 числа. Если их
/// сумма оказывается равна 42, пользователь может продолжать работу. Напишите
/// программу, которая спрашивает у пользователя 4 числа и отвечает “Ввод корректный”,
/// если их сумма равна 42, и “Ввод некорректный, попробуйте еще раз” в противном
/// случае. Так повторяется бесконечно.
/*
    int a, b, c, d;

    do {
        std::cout << "Введите пин-код через пробел: ";
        std::cin >> a >> b >> c >> d;
    } while (42 != (a + b + c + d));

    std::cout << "\nПин-код введен верно!\n";
*/
#pragma endregion

#pragma region Задача 6. Сумма чисел.
/// У бухгалтера сломались счеты. Напишите программу, которая считала бы сумму
/// вводимых чисел. В начале у бухгалтера спрашивают, сколько чисел тот хочет
/// сложить, затем нужное количество раз просят ввести число и в конце выводят
/// получившуюся сумму.
/*
    int sum;   // Сумма вводимых чисел.
    int n;     // Количество чисел для суммы.
    int count; // Счетчик.

    std::cout << "Введите общее количество чисел для сложения: ";
    std::cin >> n;

    count = 0;
    while (count < n) {
        if (1 == n) {
            std::cout << "Общее количество чисел для сложения должно быть "
                         "минимум 2!\n";
            std::cout << "Введите общее количество чисел для сложения: ";
            std::cin >> n;

            continue;
        }
        std::cout << "Введите число: ";
        int x;
        std::cin >> x;
        sum += x;

        count++;
    }
    std::cout << "\nСумма = " << sum << "\n";
*/
#pragma endregion

/// Задачи урока 9.3
#pragma region Задача 1. Банкомат 4.0.
/// В банке ПлюсПлюсБанк решили улучшить новую систему пин-кодов на банкоматы.
/// Пользователям оказалось неудобно вводить 4 отдельных числа. Перепишите
/// программу так, чтобы пользователь вводил число любой длины, а дальше все то
/// же самое: если сумма цифр числа оказывается равна 42, пользователь может
/// продолжать работу.
/// Напишите программу, которая спрашивает у пользователя число и отвечает
/// “Ввод корректный”, если сумма его цифр равна 42, и “Ввод некорректный”
/// в противном случае. При этом у пользователя есть только одна попытка
/// ввести корректное число.
/*
    int pin;

    std::cout << "Введите пин-код: ";
    std::cin >> pin;
    int pinTemp = pin;
    int sumPin = 0;

    while (0 != pinTemp) {
        pinTemp %= 10;
        sumPin += pinTemp;
        pinTemp = pin /= 10;

        if (42 != sumPin && 0 == pinTemp) {
            std::cout << "\nПин-код введен неверно!\n";
            std::cout << "Введите пин-код: ";
            std::cin >> pin;
            pinTemp = pin;
            sumPin = 0;
        }
    }
    std::cout << "\nПин-код введен верно!\n";
*/
#pragma endregion

#pragma region Задача 2. Кадастровые проблемы.
/// В столице программистов на квадратные участки дается скидка. А так как работать
/// с целыми числами программисты начинают раньше, то и участки, площадь которых
/// является точным квадратом (например, 25 или 49), являются самыми востребованными.
/// Напишите программу, которая проверяет, является ли введенная площадь участка
/// точным квадратом. Самый большой участок в городе имеет площадь в 1 000 000 м2.
/*
    int maxSquare = 1000000;
    int square;

    std::cout << "Введите площадь: ";
    std::cin >> square;

    while (0 != square % static_cast<int>(sqrt(square)) || square > maxSquare) {
        std::cout << "Площадь неявляется квадратом.\n";
        std::cout << "Введите площадь: ";
        std::cin >> square;
    }
    std::cout << "Площадь является квадратом: " << sqrt(square);
*/
#pragma endregion

#pragma region Задача 3. Кожаный мешок.
/// На этот раз нужно написать фрагмент кода для прошивки робота. Как мы знаем,
/// роботы понимают только нули и единицы, других цифр для них не существует.
/// Напишите программу, которая проверяет, состоит ли число только из нулей и
/// единиц.

    int number; // Введенное число.
    std::cout << "Введите число состоящее из 0 и 1: ";
    std::cin >> number;

    // Если в числе есть значения отличные от 0 и 1 -- возводим флаг.
    bool isNumber;
    while (0 != number && !isNumber) {
        isNumber = number % 10 > 1;
        number /= 10;
    }

    if (isNumber)
        std::cout << "Число НЕ состоит из из 0 и 1.\n";
    else
        std::cout << "Число состоит ТОЛЬКО из из 0 и 1.\n";

#pragma endregion

#pragma region Задача 4. Военное время.
/// Во времена Второй Мировой в штабах использовались стеклянные доски. С одной
/// их стороны специальные люди писали сводки с фронта, а с другой генералы их
/// читали. Как вы понимаете, для генералов текст выглядел зеркально отраженным,
/// поэтому специальных людей учили писать задом наперед. Напишите программу,
/// упрощающую им жизнь: она должна выводить введенное число задом наперед.
/*
    int sendNumber;
    int getNumber = 0;
    std::cout << "Введите число для отправки: ";
    std::cin >> sendNumber;

    while (0 != sendNumber) {
        getNumber = getNumber * 10 + sendNumber % 10;
        sendNumber /= 10;
    }

    std::cout << "Получено число: " << getNumber << "\n";
*/
#pragma endregion

    return 0;
}





