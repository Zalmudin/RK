#pragma once
#include "Employee.hpp"
#include "EmployeeVisitor.hpp"
#include <vector>
void Calculate(const std::vector<Employee*>& employees, const std::vector<EmployeeVisitor*>& visitors) {
    for (auto employee : employees)
        for (auto visitor : visitors)
            employee->Accept(*visitor);
}
