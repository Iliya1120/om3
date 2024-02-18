#include <iostream>
#include<math.h>


using namespace std;

class Geom
{
   public:

    static double S;
    static double a;
    static double b;
    static double sinA;
    static int count;

    static double triangle(double a1, double b1)
    {
        a = a1;
        b = b1;
        S = 0.5 * b * a;
        count++;
        return S;
    }
    static double triangle(double a1, double b1, double sinA1)
    {
        a = a1;
        b = b1;
        sinA = sinA1;
        S = 0.5 * b * a * sin(sinA1);
        count++;
        return S;
    }
    static double rectangle(double a1, double b1)
    {
        a = a1;
        b = b1;
        S = a * b;
        count++;
        return S;
    }
    static double square(double a1)
    {
        a = a1;
        S = a * a;
        count++;
        return S;
    }
    static double rhomb(double a1, double b1)
    {
        a = a1;
        b = b1;
        S = 0.5*a*b;
        count++;
        return S;
    }
    ~Geom() {
        cout << Geom::count << endl;
    }
 
};

int Geom::count = 0;
double Geom::a = 0;
double Geom::b = 0;
double Geom::sinA = 0;
double Geom::S = 0;

int main()
{
    system("chcp 1251");
    system("cls");
   char conec = ' ';
   do{
    double a1 = 0;
    double b1 = 0;
    int sin = 0;
    
    Geom chelik;
    int choice = 0;
    cout<< R"(Выберите Фигуру для подсчета площади: 
1 - Треугольник через основание и высоту
2 - Треугольник через две стороны и угл между ними
3 - Прямоугольник
4 - Квадрат
5 - Ромба  
)" << endl;
    cout << "Выбор: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        
        cout << "Площадь треугольника через основание и высоту:" << endl;
        cout << "Введите основание: ";
        cin >> a1;
        cout << "Введите высоту: ";
        cin >> b1;
        cout << "S="<<chelik.triangle(a1, b1) << endl;
        cout << "Продолжить? '+' - да, '-' - нет:";
        cin >> conec;
        break;
    case 2:
        cout << "Площадь треугольника через две стороны и угл между ними" << endl;
        cout << "Введите первую сторону: " ;
        cin >> a1;
        cout << "Введите вторую сторону: " ;
        cin >> b1;
        cout << "Введите градусную меру угла между ними: " ;
        cin >> sin;
        cout << "S=" << chelik.triangle(a1, b1, sin) << endl;
        cout << "Продолжить? '+' - да, '-' - нет:";
        cin >> conec;
        break;
    case 3:
        cout << "Площадь прямоугольника" ;
        cout << "Введите первую сторону: " ;
        cin >> a1;
        cout << "Введите вторую сторону: " ;
        cin >> b1;
        cout << "S=" << chelik.rectangle(a1, b1) << endl;
        cout << "Продолжить? '+' - да, '-' - нет:";
        cin >> conec;
        break;
    case 4:
        cout << "Площадь квадрата:" << endl;
        cout << "Введите сторону: " ;
        cin >> a1;
        cout << "S=" << chelik.square(a1) << endl;
        cout << "Продолжить? '+' - да, '-' - нет:";
        cin >> conec;
        break;
    case 5:
        cout << "Площадь ромба:" << endl;
        cout << "Введите первую диагональ: ";
        cin >> a1;
        cout << "Введите вторую диагональ: ";
        cin >> b1;
        cout << "S=" << chelik.rhomb(a1,b1) << endl;
        cout << "Продолжить? '+' - да, '-' - нет:";
        cin >> conec;
        break;
    default:
        break;
    }
   } while (conec == '+');
}

