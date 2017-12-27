#ifndef MATRIXR_H
#define MATRIXR_H

#include <stddef.h>
#include <iosfwd>

class MatrixR
{
public:
    MatrixR() = default;
    MatrixR(const int row, const int col);
    MatrixR(const MatrixR& rhs);
    ~MatrixR();
    int lenth() const;

    MatrixR& operator=(const MatrixR& rhs);
    MatrixR operator*(const MatrixR& rhs) const;
    bool operator==(const MatrixR& rhs) const;
    bool operator!=(const MatrixR& rhs) const;

    MatrixR& resize(const ptrdiff_t r, const ptrdiff_t c);
    int& at(const ptrdiff_t iRow, const ptrdiff_t iCol);
    const int& at(const ptrdiff_t iRow, const ptrdiff_t iCol) const;

    std::ostream& writeTo(std::ostream& ostrm) const;
    
private:
    ptrdiff_t nRow{ 0 };
    ptrdiff_t nCol{ 0 };
    int** pRows_{ nullptr };
    void swap(MatrixR& lhs, MatrixR& rhs);
};

std::ostream& operator<<(std::ostream& ostrm, const MatrixR& rhs);

#endif 