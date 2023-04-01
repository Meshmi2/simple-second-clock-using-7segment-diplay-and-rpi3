//simple-second-clock-using-7segment-diplay-and-rpi3 with Flowcode
#define MX_RPI

#define MX_CAL_RPI

#define MX_CLK_SPEED 76800000

#define FCP_NULL Unconnected_Port


#define MX_CAL_RPI
#define	MX_REGISTER_MAP_BASE	0x3F000000


/*========================================================================*\
   Use :Include the type definitions
\*========================================================================*/
#include "C:\ProgramData\MatrixTSL\FlowcodeV8\CAL\internals.c"





/*========================================================================*\
   Use :panel
       :Variable declarations
       :Macro function declarations
\*========================================================================*/
#define FCV_FALSE (0)
#define FCV_TRUE (1)


/*========================================================================*\
   Use :lut
       :Variable declarations
       :Macro function declarations
\*========================================================================*/
#define FCVsz_00fb2_lut__FLOATFIXEDLIST 1
#define FCVsz_00fb2_lut__INTLIST 16
#define FCVsz_00fb2_lut__FLOATLIST 1
#define FCVsz_00fb2_lut__INTFIXEDLIST 1
#define FCD_00fb2_lut__INTLIST(ix) FCD_00fb2_lut__INTLIST_LUT[ix]
ROMARRAY_(MX_UINT8) FCD_00fb2_lut__INTLIST_LUT ROMARRAY_E =
{
// Property added elements
  63, 6, 91, 79, 102, 109, 125, 7, 127, 111, 119, 124, 57, 94, 121, 113
// Dynamically added elements
 
};


/*========================================================================*\
   Use :LED_7Seg2
       :Variable declarations
       :Macro function declarations
\*========================================================================*/
void FCD_0d512_LED_7Seg2__ClearDigit();
void FCD_0d512_LED_7Seg2__ShowDigit(MX_UINT8 FCL_DIGIT, MX_UINT8 FCL_DECIMALPOINT);

/*========================================================================*\
   Use :lut
       :Variable declarations
       :Macro function declarations
\*========================================================================*/
#define FCVsz_00fb1_lut__FLOATFIXEDLIST 1
#define FCVsz_00fb1_lut__INTLIST 16
#define FCVsz_00fb1_lut__FLOATLIST 1
#define FCVsz_00fb1_lut__INTFIXEDLIST 1
#define FCD_00fb1_lut__INTLIST(ix) FCD_00fb1_lut__INTLIST_LUT[ix]
ROMARRAY_(MX_UINT8) FCD_00fb1_lut__INTLIST_LUT ROMARRAY_E =
{
// Property added elements
  63, 6, 91, 79, 102, 109, 125, 7, 127, 111, 119, 124, 57, 94, 121, 113
// Dynamically added elements
 
};


/*========================================================================*\
   Use :LED_7Seg1
       :Variable declarations
       :Macro function declarations
\*========================================================================*/
void FCD_0d511_LED_7Seg1__ClearDigit();
void FCD_0d511_LED_7Seg1__ShowDigit(MX_UINT8 FCL_DIGIT, MX_UINT8 FCL_DECIMALPOINT);

/*========================================================================*\
   Use :Include the chip adaption layer
\*========================================================================*/
#include "C:\ProgramData\MatrixTSL\FlowcodeV8\CAL\includes.c"


/*========================================================================*\
   Use :lut
       :Macro implementations
\*========================================================================*/

/*========================================================================*\
   Use :LED_7Seg2
       :Macro implementations
\*========================================================================*/
/*=----------------------------------------------------------------------=*\
   Use :This funtion clears all the individual segments including the decimal point segment. In simulation this sets the colours to the default BGColor component variable. It's default value is 0xCCCCCC
\*=----------------------------------------------------------------------=*/
void FCD_0d512_LED_7Seg2__ClearDigit()
{

	#if (1)

		SET_PORT_PIN(G, 27, 0);

	// #else

	//Code has been optimised out by the pre-processor
	#endif

	#if 0 // Disabled code
	SET_PORT_PIN(G, 8, 1 - 0);
	SET_PORT_PIN(G, 10, 1 - 0);
	SET_PORT_PIN(G, 11, 1 - 0);
	SET_PORT_PIN(G, 12, 1 - 0);
	SET_PORT_PIN(G, 13, 1 - 0);
	SET_PORT_PIN(G, 14, 1 - 0);
	SET_PORT_PIN(G, 15, 1 - 0);
	SET_PORT_PIN(G, 16, 1 - 0);

	#endif // #if 0: Disabled code
}

/*=----------------------------------------------------------------------=*\
   Use :Creates the supplied digit on the 7 segment display. Macro takes the digit to display and a boolean representing whether to display the decimal point segment or not.
       :
       :Parameters for macro ShowDigit:
       :  Digit : Sets the 7seg display with the appropriate digit supplied
       :  DecimalPoint : Determines whether decimal point LED is active (True/False)
\*=----------------------------------------------------------------------=*/
void FCD_0d512_LED_7Seg2__ShowDigit(MX_UINT8 FCL_DIGIT, MX_UINT8 FCL_DECIMALPOINT)
{
	//Local variable definitions
	MX_UINT8 FCL_PINSTATE;


	FCL_PINSTATE = FCD_00fb2_lut__INTLIST(FCL_DIGIT);

	SET_PORT_PIN(G, 8, 0 == (FCL_PINSTATE & 1));
	FCL_PINSTATE = FCL_PINSTATE >> 1;
	SET_PORT_PIN(G, 10, 0 == (FCL_PINSTATE & 1));
	FCL_PINSTATE = FCL_PINSTATE >> 1;
	SET_PORT_PIN(G, 11, 0 == (FCL_PINSTATE & 1));
	FCL_PINSTATE = FCL_PINSTATE >> 1;
	SET_PORT_PIN(G, 12, 0 == (FCL_PINSTATE & 1));
	FCL_PINSTATE = FCL_PINSTATE >> 1;
	SET_PORT_PIN(G, 13, 0 == (FCL_PINSTATE & 1));
	FCL_PINSTATE = FCL_PINSTATE >> 1;
	SET_PORT_PIN(G, 14, 0 == (FCL_PINSTATE & 1));
	FCL_PINSTATE = FCL_PINSTATE >> 1;
	SET_PORT_PIN(G, 15, 0 == (FCL_PINSTATE & 1));
	FCL_PINSTATE = FCL_PINSTATE >> 1;

	SET_PORT_PIN(G, 16, 0 == (FCL_DECIMALPOINT & 1));

	#if (1)

		SET_PORT_PIN(G, 27, 1 - 0);

	// #else

	//Code has been optimised out by the pre-processor
	#endif

}


/*========================================================================*\
   Use :lut
       :Macro implementations
\*========================================================================*/

/*========================================================================*\
   Use :LED_7Seg1
       :Macro implementations
\*========================================================================*/
/*=----------------------------------------------------------------------=*\
   Use :This funtion clears all the individual segments including the decimal point segment. In simulation this sets the colours to the default BGColor component variable. It's default value is 0xCCCCCC
\*=----------------------------------------------------------------------=*/
void FCD_0d511_LED_7Seg1__ClearDigit()
{

	#if (1)

		SET_PORT_PIN(G, 27, 0);

	// #else

	//Code has been optimised out by the pre-processor
	#endif

	#if 0 // Disabled code
	SET_PORT_PIN(G, 17, 1 - 0);
	SET_PORT_PIN(G, 18, 1 - 0);
	SET_PORT_PIN(G, 19, 1 - 0);
	SET_PORT_PIN(G, 20, 1 - 0);
	SET_PORT_PIN(G, 21, 1 - 0);
	SET_PORT_PIN(G, 22, 1 - 0);
	SET_PORT_PIN(G, 23, 1 - 0);
	SET_PORT_PIN(G, 24, 1 - 0);

	#endif // #if 0: Disabled code
}

/*=----------------------------------------------------------------------=*\
   Use :Creates the supplied digit on the 7 segment display. Macro takes the digit to display and a boolean representing whether to display the decimal point segment or not.
       :
       :Parameters for macro ShowDigit:
       :  Digit : Sets the 7seg display with the appropriate digit supplied
       :  DecimalPoint : Determines whether decimal point LED is active (True/False)
\*=----------------------------------------------------------------------=*/
void FCD_0d511_LED_7Seg1__ShowDigit(MX_UINT8 FCL_DIGIT, MX_UINT8 FCL_DECIMALPOINT)
{
	//Local variable definitions
	MX_UINT8 FCL_PINSTATE;


	FCL_PINSTATE = FCD_00fb1_lut__INTLIST(FCL_DIGIT);

	SET_PORT_PIN(G, 17, 0 == (FCL_PINSTATE & 1));
	FCL_PINSTATE = FCL_PINSTATE >> 1;
	SET_PORT_PIN(G, 18, 0 == (FCL_PINSTATE & 1));
	FCL_PINSTATE = FCL_PINSTATE >> 1;
	SET_PORT_PIN(G, 19, 0 == (FCL_PINSTATE & 1));
	FCL_PINSTATE = FCL_PINSTATE >> 1;
	SET_PORT_PIN(G, 20, 0 == (FCL_PINSTATE & 1));
	FCL_PINSTATE = FCL_PINSTATE >> 1;
	SET_PORT_PIN(G, 21, 0 == (FCL_PINSTATE & 1));
	FCL_PINSTATE = FCL_PINSTATE >> 1;
	SET_PORT_PIN(G, 22, 0 == (FCL_PINSTATE & 1));
	FCL_PINSTATE = FCL_PINSTATE >> 1;
	SET_PORT_PIN(G, 23, 0 == (FCL_PINSTATE & 1));
	FCL_PINSTATE = FCL_PINSTATE >> 1;

	SET_PORT_PIN(G, 24, 0 == (FCL_DECIMALPOINT & 1));

	#if (1)

		SET_PORT_PIN(G, 27, 1 - 0);

	// #else

	//Code has been optimised out by the pre-processor
	#endif

}


/*========================================================================*\
   Use :panel
       :Macro implementations
\*========================================================================*/


/*========================================================================*\
   Use :Main
\*========================================================================*/
int main()
{
	if ((gpio = FC_CAL_GetRegisterMap(MX_REGISTER_MAP_GPIO)) == MAP_FAILED) return -1 ;
	FC_CAL_PullupsOff();
#ifdef USE_FLOWCODE_ICD2
	// Set pullups on ICD Clock and Data GPIO pins
	MX_GPIO_PULL = 2;
	FCI_DELAYBYTE_US(100);
	MX_GPIO_PULLCLK0 = (1 << MX_ICD_DATA_GPIO) | (1 << MX_ICD_CLK_GPIO);
	FCI_DELAYBYTE_US(100);
	MX_GPIO_PULLCLK0 = 0;
	// ICD Startup
	dbg_mode = 0x08;
	ICD_PUSH(0);
	FC_MARKER(1);
	FC_MARKER(1);
	ICD_POP();
#endif


	// Name: Loop, Type: Loop: While 1
	while (1)
	{

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg2::ShowDigit(0, 0)
		FCD_0d512_LED_7Seg2__ShowDigit(0, 0);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(0, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(0, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(1, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(1, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(2, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(2, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(3, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(3, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(4, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(4, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(5, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(5, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(6, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(6, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(7, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(7, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(8, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(8, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(9, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(9, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(0, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(0, 0);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg2::ShowDigit(1, 0)
		FCD_0d512_LED_7Seg2__ShowDigit(1, 0);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(0, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(0, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(1, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(1, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(2, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(2, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(3, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(3, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(4, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(4, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(5, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(5, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(6, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(6, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(7, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(7, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(8, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(8, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(9, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(9, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(0, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(0, 0);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg2::ShowDigit(2, 0)
		FCD_0d512_LED_7Seg2__ShowDigit(2, 0);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(0, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(0, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(1, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(1, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(2, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(2, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(3, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(3, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(4, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(4, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(5, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(5, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(6, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(6, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(7, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(7, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(8, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(8, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(9, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(9, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(0, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(0, 0);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg2::ShowDigit(4, 0)
		FCD_0d512_LED_7Seg2__ShowDigit(4, 0);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(0, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(0, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(1, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(1, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(2, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(2, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(3, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(3, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(4, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(4, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(5, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(5, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(6, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(6, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(7, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(7, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(8, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(8, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(9, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(9, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(0, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(0, 0);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg2::ShowDigit(3, 0)
		FCD_0d512_LED_7Seg2__ShowDigit(3, 0);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(0, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(0, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(1, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(1, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(2, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(2, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(3, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(3, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(4, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(4, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(5, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(5, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(6, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(6, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(7, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(7, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(8, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(8, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(9, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(9, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(0, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(0, 0);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg2::ShowDigit(5, 0)
		FCD_0d512_LED_7Seg2__ShowDigit(5, 0);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(0, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(0, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(1, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(1, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(2, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(2, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(3, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(3, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(4, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(4, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(5, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(5, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(6, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(6, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(7, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(7, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(8, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(8, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(9, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(9, 0);

		// Name: Delay, Type: Delay: 1 s
		FCI_DELAYBYTE_S(1);

		// Name: Call Component Macro, Type: Call Component Macro: LED_7Seg1::ShowDigit(0, 0)
		FCD_0d511_LED_7Seg1__ShowDigit(0, 0);


	}


	munmap((void *)gpio, getpagesize());
	return 0;
}
	

/*========================================================================*\
   Use :Interrupt
\*========================================================================*/




