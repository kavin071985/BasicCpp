
#include <iostream>
#include <string>
#include <memory>

class Entity
{
private:
    std::string m_name;
    int m_age;
public:
    Entity() : m_name("kavin"), m_age(5)
    {
        std::cout << m_name << "of age" << m_age << std::endl;
    }
    
    ~Entity() 
    {
        std::cout <<"destroyed object"<< std::endl;
    }
    void Print() {};
};


int main()
{
	std::shared_ptr<Entity> s2
    {
     //std::unique_ptr<Entity> e(new Entity());// creats new & assigns to ptr
     std::unique_ptr<Entity> entity = std::make_unique<Entity>(); //better one to avoid dangling ptr & memory leak
     std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>(); //don't std::shared_ptr<Entity> e(new Entity());new & refrncounter at diff location
       s2= sharedEntity;
        e->Print();
    }
    return 0;

}
