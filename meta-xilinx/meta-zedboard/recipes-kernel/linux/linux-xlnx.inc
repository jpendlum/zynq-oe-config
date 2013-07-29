# linux-xlnx specific modifications for zedboard

FILESEXTRAPATHS_prepend := "${THISDIR}/linux-xlnx:"

# Config fragments are either under 
# meta-xilinx/kernel-recipes for common fragments, or
# meta-xilinx/meta-<boardlayer>/kernel-recipes for board specific fragments
SRC_URI_append_zedboard += "file://xilinx_zynq_defconfig_${LINUX_VERSION}.cfg"
SRC_URI_append_zedboard += "file://nortc.cfg"
SRC_URI_append_zedboard += "file://zynq-zed-user-peripheral.dts"
SRC_URI_append_zedboard += "file://zynq-zed.dtsi"

KERNEL_DEVICETREE_zedboard = "${WORKDIR}/zynq-zed-user-peripheral.dts"

COMPATIBLE_MACHINE_zedboard = "zedboard"
