#include <iostream>
using namespace std;
int count=0;
class Person{
protected:
    string Name,Sex;
    short int Age,Heft;
public:
    Person(string n,string s,short int a,short int h) : Name(n),Sex(s),Age(a),Heft(h) {count++;}
    void setName(string name){
        this->Name = name;
//        cout <<"��� ᬥ������ �� :" <<this->Name << endl;
    }
//    void setSex(string *Sex){    //�� � ⠪�� ��࠭��� ��� ����...
//        this->Sex = *Sex;
//        cout <<"��� ᬥ����� �� :" <<this->Sex << endl;
//    }
    void setAge(int age){
        this->Age = age;
    }
    void setHeft(int h){
        this->Heft = h;
    }
    void print() const { cout << Name << "  " << Sex << "  ������:" << Age << "  ���:" << Heft << endl;}
};
class Student : public Person {
protected:
    short int Year;
public:
    Student(string n,string s,short int a,short int h,short int y) : Person(n,s,a,h), Year(y)  {}
    void setYear(int *x){this->Year=*x;}
    void nextYear(){Year++;}

};
void m1ain()
{
    Student man("Piter","M",18,78,1),woman("jesica","W",21,55,3);
    woman.setName("Jesica");
    man.print();
    woman.print();
    cout <<"������⢮ ��㤥�⮢ :" <<count << endl;
    //return 0;
}


class Fruit{
protected:
    string name,color;
public:
    Fruit(string n,string c) : name(n),color(c){}
    void setName(string n){name=n;}
    void setColor(string n){color=n;}
    string getName(){return name;}
    string getColor(){return color;}

};
class Apple : public Fruit{
public:
    Apple(string n) : Fruit("Apple",n) {}

};
class Banana : public Fruit{
    public:
    Banana() : Fruit("Banana","yellow") {}
};
class GrannySmith : public Apple{
    public:
    GrannySmith() : Apple("green"){setName("Granny Smith apple");}
    void setName(string n){name=n;}
};
void m2ain()
{
    Apple a("red");
    Banana b;
    GrannySmith c;

    std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
    std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
    std::cout << "My " << c.getName() << " is " << c.getColor() << ".\n";



}
class User{
//   void //���������
//   void //��
//   void //�������
//   void //�����
};
class Dialer{
//    void //���뢠�� �������� �����
//    void //��
};
class Card{
//    void //ࠧ���� �����
};

class coockies{}; //�⠢��

void m3ain() {
//    �ࠢ���
//    ���� ��ப� - ᮡ��� ���, �㬬� �窮� � ���ன �ॢ�蠥� �㬬� �窮� � �����. ����� ᮡ��� �� ����� 21 �窮�, � ���� ��砥 ��ப �ந�ࠥ� (��ॡ��).
//    ��� ���� �ᯮ������ ���� �⠭������ ����� �� 52 ����. ��� ����� � ��� ��ப ������ ᤥ���� �⠢��. ��᫥ ⮣� ��� �� �⠢�� ᤥ����, ����� ࠧ���� ��ப�� �� ��� ����� � �������, � ᥡ� ���� ������� � ���� �������� �����.
//    ��᫥ ⮣� ��� ��ப � ����� �����訫� ���� �����, �ࠢ�������� ���祭�� 䨭����� �� ����� � ��ப�. �᫨ �㬬� �窮� � ��ப� �����, 祬 � �����, � �� ����砥� �믫��� 1 � 1 �� ᢮�� �⠢��. �᫨ �㬬� �窮� ࠢ�� (�� �᪫�祭��� ������), � �� ����� � ��ப� �����頥��� ��� �⠢��. �᫨ �� ����� ���ࠫ ����� �窮�, � ��ப �ந��뢠��.
//    ������
//    �᫨ ���� ��� ����� � �㬬� ���� 21 �窮, � ⠪�� ��������� ���뢠���� ������. �᫨ ����� ᮡࠫ ������, � �� ��ப� �ந��뢠��, �஬� ��, � ���� ⮦� ������. ����� ��砩 ��⠥��� ���쥩, � �⠢�� �����頥��� ��ப�.
//    �᫨ ��ப ᮡࠫ ������, � ����� ���, � ��ப �먣�뢠�� � ����砥� �믫��� 3 � 2 �� ᢮�� �⠢��.
//    �᫨ ������ ���� ����� �⮨� 10 �窮�, � ����� ᬮ��� ᢮� �������� �����. � ��砥 �᫨ ᮡࠫ��� ��������� ������, ����� ���뢠�� ᢮� ����� � �㭤 ���� �����稢�����.
//    ����⢨� ��ப�
//    �᫨ � ����� � ��ப� ��� �������, �, ����稢 �����, ��ப ����� ����� ���� �� ��᪮�쪨� ����⢨�.
//    ?���������?. ����㯭�, ⮫쪮 �᫨ � �㪥 ��� ����� ������ ���⮨��⢠. ��ப �㡫���� ᢮� �⠢��, ࠧ����� ��� �� ���, ������ ��� �������⥫�� �����. ����� �� �㪨 ����� ������ᨬ�.
//    ?��?. ��ப ���� �������⥫��� �����. �� ����⢨� ����� ��������, ���� �㬬� �窮� �� �ॢ�蠥� 21
//    ?�������?. ��ப 㤢������ ᢮� �⠢��, ���� ஢�� ���� �������⥫��� ����� � 䨪���� ᢮� �����.
//    ?�����?. ��ப 䨪���� ᢮� �����.
//    �᫨ ��ப ���ࠫ ����� 21 �窮�, � �� �ந��뢠�� �㭤.
//    �����
//    ��᫥ ⮣� ��� ��ப� ��䨪�஢��� ᢮� �����, ����� ���뢠�� �������� �����.
//    �� ����室����� ����� ���� �������⥫�� ����� �� �� ���, ���� �㬬� �窮� �� �㤥� 17 ��� ���. �᫨ ������⢮ �窮� ����� �ॢ��� 21, � �� �����訥 ��ப� ��⮬���᪨ �먣�뢠��, ��� ����ᨬ��� �� ������⢠ �窮�.
//    ���客��
//    �ᮡ� ��砩: �᫨ � ����� ������ ���� ��, � ��ப�� �㤥� �।������ �������⥫쭠� �⠢�� ?���客��?, ࠢ��� �������� �� �᭮���� �⠢��. ��᫥ ⮣� ��� �� ��ப� �ਭ﫨 �襭��, ����� ᬮ��� ᢮� �������� �����. � ��砥, �᫨ ����� ᮡࠫ ������, � �� �⠢��� ?���客��? �믫�稢����� �먣��� 2 � 1. �᫨ � ����� �� ������, �⠢�� ?���客��? �室�� � ����, ��� �த�������� ��� ���筮.



}



int main(){
m1ain();
m2ain();

return 0;
}
