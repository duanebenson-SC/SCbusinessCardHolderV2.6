/******************************************************************************/
/* User Level #define Macros                                                  */
/******************************************************************************/
/* TODO Application specific user parameters used in user.c may go here */

/******************************************************************************/
/* User Function Prototypes                                                   */
/******************************************************************************/

/* TODO User level functions prototypes (i.e. InitApp) go here */

// System functions
void InitApp(void);         /* I/O and Peripheral Initialization */
void delayLong(unsigned long x);

// LED flashing fucntions
void respondToAccel();
void flashAllInward(int x);
void flashAllOutward(int x);
void bubbleGum(int x);
void allOn(int x);
void allOff();
void allRed(int x);
void allBlue(int x);
void allLeft(int x);
void allRight(int x);
void flashLeft(int x);
void flashRight(int x);

void bubbleLevel();

// I2C functions
int write_I2C_byte(char byte_out);
char read_I2C_byte(char ackornot);

// MMA8452Q functions
void initMMA8452(char fsr, char dataRate);
void MMA8452Standby();
void MMA8452Active();
void readRegisters(char regAddress, int i, char * dest);
char readRegister(char regAddress);
void writeRegister(char regAddress, char dataCommand);
void getAccel();