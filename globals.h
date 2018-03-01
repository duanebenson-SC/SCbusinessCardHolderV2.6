#define HARDWARE            "SC1016-bcardhldr"
#define HARDWARE_desc       "Business card holder and bubble level"
#define VERSION             "2.1"
#define URL                 "http://www.screamingcircuits.com"


/******************************************************************************/
/*Files to Include                                                            */
/******************************************************************************/


/******************************************************************************/
/*Personality settings                                                        */
/******************************************************************************/
#define __PIC1846K22
//#define __PIC1845K22
//#define __PIC1844K22
//#define __PIC1843K22

#define MMA8452_ADDRESS 0x1D    // Default address for MMA8452 accelerometer

#define LED0 LATEbits.LE0		// The red LED immediately left of center
#define LED1 LATEbits.LE1		// The center green LED
#define LED2 LATEbits.LE2		// The red LED immediately right of center

/******************************************************************************/
/*Global variables                                                            */
/******************************************************************************/
	// These would be better if local as pointers to structs, but that'll come later
    //int stateValue = 0;             // Set in ISR to be used in state machine in main())
    int Usr1, Usr2;                // Usr1 holds the value of the Usr1 switch the most recent time it was checked. Usr2, the same for switch Usr2
    char Int1, Int2;                // Flags indicating which switch was pressed to generate an interrupt-on-change In1 = Usr1, Int2 = Usr2
    unsigned char MMAdata, ACTdataT, ACTdataP;
    char Xmsb, Xlsb, Ymsb, Ylsb, Zmsb, Zlsb;	// Holds the MSB and LSB values returned from X, Y, and Z accelerometer registers
    char Xsign, Ysign, Zsign;       // Indicates whether the X, Y, znd Z values are positive or negative (1 = negative, 0 = positive)
    int Xval, Yval, Zval;           // The integer values from the accelerometer after the MSB and LSB have been combined

