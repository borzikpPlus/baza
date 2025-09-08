#include <iostream>


using namespace std;

class Laptop
{
private:
    char* model;
    char* color;

    double size;
    double price;

public:
    Laptop();
    Laptop(const char* model, const char* color, double size, double price);
    ~Laptop();

    void SetModel(const char* model);
    char* GetModel();
    void SetColor(const char* color);
    char* GetColor();
    void SetSize(double size);
    double GetSize();
    void SetPrice(double price);
    double GetPrice();

    void Print(const char* str)
    {
        cout << str << endl;
    }

    void Print(double num)
    {
        cout << num << endl;
    }

    void Print()
    {
        cout << "Model: " << model << endl;
        cout << "Color: " << color << endl;
        cout << "Size: " << size << endl;
        cout << "Price: " << price << endl;
    }

    void Init();


};





Laptop::Laptop()
{
    model = nullptr;
    color = nullptr;

    size = 0;
    price = 0;
    cout << "Constructor by default\n\n\n";
}
Laptop::Laptop(const char* model, const char* color, double size, double price)
{
    if (this->model != nullptr)
    {
        delete[] this->model;
    }
    this->model = new char[strlen(model) + 1];
    strcpy_s(this->model, strlen(model) + 1, model);


    if (this->color != nullptr)
    {
        delete[] this->color;
    }
    this->color = new char[strlen(color) + 1];
    strcpy_s(this->color, strlen(color) + 1, color);

    this->size = size;
    this->price = price;

}
Laptop::~Laptop()
{
    if (model != nullptr)
    {
        delete[] model;
    }
    if (color != nullptr)
    {
        delete[] color;
    }

    cout << "\n\n\nDestructor\n\n";
}


void Laptop::SetModel(const char* name)
{
    if (this->model != nullptr)
    {
        delete[] this->model;
    }
    this->model = new char[strlen(name) + 1];
    strcpy_s(this->model, strlen(name) + 1, name);
}
char* Laptop::GetModel()
{
    return model;
}
void Laptop::SetColor(const char* country)
{
    if (this->color != nullptr)
    {
        delete[] this->color;
    }
    this->color = new char[strlen(color) + 1];
    strcpy_s(this->color, strlen(color) + 1, color);
}
char* Laptop::GetColor()
{
    return color;
}
void Laptop::SetSize(double size)
{
    if (size < 0)
    {
        this->size = 0;
        return;
    }
    this->size = size;
}
double Laptop::GetSize()
{
    return size;
}
void Laptop::SetPrice(double price)
{
    if (price < 0)
    {
        this->price = 0;
        return;
    }
}
double Laptop::GetPrice()
{
    return price;
}
void Laptop::Init()
{
    model = new char[256];
    cout << "Enter model: ";
    cin >> model;

    color = new char[256];
    cout << "Enter color: ";
    cin >> color;

    cout << "Enter size (inch): ";
    cin >> size;

    cout << "Enter price: ";
    cin >> price;
}

int main()
{
    Laptop a1("Asus", "Black", 10, 35000);
    a1.Print();
    cout << endl;

    a1.Init();
    cout << endl;
    a1.Print();

    int a;

    return 0;
}

