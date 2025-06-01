#pragma once
#include "Employee.hpp"
#include <cstdint>
class SoftwareEngineer : public Employee {
public:
    void Accept(EmployeeVisitor& visitor) override { visitor.VisitSoftwareEngineer(*this); }
    std::uint64_t GetSoftwareQuality() const { return 40; }
    std::uint64_t GetBusinessComprehension() const { return 20; }
};
