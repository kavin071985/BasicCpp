#include <iostream>

 
class Rational
{
public:
    int num, denum;
public:
    Rational (int num = 1, int denum = 1)
    {
        this->num = num;
        if (denum != 0)
        {
            this->denum = denum;
        }
        else
        {
            std::cout << "invalid number";
        }
    }
    Rational(Rational& ratl)
    {
        this->num = ratl.num;
        this->denum = ratl.denum;
    }
    friend Rational operator +(Rational r1, Rational r2);
    
    friend Rational operator*(Rational r1, Rational r2);
   
};
Rational operator*(Rational r1, Rational r2)
{
    Rational k;
    k.num = r1.num * r2.num;
    k.denum = r1.denum * r2.denum;
    return k;

}
 Rational operator +(Rational r1, Rational r2)
{
    Rational k;
    k.num = r1.num * r2.denum + r2.num * r1.denum;
    k.denum = r1.denum * r2.denum;
    return k;

}

int main()
{
    Rational r1(3, 7);
    Rational r2(5, 4);
    Rational r3, r4;
    r3 = r1 + r2;
    std::cout << "the numerator is" << r3.num << "the denumerator is" << r3.denum << std::endl;


    r4 = r1 * r2;
    std::cout << "the numerator is" << r4.num << "the denumerator is" << r4.denum << std::endl;

}

   
