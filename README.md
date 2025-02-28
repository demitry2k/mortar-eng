> [!NOTE]
> **Keep in mind that the project is not finished.**
## Instructions
How to build:
1) Use Fedora OS (Fedora WSL under Windows also works) <br />
2) First run this in console to install all dependencies: <br />
   `sudo dnf install git cmake tsl-sparse-map-devel g++ sdl2-devel` <br />
4) Then clone the repository with: <br />
   `git clone https://github.com/leftmostcat/mortar-eng.git` <br />
6) (NO NEED TO CD INTO THE DIRECTORY) Then use cmake to build the project and compile it: <br />
   `cmake -DCMAKE_BUILD_TYPE=Release -S mortar-eng/ -B mortar-eng/build/` <br />
   `cmake --build mortar-eng/build/` <br />
7) copy the "lego_data" folder from your LSW: The Video Game directory to the root directory next to the "mortar-eng" folder <br />

How to run:
1) Run the command:
   `exec mortar-eng/build/mortar`

## Screenshot
![image](https://github.com/user-attachments/assets/931eb0b4-7ef8-4b5f-a2ef-130e3b702535)


