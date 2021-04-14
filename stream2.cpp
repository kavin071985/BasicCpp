#include <iostream>
#include <string>
#include <fstream>

class String {
private:
	char* m_Buffer;
	unsigned int m_Size;
public:
	String(const char* str) : m_Size(strlen(str)), m_Buffer(new char[m_Size + 1])
	{
		memcpy(m_Buffer, str, m_Size);
		m_Buffer[m_Size] = 0;
	}
	String(const String& other) : m_Size(other.m_Size)
	{
		m_Buffer = new char[m_Size + 1];
		memcpy(m_Buffer, other.m_Buffer, m_Size + 1);

	}

	~String()
	{
		delete[] m_Buffer;
	}
	char& operator[](int i)
	{
		return m_Buffer[i];
	}

	friend std::ostream& operator<<(std::ostream& stream, const String& str); //std::cout << string << std::endl;

};
std::ostream& operator<<(std::ostream& stream, const String& str)
{
	stream << str.m_Buffer;
	return stream;
}

void main()
{
	String string = "kavin";
	String second = string;

	second[2] = "e";
	std::cout << string << std::endl;
	std::cout << second << std::endl;

}