/* $Id: xemaclite_selftest.c,v 1.1.2.1 2008/02/13 10:39:06 svemula Exp $ */
/******************************************************************************
*
*       XILINX IS PROVIDING THIS DESIGN, CODE, OR INFORMATION "AS IS"
*       AS A COURTESY TO YOU, SOLELY FOR USE IN DEVELOPING PROGRAMS AND
*       SOLUTIONS FOR XILINX DEVICES.  BY PROVIDING THIS DESIGN, CODE,
*       OR INFORMATION AS ONE POSSIBLE IMPLEMENTATION OF THIS FEATURE,
*       APPLICATION OR STANDARD, XILINX IS MAKING NO REPRESENTATION
*       THAT THIS IMPLEMENTATION IS FREE FROM ANY CLAIMS OF INFRINGEMENT,
*       AND YOU ARE RESPONSIBLE FOR OBTAINING ANY RIGHTS YOU MAY REQUIRE
*       FOR YOUR IMPLEMENTATION.  XILINX EXPRESSLY DISCLAIMS ANY
*       WARRANTY WHATSOEVER WITH RESPECT TO THE ADEQUACY OF THE
*       IMPLEMENTATION, INCLUDING BUT NOT LIMITED TO ANY WARRANTIES OR
*       REPRESENTATIONS THAT THIS IMPLEMENTATION IS FREE FROM CLAIMS OF
*       INFRINGEMENT, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
*       FOR A PARTICULAR PURPOSE.
*
*       (c) Copyright 2004-2008 Xilinx Inc.
*       All rights reserved.
*
******************************************************************************/
/*****************************************************************************/
/**
*
* @file xemaclite_selftest.c
*
* Function(s) in this file are the required functions for the EMAC Lite
* driver sefftest for the hardware.
* See xemaclite.h for a detailed description of the driver.
*
* <pre>
* MODIFICATION HISTORY:
*
* Ver   Who  Date     Changes
* ----- ---- -------- --------------------------------------------------------
* 1.01a ecm  01/31/04 First release
* 1.11a mta  03/21/07 Updated to new coding style
* </pre>
******************************************************************************/

/***************************** Include Files *********************************/

#include "xio.h"
#include "xemaclite.h"
#include "xemaclite_i.h"

/************************** Constant Definitions *****************************/

/**************************** Type Definitions *******************************/

/***************** Macros (Inline Functions) Definitions *********************/

/************************** Function Prototypes ******************************/

/************************** Variable Definitions *****************************/

/*****************************************************************************/
/**
*
* Performs a SelfTest on the EmacLite device as follows:
*   - Writes to the mandatory TX buffer and reads back to verify.
*   - If configured, writes to the secondary TX buffer and reads back to verify.
*   - Writes to the mandatory RX buffer and reads back to verify.
*   - If configured, writes to the secondary RX buffer and reads back to verify.
*
*
* @param	InstancePtr is a pointer to the XEmacLite instance .
*
* @return
*		- XST_SUCCESS if the device Passed the Self Test.
* 		- XST_FAILURE if any of the data read backs fail.
*
* @note		None.
*
******************************************************************************/
int XEmacLite_SelfTest(XEmacLite * InstancePtr)
{
	u32 BaseAddress;
	u8 Index;
	u8 TestString[4] = { 0xDE, 0xAD, 0xBE, 0xEF };
	u8 ReturnString[4] = { 0x0, 0x0, 0x0, 0x0 };

	/*
	 * Verify that each of the inputs are valid.
	 */
	XASSERT_NONVOID(InstancePtr != NULL);

	/*
	 * Determine the TX buffer address
	 */
	BaseAddress = InstancePtr->EmacLiteConfig.BaseAddress +
			XEL_TXBUFF_OFFSET;

	/*
	 * Write the TestString to the TX buffer in EMAC Lite then
	 * back from the EMAC Lite and verify
	 */
	XEmacLite_AlignedWrite(TestString, (u32 *) BaseAddress,
			       sizeof(TestString));
	XEmacLite_AlignedRead((u32 *) BaseAddress, ReturnString,
			      sizeof(ReturnString));

	for (Index = 0; Index < 4; Index++) {

		if (ReturnString[Index] != TestString[Index]) {
			return XST_FAILURE;
		}

		/*
		 * Zero the return string for the next test
		 */
		ReturnString[Index] = 0;
	}

	/*
	 * If the second buffer is configured, test it also
	 */
	if (InstancePtr->EmacLiteConfig.TxPingPong != 0) {
		BaseAddress += XEL_BUFFER_OFFSET;
		/*
		 * Write the TestString to the optional TX buffer in EMAC Lite
		 * then back from the EMAC Lite and verify
		 */
		XEmacLite_AlignedWrite(TestString, (u32 *) BaseAddress,
				       sizeof(TestString));
		XEmacLite_AlignedRead((u32 *) BaseAddress, ReturnString,
				      sizeof(ReturnString));

		for (Index = 0; Index < 4; Index++) {

			if (ReturnString[Index] != TestString[Index]) {
				return XST_FAILURE;
			}

			/*
			 * Zero the return string for the next test
			 */
			ReturnString[Index] = 0;
		}
	}

	/*
	 * Determine the RX buffer address
	 */
	BaseAddress = InstancePtr->EmacLiteConfig.BaseAddress +
				XEL_RXBUFF_OFFSET;

	/*
	 * Write the TestString to the RX buffer in EMAC Lite then
	 * back from the EMAC Lite and verify
	 */
	XEmacLite_AlignedWrite(TestString, (u32 *) (BaseAddress),
			       sizeof(TestString));
	XEmacLite_AlignedRead((u32 *) (BaseAddress), ReturnString,
			      sizeof(ReturnString));

	for (Index = 0; Index < 4; Index++) {

		if (ReturnString[Index] != TestString[Index]) {
			return XST_FAILURE;
		}

		/*
		 * Zero the return string for the next test
		 */
		ReturnString[Index] = 0;
	}

	/*
	 * If the second buffer is configured, test it also
	 */
	if (InstancePtr->EmacLiteConfig.RxPingPong != 0) {
		BaseAddress += XEL_BUFFER_OFFSET;
		/*
		 * Write the TestString to the optional RX buffer in EMAC Lite
		 * then back from the EMAC Lite and verify
		 */
		XEmacLite_AlignedWrite(TestString, (u32 *) BaseAddress,
				       sizeof(TestString));
		XEmacLite_AlignedRead((u32 *) BaseAddress, ReturnString,
				      sizeof(ReturnString));

		for (Index = 0; Index < 4; Index++) {

			if (ReturnString[Index] != TestString[Index]) {
				return XST_FAILURE;
			}

			/*
			 * Zero the return string for the next test
			 */
			ReturnString[Index] = 0;
		}
	}

	return XST_SUCCESS;
}
