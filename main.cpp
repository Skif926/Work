#include <iostream>
#include <memory>
using namespace std;

class Date{
private:
    int Day,Mounth,Year;
public:
    Date(int x,int y,int z):Day(x),Mounth(y),Year(z){}
    Date(){}
    int getDay(){return Day;}
    int getMounth(){return Mounth;}
    int getYear(){return Year;}
    void setDay(int x){Day=x;}
    void setMounth(int x){Mounth=x;}
    void setYear(int x){Year=x;}
    friend ostream &operator<< (ostream &out, const Date &t);
};
ostream &operator<< (ostream &out, const Date &t){
    out<<t.Day<<"."<<t.Mounth<<"."<<t.Year;
    return out;
}


int More(unique_ptr<Date> &a1,unique_ptr<Date> &a2){

    if (a1->getYear()>a2->getYear())return a1->getDay();
    else if(a1->getYear()<a2->getYear())return a2->getDay();
    else {
        if (a1->getMounth()>a2->getMounth())return a1->getDay();
        else if (a1->getMounth()<a2->getMounth())return a2->getDay();
        else {
            if (a1->getDay()>a2->getDay())return a1->getDay();
            else return a2->getDay();
        }
    }
}

void Change(unique_ptr<Date>&a1,unique_ptr<Date>&a2){
    unique_ptr<Date>a3(move(a1));
    unique_ptr<Date>a4(move(a2));
    a1=move(a4);
    a2=move(a3);
}


int main()
{
    unique_ptr<Date> today(new Date);
    today->setDay(1);
    today->setMounth(1);
    today->setYear(2000);
    cout << *today<<endl;
    unique_ptr<Date> date(move(today));
    cout<<*date<<endl;
    if (today)cout<<"+"<<endl;else cout<<"-"<<endl;
    if (date)cout<<"+"<<endl;else cout<<"-"<<endl;
    unique_ptr<Date>date1(new Date(1,2,2003)),date2(new Date(15,2,2003));
    cout<<More(date1,date2)<<endl;
    cout<<*date1<<endl;
    cout<<*date2<<endl;
    Change(date1,date2);
    cout<<*date1<<endl;
    cout<<*date2<<endl;



    return 0;
}
