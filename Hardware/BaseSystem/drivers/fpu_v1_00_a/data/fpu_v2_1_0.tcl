##############################################################################
## Filename:          /home/alonso/Linux-on-FPGA/Hardware/BaseSystem/drivers/fpu_v1_00_a/data/fpu_v2_1_0.tcl
## Description:       Microprocess Driver Command (tcl)
## Date:              Sun Nov 30 17:33:47 2014 (by Create and Import Peripheral Wizard)
##############################################################################

#uses "xillib.tcl"

proc generate {drv_handle} {
  xdefine_include_file $drv_handle "xparameters.h" "fpu" "NUM_INSTANCES" "DEVICE_ID" "C_BASEADDR" "C_HIGHADDR" 
}
