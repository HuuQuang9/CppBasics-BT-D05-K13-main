

#include <iostream>
#include <string>

using namespace std;

class intarr {
private:
    int * m_array{};
    int m_length{};


public:
    //contructor
    intarr(int length) {
        m_array = new int[length] {};
        m_length = length;
    }
    //destructor
    ~intarr() {
        delete[] m_array;
    }

    //methods
    void setvalue(int index, int value) {
        m_array[index] = value;
    }

    int getvalue(int index) {
        return m_array[index];
    }
    
    int getlength() {
        return m_length;
    }
};


int main()
{
    intarr ar(10);//allocate 10 elements

    for (int count{ 0 }; count < ar.getlength(); ++count) {
        ar.setvalue(count, count + 1);
    }

    cout << "value of element 5: " << ar.getvalue(5) <<'\n';


}//destructor called here

