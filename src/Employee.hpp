#pragma once
#include "EmployeeVisitor.hpp"
class Employee {
public:
    virtual ~Employee() = default;
    virtual void Accept(EmployeeVisitor&) = 0;
};
