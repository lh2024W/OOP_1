// OOP_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

class Elektric_Kettle {
public:
    string brand;//бренд
    string model;//модель
    string color;//цвет
    int price;//цена

    void PrintPriceColor(int price, string color) {
        cout << "Price: " << price << "\nColor: " << color << "\n\n";
    }

    void PrintBrandModel(string brand, string model) {
        cout << "Brand: " << brand << "\nModel: " << model << "\n\n";
    }

    void Price(int price) {
        if (price < 3000) {
            cout << "Cheap kettle!" << price << "\n\n";
        }
        else 
            cout << "Expensive kettle!" << price << "\n\n";
    }
};

class Book {
public:
    string author;//автор
    string name;//название книги
    string genre;//жанр
    int year;//год выпуска
    int count_page;//количество страниц

    void PrintBook(string author, string name, string genre) {
        cout << "Author: " << author << "\nName: " << name << "\nGenre: " << genre << "\n\n";
    }

    void PrintCountPageYear(string name, int count_page, int year) {
        cout << "Name: " << name << "\nCount page: " << count_page << "\nYear: " << year << "\n\n";
    }

    void Year(int year) {
        if (year > 2000) {
            cout << "New book!" << year << "\n\n";
        }
        else
            cout << "Old book!" << year << "\n\n";
    }
};

class Pen {
public:
    string color;//цвет
    string brand;//бренд
    bool write;//пишет? да\нет

    void LeaveOrThrowAway(bool write) {
        if (write = true) {
            cout << "Leave this pen!" << "\n\n";
        }
        else
            cout << "Throw away this pen!" << "\n\n";
    }

    void Print() {
        cout << brand << " " << color << "\n\n";
    }
};

class Banknote {
public:
    int denomination;//номинал купюры
    string year;//год выпуска
    bool old_new;//потрепанная да\нет

    void Print() {
        cout << "Banknote: " << denomination << " grn." << "\n" << year << "Year of release" << "\n\n";
    }

    void TakeOrChange(bool old_new) {
        if (old_new = true) {
            cout << "Take this banknote!" << "\n\n";
        }
        else
            cout << "Change this banknote!" << "\n\n";
    }
};

class Wallet {
public:
    string brand;//бренд
    string price;//цена
    string color;//цвет
    bool coin_box;//отдел для монет да\нет
    int count_section;//количество отделений
    int count_card_sections;// количество денег

    void Print() {
        cout << "Wallet \n";
        cout << "Brand: " << brand << "\nColor: " << color << "\nPrice : "<< price << "\n\n";
    }

    void BayWallet(int count_card_sections, bool coin_box, string price) {
        if ((count_card_sections == 3) && (coin_box = true)) {
            cout << "Price: " <<price << "\n";
        }
        else
            cout << "This wallet is not available!" << "\n";
    }



};

int main()
{
    Elektric_Kettle k;
    k.brand = "Philips";
    k.color = "White";
    k.model = "4569tt";
    k.price = 3600;
    
    k.PrintPriceColor(2500, "blue");
    k.PrintBrandModel("Tefal", "1025R");
    k.Price(3000);

    Book b;
    b.author = "Theodore Dreiser";
    b.count_page = 456;
    b.genre = "novel";
    b.name = "Financier";
    b.year = 1912;

    b.PrintBook("Stephen Prata", "C++", "Science fiction");
    b.PrintCountPageYear("Three people in the boat, not counting the dog", 250, 1889);
    b.Year(1997);

    Pen p;
    p.brand = "Bic";
    p.color = "black";
    p.write = false;

    p.LeaveOrThrowAway(true);
    p.Print();

    Banknote B;
    B.denomination = 50;
    B.old_new = true;
    B.year = 2003;

    Wallet w;
    w.brand = "Wiola";
    w.price = 500;
    w.coin_box = true;
    w.color = "red";
    w.count_card_sections = 3;
    w.count_section = 2;

    w.Print();
    w.BayWallet(3, false, "300");

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
