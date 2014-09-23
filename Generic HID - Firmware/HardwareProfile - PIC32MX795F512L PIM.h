/********************************************************************
 FileName:      HardwareProfile - PIC32MX795F512L PIM.h
 Dependencies:  See INCLUDES section
 Processor:     PIC32 USB Microcontrollers
 Hardware:      PIC32MX460F512L PIM
 Compiler:      Microchip C32 (for PIC32)
 Company:       Microchip Technology, Inc.

 Software License Agreement:

 The software supplied herewith by Microchip Technology Incorporated
 (the “Company”) for its PIC® Microcontroller is intended and
 supplied to you, the Company’s customer, for use solely and
 exclusively on Microchip PIC Microcontroller products. The
 software is owned by the Company and/or its supplier, and is
 protected under applicable copyright laws. All rights are reserved.
 Any use in violation of the foregoing restrictions may subject the
 user to criminal sanctions under applicable laws, as well as to
 civil liability for the breach of the terms and conditions of this
 license.

 THIS SOFTWARE IS PROVIDED IN AN “AS IS” CONDITION. NO WARRANTIES,
 WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT NOT LIMITED
 TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
 PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. THE COMPANY SHALL NOT,
 IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL OR
 CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.

********************************************************************
 File Description:

 Change History:
  Rev   Date         Description
  1.0   11/19/2004   Initial release
  2.1   02/26/2007   Updated for simplicity and to use common
                     coding style
  2.3   09/15/2008   Broke out each hardware platform into its own
                     "HardwareProfile - xxx.h" file
********************************************************************/

#ifndef HARDWARE_PROFILE_PIC32MX795F512L_PIM_H
#define HARDWARE_PROFILE_PIC32MX795F512L_PIM_H

    /*******************************************************************/
    /******** USB stack hardware selection options *********************/
    /*******************************************************************/
    //This section is the set of definitions required by the MCHPFSUSB
    //  framework.  These definitions tell the firmware what mode it is
    //  running in, and where it can find the results to some information
    //  that the stack needs.
    //These definitions are required by every application developed with
    //  this revision of the MCHPFSUSB framework.  Please review each
    //  option carefully and determine which options are desired/required
    //  for your application.

    //#define USE_SELF_POWER_SENSE_IO
    #define tris_self_power     TRISAbits.TRISA2    // Input
    #define self_power          1

    //#define USE_USB_BUS_SENSE_IO
    #define tris_usb_bus_sense  TRISBbits.TRISB5    // Input
    #define USB_BUS_SENSE       1 

    /*******************************************************************/
    /*******************************************************************/
    /*******************************************************************/
    /******** Application specific definitions *************************/
    /*******************************************************************/
    /*******************************************************************/
    /*******************************************************************/

    /** Board definition ***********************************************/
    //These defintions will tell the main() function which board is
    //  currently selected.  This will allow the application to add
    //  the correct configuration bits as wells use the correct
    //  initialization functions for the board.  These defitions are only
    //  required in the stack provided demos.  They are not required in
    //  final application design.
    #define DEMO_BOARD PIC32MX795F512L_PIM
    #define CLOCK_FREQ 8000000

    /** LED ************************************************************/
//    #define mInitAllLEDs()      LATD &= 0xFFF0; TRISD &= 0xFFF0;
    #define mInitAllLEDs()      LATD &= 0xFFF0; TRISD &= 0xFFF0; LATE &= 0xFFF0; TRISE &= 0xFFF0;
    
    #define mLED_1              LATDbits.LATD0
    #define mLED_2              LATDbits.LATD1
    #define mLED_3              LATDbits.LATD2
    #define mLED_4              
    
    #define mGetLED_1()         mLED_1
    #define mGetLED_2()         mLED_2
    #define mGetLED_3()         mLED_3
    #define mGetLED_4()         mLED_4

    #define mLED_1_On()         mLED_1 = 1;
    #define mLED_2_On()         mLED_2 = 1;
    #define mLED_3_On()         mLED_3 = 1;
    #define mLED_4_On()         mLED_4 = 1;
    
    #define mLED_1_Off()        mLED_1 = 0;
    #define mLED_2_Off()        mLED_2 = 0;
    #define mLED_3_Off()        mLED_3 = 0;
    #define mLED_4_Off()        mLED_4 = 0;
	
	
	#define mInitBoard()		TRISB &= 0x0000; TRISD &= 0x0000; TRISE &= 0xFF00; TRISF &= 0xF000; TRISG &= 0x0000;  
	#define mLED_X5				LATEbits.LATE0
	#define mLED_O5				LATEbits.LATE1
	#define mLED_X4				LATEbits.LATE2
	#define mLED_O4				LATEbits.LATE3
	#define mLED_X1				LATEbits.LATE4
	#define mLED_O1				LATEbits.LATE5	
	#define mLED_X9				LATEbits.LATE6
	#define mLED_O9				LATEbits.LATE7
	#define mLED_X8				LATGbits.LATG0
	#define mLED_O8				LATGbits.LATG1	
	#define mLED_X7				LATFbits.LATF1
	#define mLED_O7				LATFbits.LATF0
	#define mLED_X2				LATDbits.LATD12
	#define mLED_O2				LATDbits.LATD13
	#define mLED_X3				LATDbits.LATD6
	#define mLED_O3				LATDbits.LATD7
	#define mLED_X6				LATBbits.LATB14
	#define mLED_O6				LATGbits.LATG8

	#define mLED_X1_On()		mLED_X1 = 1
	#define mLED_O1_On()		mLED_O1 = 1
	#define mLED_X2_On()		mLED_X2 = 1
	#define mLED_O2_On()		mLED_O2 = 1
	#define mLED_X3_On()		mLED_X3 = 1
	#define mLED_O3_On()		mLED_O3 = 1
	#define mLED_X4_On()		mLED_X4 = 1
	#define mLED_O4_On()		mLED_O4 = 1
	#define mLED_X5_On()		mLED_X5 = 1	
	#define mLED_O5_On()		mLED_O5 = 1
	#define mLED_X6_On()		mLED_X6 = 1
	#define mLED_O6_On()		mLED_O6 = 1
	#define mLED_X7_On()		mLED_X7 = 1
	#define mLED_O7_On()		mLED_O7 = 1
	#define mLED_X8_On()		mLED_X8 = 1
	#define mLED_O8_On()		mLED_O8 = 1
	#define mLED_X9_On()		mLED_X9 = 1
	#define mLED_O9_On()		mLED_O9 = 1

	#define mLED_X1_Off()		mLED_X1 = 0
	#define mLED_O1_Off()		mLED_O1 = 0
	#define mLED_X2_Off()		mLED_X2 = 0
	#define mLED_O2_Off()		mLED_O2 = 0
	#define mLED_X3_Off()		mLED_X3 = 0
	#define mLED_O3_Off()		mLED_O3 = 0
	#define mLED_X4_Off()		mLED_X4 = 0
	#define mLED_O4_Off()		mLED_O4 = 0
	#define mLED_X5_Off()		mLED_X5 = 0	
	#define mLED_O5_Off()		mLED_O5 = 0
	#define mLED_X6_Off()		mLED_X6 = 0
	#define mLED_O6_Off()		mLED_O6 = 0
	#define mLED_X7_Off()		mLED_X7 = 0
	#define mLED_O7_Off()		mLED_O7 = 0
	#define mLED_X8_Off()		mLED_X8 = 0
	#define mLED_O8_Off()		mLED_O8 = 0
	#define mLED_X9_Off()		mLED_X9 = 0
	#define mLED_O9_Off()		mLED_O9 = 0

    
    #define mLED_1_Toggle()     mLED_1 = !mLED_1;
    #define mLED_2_Toggle()     mLED_2 = !mLED_2;
    #define mLED_3_Toggle()     mLED_3 = !mLED_3;
    #define mLED_4_Toggle()     mLED_4 = !mLED_4;
    
    /** SWITCH *********************************************************/
	#define mInitSwitch1()		TRISDbits.TRISD6=1
    #define mInitSwitch2()      TRISDbits.TRISD7=1;
    #define mInitSwitch3()      TRISDbits.TRISD13=1;
    #define mInitAllSwitches()  mInitSwitch1();mInitSwitch2();mInitSwitch3();
    #define sw1					PORTDbits.RD6
    #define sw2                 PORTDbits.RD7
    #define sw3                 PORTDbits.RD13

    /** POT ************************************************************/
    #define mInitPOT()  {AD1PCFGbits.PCFG5 = 0;    AD1CON2bits.VCFG = 0x0;    AD1CON3bits.ADCS = 0xFF;    AD1CON1bits.SSRC = 0x0;    AD1CON3bits.SAMC = 0x10;    AD1CON1bits.FORM = 0x0;    AD1CON2bits.SMPI = 0x0;    AD1CON1bits.ADON = 1;}

    /** I/O pin definitions ********************************************/
    #define INPUT_PIN 1
    #define OUTPUT_PIN 0
#endif  //HARDWARE_PROFILE_PIC32MX795F512L_PIM_H
