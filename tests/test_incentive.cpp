#include <gtest/gtest.h>
#include "SoftwareEngineer.hpp"
#include "SalesPerson.hpp"
#include "CustomerSupporter.hpp"
#include "IncentiveCalculationVisitor.hpp"
#include "Calculate.hpp"
#include <vector>

TEST(VisitorPattern, IncentiveCalculation) {
    SoftwareEngineer se;
    SalesPerson sp;
    CustomerSupporter cs;
    IncentiveCalculationVisitor v;
    std::vector<Employee*> employees{&se, &sp, &cs};
    std::vector<EmployeeVisitor*> visitors{&v};
    Calculate(employees, visitors);
    // 40*2+20 + 8000*0.01 + 60 = 100 + 80 + 60 = 240
    EXPECT_EQ(v.GetTotalIncentive(), 240);
}
