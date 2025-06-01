#pragma once
#include "EmployeeVisitor.hpp"
#include "SoftwareEngineer.hpp"
#include "SalesPerson.hpp"
#include "CustomerSupporter.hpp"
#include <iostream>
class PrintInformationVisitor : public EmployeeVisitor {
public:
    void VisitSoftwareEngineer(SoftwareEngineer& se) override {
        std::cout << "--- Information of Software Engineer ---\n";
        std::cout << "Software Quality       : " << se.GetSoftwareQuality() << std::endl;
        std::cout << "Business Comprehension : " << se.GetBusinessComprehension() << std::endl;
    }
    void VisitSalesPerson(SalesPerson& sp) override {
        std::cout << "--- Information of Sales Person ---\n";
        std::cout << "Sales Volume : " << sp.GetSalesVolume() << std::endl;
    }
    void VisitCustomerSupporter(CustomerSupporter& cs) override {
        std::cout << "--- Information of Customer Supporter ---\n";
        std::cout << "Customer Satisfaction : " << cs.GetCustomerSatisfaction() << std::endl;
    }
};
