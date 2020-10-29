#include <iostream>
#include <cstdint >
using namespace std;

class Power{
private:
    int Number1;
    int Number2;
public:
    Power(){
        Number1 = 2;
        Number2 = 5;
    }
    void set(int a1, int a2 ){
        Number1 = a1;
        Number2 = a2;
    }
    void calculate(){
        int a3=1;
        for (int i=0; i<Number2 ;i++){a3 = a3*Number1;};
        cout << a3<< endl;
    }
};
class RGBA{
  private:
  std::uint8_t m_red,m_green,m_blue,m_alpha;
public:
  RGBA(){
    m_red=0;
    m_green=0;
    m_blue=0;
    m_alpha=255;
  }
  RGBA(uint8_t red,uint8_t green,uint8_t blue,uint8_t alpha){
      m_red=red;
      m_green=green;
      m_blue=blue;
      m_alpha=alpha;
  }
  void print(){
  cout << m_red<<"/"<<m_green<<"/"<<m_blue<<"/"<<m_alpha<< endl;
  }

};
class Stack{
private:
 int s_arr[10],count;
public:
 void push(int i){
     if (count <10 && count >=0){
     s_arr[count]=i;
     count++;
     cout <<"true"<<endl;
     }
     else {cout <<"false"<<endl;}
 }
 void reset(){
     count = 0;
     for(int i=0;i<10;i++){s_arr[i]=0;};
 }
 void print(){
     cout<<"( ";
     for(int i=0;i<count;i++){
         cout<<s_arr[i]<<" ";
     };
     cout<<")"<<endl;
 }
 void pop(){
 if (count>0){
     s_arr[count]=0;
     count--;
 }
 }
};







int main()
{
    Power Iam;
    Iam.calculate();
    RGBA a(1,2,34,4);
    a.print();
    Stack stack;
        stack.reset();
        stack.print();

        stack.push(3);
        stack.push(7);
        stack.push(5);
        stack.print();

        stack.pop();
        stack.print();

        stack.pop();
        stack.pop();
        stack.print();

        return 0;

};
