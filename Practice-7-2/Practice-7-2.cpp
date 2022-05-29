// Practice-7-2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{

    //прямоугольник с дыркой
    /*
    int h = 4, w = 9, spaces;
    spaces = w - 2;

    for (int i = 0; i <= h; i++) {
        if (i == 0 || i == h) {
            cout << string(w, '*') << endl;
        }
        else{
            cout << '*' << string(spaces, ' ') << '*' << endl;
        }
    }
    */

    //треугольник с дыркой

    /*

    int h = 7, w = 7, spaces =0;
    for(int i = 0; i <=h;i++){
        if (i == 0){
            cout << '*' << endl;
        }
        cout << '*' << string(i, ' ') << '*' << endl;
        spaces++;
        
        if (i == h) {
            cout << string(w, '*') << endl;
        }
        
        
    }
    */

    int h = 5, w = 9;
    int space1 = w / 2;
    
    cout << string(space1--, ' ') << '*' << endl;
    for (int i = 1; i <= 2 * (h - 2); i += 2, space1--) {
        cout << string(space1, ' ') << '*' << string(i, ' ') << '*' << endl;
    }
    cout << string(w, ' ');

 }

