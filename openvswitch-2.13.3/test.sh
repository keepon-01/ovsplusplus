
ovs-ctl stop
rmmod openvswitch
make clean
make -j16
make install
rm /lib/modules/4.15.0-142-generic/extra/openvswitch.ko
make modules_install
modprobe openvswitch
modprobe -D openvswitch
rm -rf /usr/local/etc/openvswitch
mkdir -p /usr/local/etc/openvswitch
ovsdb-tool create /usr/local/etc/openvswitch/conf.db vswitchd/vswitch.ovsschema
ovs-ctl start
