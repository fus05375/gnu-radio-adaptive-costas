"# gnu-radio-adaptive-costas" 
new funcionality implemented in cpp

based on paper:
"A Low-Noise Fast-Lock Phase-Locked Loop with
Adaptive Bandwidth Control by
Joonsuk Lee, Student Member, IEEE, and Beomsup Kim, Senior Member, IEEE"

pdf included

to add this block to gnuradio use:
copy whole path to new folder named "gr-costas"

cd gr-costas/

mkdir build

cd build/

cmake ../

make

sudo make install

sudo ldconfig
