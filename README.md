# boostDate
Describes how to use the lib of boost to deal with Date

1) Download the lib of Boost (boost_1_60_0.zip for instance)
A link that can be used is:
https://www.boost.org/users/history/version_1_60_0.html

2) Unpack the file.
3) Access the unpacked folder with terminal.
4) Execute bootstrap.bat or bootstrap.sh
5) Execute .\b2
6) Open the project of Date with boost with the QT;
7) Update the pro file with the link of where is the boost in your pc, 

In my case is:
INCLUDEPATH += ../../../Boost/boost_1_60_0

8) Build and enjoy.