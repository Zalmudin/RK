#pragma once
#include "Employee.hpp"
#include <cstdint>
class SalesPerson : public Employee {
public:
    void Accept(EmployeeVisitor& visitor) override { visitor.VisitSalesPerson(*this); }
    std::uint64_t GetSalesVolume() const { return 8000; }
};
