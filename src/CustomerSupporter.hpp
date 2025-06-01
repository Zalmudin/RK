#pragma once
#include "Employee.hpp"
#include <cstdint>
class CustomerSupporter : public Employee {
public:
    void Accept(EmployeeVisitor& visitor) override { visitor.VisitCustomerSupporter(*this); }
    std::uint64_t GetCustomerSatisfaction() const { return 60; }
};
