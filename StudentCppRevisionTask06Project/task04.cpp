﻿#include "tasks.h"

/*	Task 04. Chess & Rook [шахматная ладья]
*
*	Шахматная ладья (chess rook) ходит только по горизонтали или вертикали.
*	Даны две различные клетки шахматной доски, определите,
*	может ли ладья попасть с первой клетки на вторую одним ходом.
*
*	Примечание
*	1) Чтобы увидеть решение и разработать алгоритм, нарисуйте себе шахматную доску
*	и поставьте в клетках соответствующие координаты x и y.
*	2) Не забудьте про "защиту от дурака". Если пользователь задаёт неверные коориднаты клеток,
*	то функция должна возвратить булевское значение false.
*	3) Для решения достаточно встроенных в язык арифметических операций, операций отношения, 
*	логических операций и условной операции (?:).
* 
*	Формат входных данных [input]
*	Функция принимает на вход четыре числа от 1 до 8 каждое,
*	задающие номер столбца и номер строки сначала для первой клетки (x1, y1),
*	а потом для второй клетки (x2, y2).
*
*	Формат выходных данных [output]
*	Функция должна возвратить булевское значение - результат решения.
*
*	[ input 1]: 4 4 5 5
*	[output 1]: false
*
*	[ input 2]: 4 4 4 8
*	[output 2]: true
*
*	[ input 3]: -4 4 4 8
*	[output 3]: false
* 
*	[ input 4]: 4 4 4 10
*	[output 4]: false
*/

bool task04(int x1, int y1, int x2, int y2) {
	if (x1 <= 0 || y1 <= 0 || x2 <= 0 || y2 <= 0
		|| x1 > 8 || y1 > 8 || x2 > 8 || y2 > 8) {
		return false;
	}
	return ((x1 == x2 && y1 != y2) || (y1 == y2 && x1 != x2));
	
}
