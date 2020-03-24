GET PROJECT
git clone https://github.com/FlorinRosu/glutengine.git
cd glutengine 

LINUX:
1. Make sure you have installed glut development package. They are already install on UBUNTU machines from the university.
sudo apt-get install freeglut3-dev 

2. Compile engineGlut shared library:
cd engineGlut/; make; cd -;

3. Copy the EngineGlut.h and libengineGlut.so in test folder and compile:
cp engineGlut/EngineGlut.h engineGlut/libengineGlut.so testEngine/ 
cd testEngine/
make

4. Set engine library runtime:
export LD_LIBRARY_PATH=./:$LD_LIBRARY_PATH

5. Run
./drawings

LINUX/WINDOWS using codeblocks

