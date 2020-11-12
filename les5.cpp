#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



template <typename t,typename t2>
class Pair{
private:
    t a;
    t2 b;
public:
    Pair(t a,t2 b):a(a),b(b){}
    t first ()const{return a;}
    t2 second ()const{return b;}
};

template <typename t>
class Pair1:public Pair<t,t>{
public:
    Pair1(t a,t b): Pair<t,t>(a,b){}
};


template <typename t>
class StringValuePair:public Pair<string,t>{
public:
    StringValuePair(string a,t b): Pair<string,t>(a,b){}
};



class Card{
protected:
    enum suit{Pika=1,Trefa,Bubna,Cherva}suit;
    enum values{Tyz=1,Two,Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen,King}value;
    bool i=0;
public:
    Card():suit(Pika),value(Jack){}
    void Flip(){if (i)i=false; else i=true;}
    int GetValue(){return value;}
    int GetSuit(){return suit;}


};

class Hand{
protected:
    vector<Card*>v;
public:
    void Add(Card *card){
        v.push_back(card);
    }
    void Clear(){
        v.clear();
        v.shrink_to_fit();
        //cout<<"Вектор обнулён"<<endl;
    }
    int GetValue(){
        int count=0;
        for(int i=0;i<v.size();i++) {
            if ((v[i]->GetValue()==1)&& (count<=10)) count+=11;
            else if (v[i]->GetValue()>=10)count+=10;
            else count+=v[i]->GetValue();
            //cout<<"Число "<<i<<"="<<v[i]->GetValue()<<endl;
        }
    return count;
    }
};

class GenericPlayer: public Hand{
private:
    string name;
public:
    virtual bool IsHitting()=0;
    bool IsBoosted(){if(GetValue()>21)return true;else return false;}
    void Bust(){if(IsBoosted())cout<<"У игрока "<<name<<" перебор "<<GetValue()<<"очко(а)"<<endl; }
};

















int main()
{
    Pair1<int> p1(6, 9);
    cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';
    const Pair1<double> p2(3.4, 7.8);
    cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';


    Pair<int, double> o1(6, 7.8);
    cout << "Pair: " << o1.first() << ' ' << o1.second() << '\n';

    const Pair<double, int> o2(3.4, 5);
    cout << "Pair: " << o2.first() << ' ' << o2.second() << '\n';

    StringValuePair<int> svp("Amazing", 7);
    std::cout << "Pair: " << svp.first() << ' ' << svp.second() << '\n';



    Hand a;
    Card b;
    a.Add(&b);
    a.Add(&b);
    cout<<a.GetValue()<<endl;
    a.Clear();
    a.Add(&b);
    cout<<a.GetValue()<<endl;





    return 0;
}
