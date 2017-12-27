#ifndef STACKLIS_H
#define STACKLIS_H

#include <stddef.h>
#include <iosfwd>
#include <memory>

class StackLis
{
public:
    ~StackLis();
    StackLis() = default;
    StackLis(const StackLis& rhs);

    StackLis& operator=(const StackLis& rhs);

    void push(const int& value);
    void pop();
    bool isEmpty() const;

    int& top();
    const int& top() const;

    std::ostream& writePop(std::ostream& ostrm);

private:
    struct Node
    {
        Node(std::unique_ptr<Node> pNext, const int& value);
        std::unique_ptr<Node> pNext_{ nullptr };
        int pData_{ int(0) };
    };

    std::unique_ptr<Node> pHead_{ nullptr };
};

std::ostream& operator<<(std::ostream& ostrm, StackLis& rhs);

#endif // !STACKLIS_H