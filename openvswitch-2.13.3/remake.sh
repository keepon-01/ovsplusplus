cd /home/fuiyoh/Desktop/experiment/openvswitch-2.13.3
./boot.sh
make clean
./configure --with-linux=/lib/modules/`uname -r`/build
make
make install
make modules_install
