#include <iostream>


class User {

    public:
        User(std::string name):
            m_name(name),
            m_ID(classCounter)
            {
                classCounter += 1;
            }
        
        static int classCounter;

        void print();

    private:
        std::string const m_name;
        int  const m_ID;
};