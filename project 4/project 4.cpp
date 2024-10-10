// project 4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    class Triangle {
    public:
        int height;
        int length;
        string info;

        Triangle(int h, int l) {
            height = h;
            length = l;
            info = "Площадь прямоугольника: ";
        }
        void setInfo(string s) {
            info = s;
        }
    };
    
    Triangle myTriangle(5, 7);
    cout << myTriangle.info << myTriangle.length*myTriangle.height << endl;
    return 0;
}


