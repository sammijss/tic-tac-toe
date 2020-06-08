# tic-tac-toe

[2020-06-08 11:04.09]  /media/c/Users/ssrivastava1/OneDrive/SAMMI/STUDY/Git/Repository/tic-tac-toe
[SSrivastava1.59682X2] ➤ ll
total 9
-rw-r--r--+ 1 SSrivastava1 UsersGrp 361 Jun  8 10:43 CMakeLists.txt
drwxr-xr-x+ 1 SSrivastava1 UsersGrp   0 Jun  8 11:01 inc
drwxr-xr-x+ 1 SSrivastava1 UsersGrp   0 Jun  8 11:03 src
                                                                                                                                                                                         ✔
──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────
[2020-06-08 11:04.11]  /media/c/Users/ssrivastava1/OneDrive/SAMMI/STUDY/Git/Repository/tic-tac-toe
[SSrivastava1.59682X2] ➤ cmake CMakeLists.txt
-- TicTacToeGame Project by Sammi
-- The C compiler identification is GNU 4.9.2
-- The CXX compiler identification is GNU 4.9.2
CMake Warning at /bin/Modules/Platform/CYGWIN.cmake:15 (message):
  CMake no longer defines WIN32 on Cygwin!

  (1) If you are just trying to build this project, ignore this warning or
  quiet it by setting CMAKE_LEGACY_CYGWIN_WIN32=0 in your environment or in
  the CMake cache.  If later configuration or build errors occur then this
  project may have been written under the assumption that Cygwin is WIN32.
  In that case, set CMAKE_LEGACY_CYGWIN_WIN32=1 instead.

  (2) If you are developing this project, add the line

    set(CMAKE_LEGACY_CYGWIN_WIN32 0) # Remove when CMake >= 2.8.4 is required

  at the top of your top-level CMakeLists.txt file or set the minimum
  required version of CMake to 2.8.4 or higher.  Then teach your project to
  build on Cygwin without WIN32.
Call Stack (most recent call first):
  /bin/Modules/CMakeSystemSpecificInformation.cmake:36 (INCLUDE)
  CMakeLists.txt:10 (project)


-- Check for working C compiler: /bin/gcc.exe
-- Check for working C compiler: /bin/gcc.exe -- works
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working CXX compiler: /bin/c++.exe
-- Check for working CXX compiler: /bin/c++.exe -- works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Configuring done
-- Generating done
-- Build files have been written to: /media/c/Users/ssrivastava1/OneDrive/SAMMI/STUDY/Git/Repository/tic-tac-toe
                                                                                                                                                                                         ✔
──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────
[2020-06-08 11:04.32]  /media/c/Users/ssrivastava1/OneDrive/SAMMI/STUDY/Git/Repository/tic-tac-toe
[SSrivastava1.59682X2] ➤ ll
total 37
-rw-r--r--+ 1 SSrivastava1 UsersGrp  1561 Jun  8 11:04 cmake_install.cmake
-rw-r--r--+ 1 SSrivastava1 UsersGrp 11880 Jun  8 11:04 CMakeCache.txt
drwxr-xr-x+ 1 SSrivastava1 UsersGrp     0 Jun  8 11:04 CMakeFiles
-rw-r--r--+ 1 SSrivastava1 UsersGrp   361 Jun  8 10:43 CMakeLists.txt
drwxr-xr-x+ 1 SSrivastava1 UsersGrp     0 Jun  8 11:01 inc
-rw-r--r--+ 1 SSrivastava1 UsersGrp  5559 Jun  8 11:04 Makefile
drwxr-xr-x+ 1 SSrivastava1 UsersGrp     0 Jun  8 11:03 src
                                                                                                                                                                                         ✔
──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────
[2020-06-08 11:04.35]  /media/c/Users/ssrivastava1/OneDrive/SAMMI/STUDY/Git/Repository/tic-tac-toe
[SSrivastava1.59682X2] ➤ make
Scanning dependencies of target tic-tac-toe
[ 50%] Building CXX object CMakeFiles/tic-tac-toe.dir/src/main.o
[100%] Building CXX object CMakeFiles/tic-tac-toe.dir/src/TicTacToeGame.o
Linking CXX executable tic-tac-toe.exe
[100%] Built target tic-tac-toe
