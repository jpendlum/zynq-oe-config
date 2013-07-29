# linux-xlnx specific modifications for zc706

FILESEXTRAPATHS_prepend := "${THISDIR}/linux-xlnx:"

# Config fragments are either under
# meta-xilinx/kernel-recipes for common fragments, or
# meta-xilinx/meta-<boardlayer>/kernel-recipes for board specific fragments
SRC_URI_append_zc706 += "file://xilinx_zynq_defconfig_${LINUX_VERSION}.cfg"
SRC_URI_append_zc706 += "file://rtc_3.8.cfg"
SRC_URI_append_zc706 += "file://zynq-zc706-user-peripheral.dts"

KERNEL_DEVICETREE_zc706 = "${WORKDIR}/zynq-zc706-user-peripheral.dts"

COMPATIBLE_MACHINE_zc706 = "zc706"
