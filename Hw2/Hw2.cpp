#include <iostream>
#include <math.h>
void numbering(int n) {
    std::cout << "Ex. number:                   ";
    std::cout << n << std::endl;

}
float num1(float b1, float b2, float h)
{
    float S = (b1 + b2) * 0.5 * h;
    return S;
}
void num2()
{
    const float PI = 3.1415926;
    float r;
    std::cout << "Input r:";
    std::cin >> r;
    float S = r * r * PI;
    float C = 2 * r * PI;
    std::cout << "S:";
    std::cout << S << std::endl;
    std::cout << "C:";
    std::cout << C << std::endl;

}
float num31(float fside, float sside)
{
    float S = 0.5 * fside * sside;
    return S;
}
float num32(float fside, float sside)
{
    float tside = sqrt(fside * fside + sside * sside);
    return tside;
}
int num4(int fdnum)
{
    int fdnum4 = fdnum % 10;
    int fdnum3 = ((fdnum % 100) - fdnum4) / 10;
    int fdnum2 = ((fdnum % 1000) - fdnum4 - fdnum3) / 100;
    int fdnum1 = (fdnum - fdnum4 - fdnum3 - fdnum2) / 1000;
    int Sum = fdnum1 + fdnum2 + fdnum3 + fdnum4;
    return Sum;
}
void num5() {
    float x, y;
    std::cout << "x: ";
    std::cin >> x;
    std::cout << "y: ";
    std::cin >> y;
    float r = sqrt(x * x + y * y) ;
    float fi = atan(y / x);
    std::cout <<  "R: ";
    std::cout << r << std::endl;
    std::cout << "fi: ";
    std::cout << fi << std::endl;
}
void num6() {
    float r, fi;
    std::cout << "r: ";
    std::cin >> r;
    std::cout << "fi: ";
    std::cin >> fi;
    float x, y;
    x = r * cos(fi);
    y = r * sin(fi);
    std::cout << "X: ";
    std::cout << x << std::endl;
    std::cout << "Y: ";
    std::cout << y << std::endl;
}
void num7()
{
    int fc, sc, tc;
    std::cout << "First coefficient:";
    std::cin >> fc;
    std::cout << "Second coefficient:";
    std::cin >> sc;
    std::cout << "Third coefficient:";
    std::cin >> tc;
    float D = sc * sc - 4 * fc * tc;
    //считаем дискриминант, а потом в зависимости от его значения выводим разные корни (или не выводим). Используется оператор ветвления if/else
    if (D < 0.0)
        std::cout << "No equation roots" << std::endl;
    else if (D == 0.0)
    {
        std::cout << "The equation root :";
        float Root = (-sc) / (2 * fc);
        std::cout << Root << std::endl;
    }
    else
    {
        std::cout << "The equation roots :";
        float Root1 = (-sc + sqrt(D)) / (2 * fc);
        float Root2 = (-sc - sqrt(D)) / (2 * fc);
        std::cout << Root1;
        std::cout << ",";
        std::cout << Root2 << std::endl;
    }
}
float median(float a, float b, float c) {
    float med = sqrt(2 * b * b + 2 * c * c - a * a) * 0.5;
    return med;
}
void num8()
{
    float a, b, c;
    std::cout << "Input a:";
    std::cin >> a;
    std::cout << "Input b:";
    std::cin >> b;
    std::cout << "Input c:";
    std::cin >> c;
    //находим медианы с помощью доп функции, которая считает медиану, проведённую к стороне а
    float meda, medb, medc;
    meda = median(a, b, c);
    medb = median(b, a, c);
    medc = median(c, a, b);
    //находим медианы к медианам, считаем найденный медианы как стороны
    float med1, med2, med3;
    med1 = median(meda, medb, medc);
    med2 = median(medb, meda, medc);
    med3 = median(medc, medb, meda);
    //выводим значения
    std::cout << "Firt median:";
    std::cout << med1 << std::endl;
    std::cout << "Second median:";
    std::cout << med2 << std::endl;
    std::cout << "Third median:";
    std::cout << med3 << std::endl;
}
void num9()
{
    int k,hours,min;
    std::cout << "K: ";
    std::cin >> k;
    hours = k /( 60 * 60); 
    min = (k - hours * 60 * 60) / 60;
    std::cout << "Hours: ";
    std::cout << hours<<std::endl;
    std::cout << "Minutes: ";
    std::cout << min << std::endl;
}
bool equality(float a, float b)
{
    bool i;
    if (a == b)
    {
       i = 1;
    }
    else { 
        i = 0; 
    }
    return i;
}
void num10() 
{
    float a, b, c;
    std::cout << "a: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b;
    std::cout << "c: ";
    std::cin >> c;
    //обращаемся к вспомогательной функции, сравнивающей значения 
    if ((equality(a, b) == 1) || (equality(b, c) == 1) || (equality(c, a) == 1)) {
        std::cout << "This triangle is isosceles" << std::endl;
    }
    else {
        std::cout << "This triangle is not isosceles" << std::endl;
    }

}
float num11(int sum) {
    if (sum <= 1000) {
        return sum;
    }
    else {
        sum = 0.9 * sum;
        return sum;
    }

}
void num12() {
    int high, weight;
    std::cout << "High: ";
    std::cin >> high;
    std::cout << "Weight: ";
    std::cin >> weight;
    if (high - 100 == weight) {
        std::cout << "Perfect! " << std::endl;
    }
    else if (high - 100 > weight) {
        std::cout << "You should gain ";
        std::cout << - (weight - high + 100) << std::endl;
    }
    else {
        std::cout << "You should lose " ;
        std::cout << - (high - 100 - weight) << std::endl;
    }

}
void num13(){
    int user;
    std::cout << "Your number: ";
    std::cin >> user;
    srand(time(NULL));
    int ran1= (rand() % 8)+1;
    int ran2 = (rand() % 8)+1;
    std::cout << ran1 << std::endl;
    std::cout << ran2 << std::endl;
    int ran = ran1 * ran2;
    if (user == ran) {
        std::cout << "You guessed" << std::endl;
    }
    else {
        std::cout << "You did not guess" << std::endl;
    }
}
int num14(int length, int day)
{
    int sum;
    //в задании не указана цена, и её нет среди данных для ввода, поэтому сделаем константу
    const int price = 100;
    if ((day == 6)||(day == 7)) {
        sum = 0.8 * price * length;
        return sum;
    }
    else if ((day >= 1) && (day <= 5)) {
        sum = price * length;
        return sum;
    }
    else {
        std::cout << "Incorrect day" << std::endl;
        sum = 0;
        return sum;
    }

}
void num15(){
    int MONTH;
    std::cout << "Month number: ";
    std::cin >> MONTH;
    switch (MONTH) {
    case 1:
        std::cout<< "January, winter" << std::endl;
        break;
    case 2:
        std::cout << "February, winter" << std::endl;
        break;
    case 3:
        std::cout << "March, spring" << std::endl;
        break;
    case 4:
        std::cout << "April, spring" << std::endl;
        break;
    case 5:
        std::cout << "May, spring" << std::endl;
        break;
    case 6:
        std::cout << "June, summer" << std::endl;
        break;
    case 7:
        std::cout << "July, summer" << std::endl;
        break;
    case 8:
        std::cout << "August, summer" << std::endl;
        break;
    case 9:
        std::cout << "September, autumn" << std::endl;
        break;
    case 10:
        std::cout << "October, autumn" << std::endl;
        break;
    case 11:
        std::cout << "November, autumn" << std::endl;
        break;
    case 12:
        std::cout << "December, winter" << std::endl;
        break;
    default:
        std::cout << "Incorrect number " << std::endl;
        break;
    }
}
bool num16(int NUMB) {
    int FIRST_HALF = (NUMB / 100000) + (NUMB / 10000 - ((NUMB / 100000) * 10)) + (NUMB / 1000 - ((NUMB / 10000) * 10));
    int dig6 = NUMB % 10;
    int dig5 = ((NUMB % 100) - dig6) / 10;
    int dig4 = ((NUMB % 1000) - dig6 - dig5) / 100;
    int SECOND_HALF = dig6 + dig5 + dig4;
    if (FIRST_HALF == SECOND_HALF) {
        std::cout <<  "Lucky number!" << std::endl;
        return 1;
    }
    else {
        std::cout << "Not a lucky number((" << std::endl;
        return 0;
    }
}
void KOPEYEK() {
    std::cout << " kopeyek " << std::endl;
}
void KOPEYKA() {
    std::cout << " kopeyka " << std::endl;
}
void KOPEYKI() {
    std::cout << " kopeyki " << std::endl;
}
void num17() {
    int num;
    std::cout << "Number from 1 to 99: ";
    std::cin >> num;
    std::cout << num;
    int LAST_DIG = num % 10;
    int FIRST_DIG = num / 10;
    if ((num > 99)||(num<1)) {
        std::cout << "  Incorrect input ! \n";
    }
    else {
        //в зависимости от первой и последней цифры вызываю разные функции, выводящие на консоль нужную форму слова "копейка". 
        if ((FIRST_DIG == 1) || (LAST_DIG == 5) || (LAST_DIG == 6) || (LAST_DIG == 7) || (LAST_DIG == 8) || (LAST_DIG == 9) || (LAST_DIG == 0)) {
            KOPEYEK();
        }
        else if (LAST_DIG == 1) {
            KOPEYKA();
        }
        else {
            KOPEYKI();
        }
        
    }
}
bool num18(int NUMB) {
    int FIRST_DIG = NUMB / 1000;
    int SECOND_DIG = NUMB / 100 - FIRST_DIG * 10;
    int FOURTH_DIG = NUMB % 10;
    int THIRD_DIG = ((NUMB % 100 - FOURTH_DIG) / 10);
    if ((FIRST_DIG == FOURTH_DIG)&(SECOND_DIG == THIRD_DIG)) {
        return true;
    }
    else {
        return false;
    } 
}
int num191(int NUMB, int b) {
    int dig3 = NUMB % 10;
    int dig2 = ((NUMB % 100) - dig3) / 10;
    int dig1 = ((NUMB % 1000) - dig3 - dig2) / 100;
    int MULT_RESULT = dig1 * dig2 * dig3;
    if (MULT_RESULT > b) {
        return 1;
    }
    else {
        return 0;
    }
}
int num192(int NUMB) {
    int dig3 = NUMB % 10;
    int dig2 = ((NUMB % 100) - dig3) / 10;
    int dig1 = ((NUMB % 1000) - dig3 - dig2) / 100;
    int sum = dig1 + dig2 + dig3;
    //сумма цифр трёхзначного числа не может быть больше 27, т.е кратна семи, только если равняется 7, 14, 21
    if ((sum == 21) || (sum == 14) || (sum == 7)) {
        return 1;
    }
    else {
        return 0;
    }
}
int num20(int a, int b, int c, int d) {
    //можно разместить так, что сторона a к стороне b или к стороне d
    if (((a < c) && (b < d)) || ((b < c) && (a < d))) {
        return 1;
    }
    else {
        return 0;
    }
}
int main()
{
    numbering(1);
    float b1, b2, h;
    std::cout << "Input b1:";
    std::cin >> b1;
    std::cout << "Input b2:";
    std::cin >> b2;
    std::cout << "Input h:";
    std::cin >> h;
    std::cout << "S:";
    std::cout << num1(b1, b2, h) << std::endl;

    //номер 2 (Ввод в функции, ничего не выводит)
    numbering(2);
    num2();
    //номер 3 (Ввод в main, одна функция выводит площадь, а другая гипотенузу) 
    numbering(3);
    float fside, sside;
    std::cout << "First side:";
    std::cin >> fside;
    std::cout << "Second side:";
    std::cin >> sside;
    std::cout << "S:";
    std::cout << num31(fside, sside) << std::endl;
    std::cout << "The hypotenuse:";
    std::cout << num32(fside, sside) << std::endl;
    //номер 4 (Ввод в main, выводит сумму) 
    numbering(4);
    int fdnumber;
    std::cout << "Four-digit number:";
    std::cin >> fdnumber;
    std::cout << "Sum of digits:";
    std::cout << num4(fdnumber) << std::endl;
    //номер 5 Выполнить переход от декартовых координат к полярным 
    numbering(5);
    num5();
    //номер 6 Выполнить переход от полярных координат к декартовым
    numbering(6);
    num6();
    //номер 7 (Ввод в функции, ничего не выводит)
    numbering(7);
    num7();
    //номер 8 (Имеется треугольник со сторонами а, b, с.Найти медианы треугольника, сторонами которого являются медианы исходного треугольника)
    numbering(8);
    num8();
  //номер 9 
   numbering(9);
   num9();
   //номер 10 
   numbering(10);
   num10();
   //номер 11
   numbering(11);
   int sum;
   std::cout << "Sum: "<< std::endl;
   std::cin >> sum;
   std::cout << num11(sum) << std::endl;
   //номер 12 
   numbering(12);
   num12();
   //номер 13 
   numbering(13);
   num13();
   //номер 14 
   numbering(14);
   int length, day;
   std::cout << "Length of meeting: ";
   std::cin >> length;
   std::cout << "Day of meeting: ";
   std::cin >> day;
   std::cout << "Your price is: ";
   std::cout << num14(length,day) << std::endl;
   //номер 15 
   numbering(15);
   num15();
   //номер 16  Функция возвращает 1, если число счастливое, а также выдаёт сообщение об этом. Если число не счастливое, то возвращается 0
   numbering(16);
   int SDNUMB;
   std::cout << "Six-digit number: ";
   std::cin >> SDNUMB;
   num16(SDNUMB);
   //номер 17
   numbering(17);
   num17();
   //номер 18 Функция возвращает true, если число - четырёхзначный палиндром, false - если нет
   numbering(18);
   int FDNUMB;
   std::cout << "Four-digit number: ";
   std::cin >> FDNUMB;
   if (num18(FDNUMB) == false) {
       std::cout << "It's not a full dungeon" << std::endl;
   }
   else {
       std::cout << "It's a full dungeon" << std::endl;
   }
   //номер 19 Дано трёхзначное число. Определить: 19.1 является ли произведение его цифр больше числа b 19.2 кратна ли 7 сумма его цифр
   numbering(19);
   int THDNUMB, B;
   std::cout << "Three-digit number: ";
   std::cin >> THDNUMB;
   std::cout << "B: ";
   std::cin >> B;
   if (num191(THDNUMB, B) == 1) {
       std::cout << "Product of digits is greater than b" << std::endl;
   }
   else {
       std::cout << "B is greater than product of digits " << std::endl;
   }
   if (num192(THDNUMB) == 1) {
       std::cout << "The sum of the digits is a multiple of 7" << std::endl;
   }
   else {
       std::cout << "The sum of the digits is not a multiple of 7" << std::endl;
   }
   //номер 20 
   numbering(20);
   int a, b, c, d;
   std::cout << "A: ";
   std::cin >> a;
   std::cout << "B: ";
   std::cin >> b;
   std::cout << "C: ";
   std::cin >> c;
   std::cout << "D: ";
   std::cin >> d;
   num20(a,b,c,d);

   if (num20(a, b, c, d) == 1) {
       std::cout << "Кectangle ab fits in rectangle cd" << std::endl;
   }
   else {
       std::cout << "Кectangle ab does not fit in rectangle cd" << std::endl;
   }
   return 0;
}
