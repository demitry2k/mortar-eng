How to build:

1) Use Fedora OS (I used Fedora WSL under Windows)
2) First run this in console to install all dependencies:
   sudo dnf install git cmake tsl-sparse-map-devel g++ sdl2-devel
4) Then clone the repository with:
   git clone https://github.com/leftmostcat/mortar-eng.git
6) (NO NEED TO CD INTO THE DIRECTORY)
   Then use cmake to build the project and compile it:
   cmake -DCMAKE_BUILD_TYPE=Release -S mortar-eng/ -B mortar-eng/build/
   cmake --build mortar-eng/build/
7) copy the "lego_data" folder from your LSW: The Video Game directory to the root directory next to the "mortar-eng" folder

How to run:
1) Run the command:
   exec mortar-eng/build/mortar
