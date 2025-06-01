#pragma once
#include "EmployeeVisitor.hpp"
#include "SoftwareEngineer.hpp"
#include "SalesPerson.hpp"
#include "CustomerSupporter.hpp"
#include <cstdint>
class IncentiveCalculationVisitor : public EmployeeVisitor {
public:
    void VisitSoftwareEngineer(SoftwareEngineer& se) override {
        totalIncentive_ += se.GetSoftwareQuality() * 2 + se.GetBusinessComprehension();
    }
    void VisitSalesPerson(SalesPerson& sp) override {
        totalIncentive_ += static_cast<std::uint64_t>(sp.GetSalesVolume() * 0.01);
    }
    void VisitCustomerSupporter(CustomerSupporter& cs) override {
        totalIncentive_ += cs.GetCustomerSatisfaction();
    }
    std::uint64_t GetTotalIncentive() const { return totalIncentive_; }
private:
    std::uint64_t totalIncentive_{0u};
};
