Note that the contained build folder was compiled on my machine using Arch Linux. 

To build it on your machine: (Note you must install qt5 before proceeding)

-Clone this directory

-Make a build directory on the same layer as this readme (mkdir build)

-Move into this directory (cd build)

-Run: qmake ../JTProject/JTProject.pro  (this generates a Makefile in the build directory)

-Run: make (this generates an executable JTProject in the build folder)

-Run: ./JTProject (this runs the application)
