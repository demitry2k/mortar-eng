How to build:

Use Fedora OS (I used Fedora WSL under Windows)
First run this in console to install all dependencies: sudo dnf install git cmake tsl-sparse-map-devel g++ sdl2-devel
Then clone the repository with: git clone https://github.com/leftmostcat/mortar-eng.git
(NO NEED TO CD INTO THE DIRECTORY) Then use cmake to build the project and compile it: cmake -DCMAKE_BUILD_TYPE=Release -S mortar-eng/ -B mortar-eng/build/ cmake --build mortar-eng/build/
copy the "lego_data" folder from your LSW: The Video Game directory to the root directory next to the "mortar-eng" folder
