#include "SoftwareEngineer.hpp"
#include "SalesPerson.hpp"
#include "CustomerSupporter.hpp"
#include "PrintInformationVisitor.hpp"
#include "IncentiveCalculationVisitor.hpp"
#include "Calculate.hpp"
#include <vector>
#include <iostream>
int main() {
    SoftwareEngineer se_1, se_2;
    SalesPerson sp_1, sp_2, sp_3;
    CustomerSupporter cs_1;

    PrintInformationVisitor printVisitor;
    IncentiveCalculationVisitor incentiveVisitor;

    std::vector<Employee*> employees{&se_1, &se_2, &sp_1, &sp_2, &sp_3, &cs_1};
    std::vector<EmployeeVisitor*> visitors{&printVisitor, &incentiveVisitor};

    Calculate(employees, visitors);

    std::cout << "\n*** Total Incentive : " << incentiveVisitor.GetTotalIncentive() << std::endl;
    return 0;
}
