#include <iostream>
#include <math.h>
using namespace std;


class Figure{
protected:
    virtual void area()=0;
    void printS(){cout<<"���頤� ࠢ�� :"<<S<<endl;}
    float a,b,S;
    int variant;
    Figure(float a,float b,int i):a(a),b(b),variant(i){}
    ~Figure(){}
};
class Parallelogram : public Figure{
public:
    float h,angle,d1,d2;
    void area() override {
        switch (variant) {
        case 1:
            S = a * h;//���㫠 ���頤� ��ࠫ�����ࠬ�� �� ����� ��஭� � ����
        case 2:
            S = a * b * sin(angle);//���㫠 ���頤� ��ࠫ�����ࠬ�� �� ��� ��஭�� � 㣫� ����� ����
        case 3:
            S = 1/2*d1*d2*sin(angle);//���㫠 ���頤� ��ࠫ�����ࠬ�� �� ��� ��������� � 㣫� ����� ����
        default:
            cout << "������ ��ਠ�� ���" <<endl;
        }
    }
    Parallelogram(float a,float b,float h,float d1,float d2,float angle,int i):Figure(a,b,i),h(h),angle(angle),d1(d1),d2(d2){}
    ~Parallelogram(){printS();}
};
class Circle : public Figure{
protected:
    const double PI = 3.141592653589793;
public:
    Circle(float a,float b,int i):Figure(a,b,i){}
    ~Circle(){printS();}
    void area()override{
        switch (variant) {
        case 1:
            S = PI*pow(a,2); //���㫠 ���頤� ��㣠 �१ ࠤ���
        case 2:
            S = 1/4*PI*pow(b,2);//���㫠 ���頤� ��㣠 �१ �������
        default:
            cout << "������ ��ਠ�� ���" <<endl;
        }



    }
};
class Rectangle : public Parallelogram{
public:
    Rectangle(float a,float b):Parallelogram(a,b,0,0,0,0,0){}
    ~Rectangle(){printS();}
    void area()override{
        S = a*b;
    }
};
class Square : public Parallelogram{
public:
    Square(float a):Parallelogram(a,0,0,0,0,0,0){}
    ~Square(){printS();}
    void area()override{
        S = pow(a,2);
    }
};
class Rhombus : public Parallelogram{
public:
    Rhombus(float a,float h,float d1,float d2,float angle,int i):Parallelogram(a,0,h,d1,d2,angle,i){}
    ~Rhombus(){printS();}
    void area()override{
        switch (variant) {
        case 1:
            S = a*h;//���㫠 ���頤� ஬�� �� ����� ��஭� � ����
        case 2:
            S = pow(a,2)* sin(angle);//���㫠 ���頤� ஬�� �� ����� ��஭� � 㣫�
        case 3:
            S = 1/2*d1*d2;//���㫠 ���頤� ஬�� �� ������ ��� ����������
        default:
            cout << "������ ��ਠ�� ���" <<endl;
        }



    }
};

class Car{
protected:
    string company,model;
public:
    void printC()const {cout<<"����� Car ������ ��������:"<<company<<" ������:"<<model<<endl;}
    void printO()const {cout<<"����� Car ����� ��������:"<<company<<" ������:"<<model<<endl;}
    Car(string company,string model):company(company),model(model){printO();}
    ~Car(){printC();}
};
class PassengerCar :virtual public Car{
public:
    PassengerCar(string a,string b):Car(a,b){printO();}
    ~PassengerCar(){printC();}
    void printC()const  {cout<<"����� PassengerCar ������ ��������:"<<company<<" ������:"<<model<<endl;}
    void printO()const {cout<<"����� PassengerCar ����� ��������:"<<company<<" ������:"<<model<<endl;}
};
class Bus :virtual public Car{
public:
    Bus(string a,string b):Car(a,b){printO();}
    ~Bus(){printC();}
    void printC()const  {cout<<"����� Bus ������ ��������:"<<company<<" ������:"<<model<<endl;}
    void printO()const {cout<<"����� Bus ����� ��������:"<<company<<" ������:"<<model<<endl;}
};
class Minivan :public PassengerCar,public Bus{
public:
    Minivan(string a,string b):Car(a,b),PassengerCar(a,b),Bus(a,b){printO();}
    ~Minivan(){printC();}
    void printC()const{cout<<"����� Minivan ������ ��������:"<<company<<" ������:"<<model<<endl;};
    void printO()const {cout<<"����� Minivan ����� ��������:"<<company<<" ������:"<<model<<endl;}
};

class Fraction{
private:
    int a,b;
    //float count()const {return a/b;}
public:
    Fraction(int a,int b):a(a),b(b){}
    int getA()const {return a;}
    int getB()const {return b;}
    void getcount()const {cout<<a<<"/"<<b<<endl;}
    void setA(int a){this->a=a;}
    void setB(int b){this->b=b;}
};

Fraction operator+ (const Fraction &a,const Fraction &b){return Fraction((a.getA()*b.getB()+b.getA()*a.getB()),(a.getB()*b.getB()));}
Fraction operator- (const Fraction &a,const Fraction &b){return Fraction((a.getA()*b.getB()-b.getA()*a.getB()),(a.getB()*b.getB()));}
Fraction operator* (const Fraction &a,const Fraction &b){return Fraction((a.getA()*b.getA()),(a.getB()*b.getB()));}
Fraction operator/ (const Fraction &a,const Fraction &b){return Fraction((a.getA()*b.getB()),(a.getB()*b.getA()));}
Fraction operator- (const Fraction &a){return Fraction((a.getA()*(-1)),(a.getB()));}
bool operator== (const Fraction &a,const Fraction &b){return a.getA()*b.getB()==b.getA()*a.getB();}
bool operator!= (const Fraction &a,const Fraction &b){return a.getA()*b.getB()!=b.getA()*a.getB();}
//bool operator< (const Fraction &a,const Fraction &b){return a.getA()*b.getB()<b.getA()*a.getB();}
//bool operator> (const Fraction &a,const Fraction &b){return a.getA()*b.getB()>b.getA()*a.getB();}
//bool operator<= (const Fraction &a,const Fraction &b){return a.getA()*b.getB()<=b.getA()*a.getB();}
//bool operator>= (const Fraction &a,const Fraction &b){return a.getA()*b.getB()>=b.getA()*a.getB();}
bool operator< (const Fraction &a,const Fraction &b){return b.getA()*a.getB()>=a.getA()*b.getB();}
bool operator> (const Fraction &a,const Fraction &b){return b.getA()*a.getB()<=a.getA()*b.getB();}
bool operator<= (const Fraction &a,const Fraction &b){return b.getA()*a.getB()>a.getA()*b.getB();}
bool operator>= (const Fraction &a,const Fraction &b){return b.getA()*a.getB()<a.getA()*b.getB();}

class Card{
protected:
    enum suit{Pika,Trefa,Bubna,Cherva};
    enum values{point1,point2,point3,point4,point5,point6,point7,point8,point9,point10,point11}value;
    bool i=0;
public:
    Card():value(point4){}
    void Flip(){if (i)i=false; else i=true;}
    int GetValue(){
        switch (value) {
        case point1:
            return 1;
        case point2:
            return 2;
        case point3:
            return 3;
        case point4:
            return 4;
        case point5:
            return 5;
        case point6:
            return 6;
        case point7:
            return 7;
        case point8:
            return 8;
        case point9:
            return 9;
        case point10:
            return 10;
        case point11:
            return 11;
        }
        return 0;
    }
};




int main()
{
Minivan y("���஫�","���7");
//delete y;  �訡��: cannot delete expression of type 'Minivan'  ��� ��ࠢ��� ?
Fraction x1(3,7),x2(9,2);
Fraction x3 = x1 / x2;
if (x1<x2)x3.getcount();
Card One;
cout<<One.GetValue()<<endl;

    return 0;
}
