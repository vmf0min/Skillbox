/// Задача 1. Инопланетная пища.
/// Ваш космический корабль потерпел крушение на пустынной планете. Еда здесь не
/// растёт, но вы спасли из обломков 100-килограммовый мешок гречки. Из прошлого
/// опыта вы знаете, что если будете экономно питаться, то у вас будет уходить
/// по 4 килограмма гречки в месяц. Чтобы прикинуть гречневый бюджет, вы решили
/// написать программу, которая выведет информацию о том, сколько килограммов
/// гречки у вас должно быть в запасе через месяц, два и так далее, пока она не
/// закончится. Используйте цикл for.

#include <iostream>

int main() {
    int16_t amountBuckwheat = 100;
    int buckwheat = amountBuckwheat;

    for (int month = 1; month < amountBuckwheat / 4; month++) {
        buckwheat -= 4;
        std::cout << "После " << month << " месяцев осталось " << buckwheat << " кг.\n";
    }

    return 0;
}