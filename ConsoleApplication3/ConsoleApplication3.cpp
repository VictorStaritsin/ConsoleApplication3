﻿/*
Создайте класс Array
Класс Array - это класс целочисленного динамичискоого массива, Развер массива
может быть передан в качестве параметра или задан с помощью вызова функции,
Класс должен позволять заполнять массив значения , отображать  содержимое масиива,
изменять размер массива, сортировать массив определять минимальное и максимальное значение 
Класс должен содержать набор конструктор и деструкторов.
*/
#include <iostream>
#include "Array.h"

int main()
{
    setlocale(LC_ALL, "Russian");


    //вводим данный массива
    Array array(5);
    //создаем первый массив
    array.addArray();
    //выводим на экран наш массив
    array.showArray();
    //создаем второй массив первый удаляем
    array.resizeArray(6);
   //выводим второй массив
    array.showArray();
    //вводим данный массива
    array.addArray();
    //сортировкуа массива
    array.sortArray();

    array.showArray();
}