Note that the contained build folder was compiled on my machine using Arch Linux. 

To set-up your computer (Commands are specified in terms of yaourt tool on Arch Linux)

      yaourt -S qtcreator
      yaourt -S qt5

To build it on your machine:

-Clone this directory:

      git clone https://github.com/bensterl15/JTProject

-Make a build directory on the same layer as this readme:
      
      cd JTProject
      mkdir build

-Move into this directory:
      
      cd build

-Run: 
      
      qmake ../JTProject/JTProject.pro  (this generates a Makefile in the build directory)

-Run: make (this generates an executable JTProject in the build folder)

      -If this complains that C++11 is not installed, edit the Makefile in build directory as follows (then run the make command again afterwards)

      Turn  "CXX              = g++"    to      "CXX                  = g++ --std=c++11"

-Run:
      
      ./JTProject (this runs the application)
