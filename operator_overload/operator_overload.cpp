//Перегрузіть оператор -,+,*,/ для класу, в якому зберігаєте координати цілих точок
#include <iostream>
using namespace std;
class Point {
private:
    int x;//координати
    int y;//точок
public:
    Point() {//конструктор за замовчуванням
        x = 0; y = 0;
    }
    Point(int X, int Y) {// конструктор з параметрами
       this->x = X;//присвоюємо координати точок, координатам із модифікатора доступу private
       this->y = Y;
    }
    void Print() {//виводимо значення координат
        cout << "x= "<<x <<'\t' << "y=" <<y<<endl;
    }
    Point operator-(const Point& other) {//перегружаємо оператор   -
        Point c; // створюємо новий метод для присвоєння отриманого результату
        c.x = this->x -other.x;
        c.y = this->y -other.y;
        return c;//повертаємо результат математичної операції
    }
    Point operator+(const Point& other) {//перегружаємо оператор   +
        Point c; //створюємо новий метод для присвоєння отриманого результату
       c.x= this->x+ other.x;
       c.y= this->y+ other.y;
        return c;//повертаємо результат математичної операції
    }
    Point operator*(const Point& other) {//перегружаємо оператор   *
        Point c;//створюємо новий метод для присвоєння отриманого результату
        c.x = this->x * other.x;
        c.y = this->y * other.y;
        return c;//повертаємо результат математичної операції
    }
    Point operator/(const Point& other) {//перегружаємо оператор   /
        Point c; //створюємо новий метод для присвоєння отриманого результату
        if (other.x != 0 or other.y != 0) {//ставимо умову за якої на 0 не ділимо
            c.x = this->x / other.x;
            c.y = this->y / other.y; 
        }
        return c;//повертаємо результат математичної операції
    }
};
int main()
{
    Point  A(4,8);// створюємо об'єкт A
    Point  B(1,-3);//створюємо об'єкт B
    Point C;//створюємо об'єкт C
    cout << "Coordinates of object A:" << endl; A.Print();// виводимо значення точок об'єкта A
    cout << "Coordinates of object B:" << endl; B.Print();//виводимо значення точок об'єкта B
    cout << "Operator overloading '-'" << endl;
    C = A - B;    C.Print();//виводимо значення точок об'єкта C, при перегрузці оператора -
    cout << "Operator overloading '+'" << endl;
    C = A + B;    C.Print();//виводимо значення точок об'єкта C, при перегрузці оператора  +
    cout << "Operator overloading '*'" << endl;
    C = A * B;    C.Print();//виводимо значення точок об'єкта C, при перегрузці оператора *
    cout << "Operator overloading '/'" << endl;
    C = A/B;      C.Print();//виводимо значення точок об'єкта C, при перегрузці оператора /
}