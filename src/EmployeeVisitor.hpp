#pragma once
class SoftwareEngineer;
class SalesPerson;
class CustomerSupporter;

class EmployeeVisitor {
public:
    virtual ~EmployeeVisitor() = default;
    virtual void VisitSoftwareEngineer(SoftwareEngineer&) = 0;
    virtual void VisitSalesPerson(SalesPerson&) = 0;
    virtual void VisitCustomerSupporter(CustomerSupporter&) = 0;
};
