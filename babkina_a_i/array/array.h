#ifndef ARRAY_H
#define ARRAY_H

#include <iosfwd>
#include <stddef.h>

class Array
{
public:
    Array();
    Array(const int n);
    Array(const Array& rhs);
    ~Array();

    Array& operator=(const Array& rhs);
    int& operator[](const ptrdiff_t i);
    bool operator==(const Array& rhs) const;
    bool operator!=(const Array& rhs) const;
    const int& operator[](const ptrdiff_t i) const;

    Array& resize(const int n);
    int lenth() const;
    int physicalLenth() const; 
    
    std::ostream& writeTo(std::ostream& ostrm) const;
    void insert(const int n, const int i); 
    void remove(const int i);

private:
    static const int defaultSize = 8;
    static const int max{ 32 }; 
    int physicalSize(const int n); 
    
    ptrdiff_t physSize{ defaultSize * 2 };
    ptrdiff_t size{ defaultSize };
    
    int* pData_{ nullptr };
    void exchange(Array& lhs, Array& rhs);
    
    static const char bktleft{ '{' };
    static const char bktright{ '}' };
    static const char separator{ ',' };
};

std::ostream& operator<<(std::ostream& ostrm, const Array& rhs);
#endif 