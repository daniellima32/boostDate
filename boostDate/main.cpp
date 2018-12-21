#include <QCoreApplication>
#include "../../../Boost/boost_1_60_0/boost/date_time/gregorian/gregorian.hpp"
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Incrementar mês

    // Initializing Date object with 1st Jan 1930
    boost::gregorian::date initialDate { 1930, 1, 1 };

    // Printing complete Date object on console
    // Printing complete Date object on console
    std::cout << std::endl << std::endl << "##################################################################" << std::endl;
    std::cout << "Initial Date = " << initialDate << '\n';

    // Initialize days object with 1 Month
    boost::gregorian::months monthObj(1);

    boost::gregorian::date dateTemp = initialDate;

    for (int index = 0; index < 200; ++index)
    {
        std::cout << dateTemp << std::endl;

        // Add 1 Months in date object
        dateTemp = dateTemp + monthObj;
    }

    // Incrementar dia
    // Printing complete Date object on console
    std::cout << std::endl << std::endl << "##################################################################" << std::endl;
    std::cout << "Initial Date = " << initialDate << '\n';

    // Initialize days object with 1 day
    boost::gregorian::days dayObj(1);

    dateTemp = initialDate;

    for (int index = 0; index < 200; ++index)
    {
        std::cout << dateTemp << std::endl;

        // Add 1 day in date object
        dateTemp = dateTemp + dayObj;
    }

    // Incrementar ano
    // Printing complete Date object on console
    std::cout << std::endl << std::endl << "##################################################################" << std::endl;
    std::cout << "Initial Date = " << initialDate << '\n';

    // Initialize days object with 1 day
    boost::gregorian::years yearObj(1);

    dateTemp = initialDate;

    for (int index = 0; index < 200; ++index)
    {
        std::cout << dateTemp << std::endl;

        // Add 1 year in date object
        dateTemp = dateTemp + yearObj;
    }


    return a.exec();
}
