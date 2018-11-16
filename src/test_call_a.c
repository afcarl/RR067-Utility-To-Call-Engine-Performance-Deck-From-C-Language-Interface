


#include <stdlib.h>
#include <stdio.h>
#include <math.h>




extern void __stdcall engine_deck (	float GPLA,			//! input, Power Lever Angle (deg)
									float GMACH,		//! input, Flight Mach No.
									float GALT,			//! input, Altitude, ft (geopotential).
									float GPAM,			//! input, Ambient pressure, psia.
									float GTAM,			//! input, Ambient temperature, °R.
									float GHPX,			//! input, Horsepower Extraction
									float GWBLCD,		//! input, Compressor Discharge Bleed, lbm/sec
									float GAJ,			//! input, Physical Nozzle Area (ft2)
									float XIBNGC,		//! input, Assume that the ECS bleed flow is a constant <input> lbm/sec corrected.
									float *TTBLI,		//! output, TTBLI,	Interstage Bleed Total Temperature (degF)
									float *TTB9,			//! output, TTBLC,	HPC Discharge Bleed Temperature (degF)
									float *PTBLI,		//! output, PTBLI,	Interstage Bleed Total Pressure (psia)
									float *PTB9,			//! output, PTBLC,	HPC Discharge Bleed Pressure (psia)
									float *T7,			//! output, TT9,		Nozzle Exit Total Temperature (degF)
									float *TS9,			//! output, TS9,		Nozzle Exit Static Temperature (degF)
									float *P7,			//! output, PT9,		Nozzle Exit Total Pressure (psia)
									float *PS8,			//! output, PS9,		Nozzle Exit Static Pressure (psia)
									float *RHO9,			//! output, RHO9,		Gas flow Density at Station 9 (lbm/ft^3)
									float *XM9,			//! output, XM9,		Nozzle Discharge Mach Number (n/a)
									float *V9,			//! output, V9,		Nozzle Discharge Velocity (ft/s)
									float *T125,			//! output, TT2.5C,	Fan Exit Duct Side Temperature (degF)
									float *P125,			//! output, PT2.5C,	Fan Exit Duct Side Total Pressure (psia)
									float *T16,			//! output, TT6C,		Duct Side Mixing Plane Temperature (degF)
									float *ZPAMB,		//! output, Pamb,		Ambient Pressure (psia)
									float *ZTAMBR );		//! output, Tamb,		Ambient Temperature (degR)

//		program test_call

int main ()
{

		float GPLA;			//! input, Power Lever Angle (deg)
		float GMACH;		//! input, Flight Mach No.
		float GALT;			//! input, Altitude, ft (geopotential).
		float GPAM;			//! input, Ambient pressure, psia.
		float GTAM;			//! input, Ambient temperature, °R.
		float GHPX;			//! input, Horsepower Extraction
		float GWBLCD;		//! input, Compressor Discharge Bleed, lbm/sec
		float GAJ;			//! input, Physical Nozzle Area (ft2)
		float XIBNGC;		//! input, Assume that the ECS bleed flow is a constant <input> lbm/sec corrected.
		float TTBLI;		//! output, TTBLI,	Interstage Bleed Total Temperature (degF)
		float TTB9;			//! output, TTBLC,	HPC Discharge Bleed Temperature (degF)
		float PTBLI;		//! output, PTBLI,	Interstage Bleed Total Pressure (psia)
		float PTB9;			//! output, PTBLC,	HPC Discharge Bleed Pressure (psia)
		float T7;			//! output, TT9,		Nozzle Exit Total Temperature (degF)
		float TS9;			//! output, TS9,		Nozzle Exit Static Temperature (degF)
		float P7;			//! output, PT9,		Nozzle Exit Total Pressure (psia)
		float PS8;			//! output, PS9,		Nozzle Exit Static Pressure (psia)
		float RHO9;			//! output, RHO9,		Gas flow Density at Station 9 (lbm/ft^3)
		float XM9;			//! output, XM9,		Nozzle Discharge Mach Number (n/a)
		float V9;			//! output, V9,		Nozzle Discharge Velocity (ft/s)
		float T125;			//! output, TT2.5C,	Fan Exit Duct Side Temperature (degF)
		float P125;			//! output, PT2.5C,	Fan Exit Duct Side Total Pressure (psia)
		float T16;			//! output, TT6C,		Duct Side Mixing Plane Temperature (degF)
		float ZPAMB;		//! output, Pamb,		Ambient Pressure (psia)
		float ZTAMBR;		//! output, Tamb,		Ambient Temperature (degR)

//		GPLA		= 20.0		! input, Power Lever Angle (deg)
//		GMACH		= 0.0		! input, Flight Mach No.
//		GALT		= 0.0		! input, Altitude, ft (geopotential).
//		GPAM		= 14.70		! input, Ambient pressure, psia.
//		GTAM		= 580.0		! input, Ambient temperature, °R.
//		GHPX		= 75.0		! input, Horsepower Extraction
//		GWBLCD		= 0.0		! input, Compressor Discharge Bleed, lbm/sec
//		GAJ			= 2.9		! input, Physical Nozzle Area (ft2)
//		XIBNGC		= 8.0		! input, Assume that the ECS bleed flow is a constant <input> lbm/sec corrected.

		GPLA		= 20.0;		//! input, Power Lever Angle (deg)
		GMACH		= 0.0;		//! input, Flight Mach No.
		GALT		= 0.0;		//! input, Altitude, ft (geopotential).
		GPAM		= 14.70;	//! input, Ambient pressure, psia.
		GTAM		= 580.0;	//! input, Ambient temperature, °R.
		GHPX		= 75.0;		//! input, Horsepower Extraction
		GWBLCD		= 0.0;		//! input, Compressor Discharge Bleed, lbm/sec
		GAJ			= 2.9;		//! input, Physical Nozzle Area (ft2)
		XIBNGC		= 8.0;		//! input, Assume that the ECS bleed flow is a constant <input> lbm/sec corrected.



//		call engine_deck	(	GPLA,		&	! input, Power Lever Angle (deg)
//		&						GMACH,		&	! input, Flight Mach No.
//		&						GALT,		&	! input, Altitude, ft (geopotential).
//		&						GPAM,		&	! input, Ambient pressure, psia.
//		&						GTAM,		&	! input, Ambient temperature, °R.
//		&						GHPX,		&	! input, Horsepower Extraction
//		&						GWBLCD,		&	! input, Compressor Discharge Bleed, lbm/sec
//		&						GAJ,		&	! input, Physical Nozzle Area (ft2)
//		&						XIBNGC,		&	! input, Assume that the ECS bleed flow is a constant <input> lbm/sec corrected.
//		&						TTBLI,		&	! output, TTBLI,	Interstage Bleed Total Temperature (degF)
//		&						TTB9,		&	! output, TTBLC,	HPC Discharge Bleed Temperature (degF)
//		&						PTBLI,		&	! output, PTBLI,	Interstage Bleed Total Pressure (psia)
//		&						PTB9,		&	! output, PTBLC,	HPC Discharge Bleed Pressure (psia)
//		&						T7,			&	! output, TT9,		Nozzle Exit Total Temperature (degF)
//		&						TS9,		&	! output, TS9,		Nozzle Exit Static Temperature (degF)
//		&						P7,			&	! output, PT9,		Nozzle Exit Total Pressure (psia)
//		&						PS8,		&	! output, PS9,		Nozzle Exit Static Pressure (psia)
//		&						RHO9,		&	! output, RHO9,		Gas flow Density at Station 9 (lbm/ft^3)
//		&						XM9,		&	! output, XM9,		Nozzle Discharge Mach Number (n/a)
//		&						V9,			&	! output, V9,		Nozzle Discharge Velocity (ft/s)
//		&						T125,		&	! output, TT2.5C,	Fan Exit Duct Side Temperature (degF)
//		&						P125,		&	! output, PT2.5C,	Fan Exit Duct Side Total Pressure (psia)
//		&						T16,		&	! output, TT6C,		Duct Side Mixing Plane Temperature (degF)
//		&						ZPAMB,		&	! output, Pamb,		Ambient Pressure (psia)
//		&						ZTAMBR)			! output, Tamb,		Ambient Temperature (degR)


		engine_deck (	GPLA,
						GMACH,
						GALT,
						GPAM,
						GTAM,
						GHPX,
						GWBLCD,
						GAJ,
						XIBNGC,
						&TTBLI,
						&TTB9,
						&PTBLI,
						&PTB9,
						&T7,
						&TS9,
						&P7,
						&PS8,
						&RHO9,
						&XM9,
						&V9,
						&T125,
						&P125,
						&T16,
						&ZPAMB,
						&ZTAMBR );


//		write(*,*) 'TTBLI (degF)     =',TTBLI	! output, TTBLI,	Interstage Bleed Total Temperature (degF)
//		write(*,*) 'TTB9  (degF)     =',TTB9	! output, TTBLC,	HPC Discharge Bleed Temperature (degF)
//		write(*,*) 'PTBLI (psia)     =',PTBLI	! output, PTBLI,	Interstage Bleed Total Pressure (psia)
//		write(*,*) 'PTB9  (psia)     =',PTB9	! output, PTBLC,	HPC Discharge Bleed Pressure (psia)
//		write(*,*) 'T7    (degF)     =',T7		! output, TT9,		Nozzle Exit Total Temperature (degF)
//		write(*,*) 'TS9   (degF)     =',TS9		! output, TS9,		Nozzle Exit Static Temperature (degF)
//		write(*,*) 'P7    (psia)     =',P7		! output, PT9,		Nozzle Exit Total Pressure (psia)
//		write(*,*) 'PS8   (psia)     =',PS8		! output, PS9,		Nozzle Exit Static Pressure (psia)
//		write(*,*) 'RHO9  (lbm/ft^3) =',RHO9	! output, RHO9,		Gas flow Density at Station 9 (lbm/ft^3)
//		write(*,*) 'XM9   (n/a)      =',XM9		! output, XM9,		Nozzle Discharge Mach Number (n/a)
//		write(*,*) 'V9    (ft/s)     =',V9		! output, V9,		Nozzle Discharge Velocity (ft/s)
//		write(*,*) 'T125  (degF)     =',T125	! output, TT2.5C,	Fan Exit Duct Side Temperature (degF)
//		write(*,*) 'P125  (psia)     =',P125	! output, PT2.5C,	Fan Exit Duct Side Total Pressure (psia)
//		write(*,*) 'T16   (degF)     =',T16		! output, TT6C,		Duct Side Mixing Plane Temperature (degF)
//		write(*,*) 'PAMB  (psia)     =',ZPAMB	! output, Pamb,		Ambient Pressure (psia)
//		write(*,*) 'TAMBR (degR)     =',ZTAMBR	! output, Tamb,		Ambient Temperature (degR)


    fprintf (stderr, "TTBLI (degF)     = %g\n", TTBLI);
    fprintf (stderr, "TTB9  (degF)     = %g\n", TTB9);
    fprintf (stderr, "PTBLI (psia)     = %g\n", PTBLI);
    fprintf (stderr, "PTB9  (psia)     = %g\n", PTB9);
    fprintf (stderr, "T7    (degF)     = %g\n", T7);
    fprintf (stderr, "TS9   (degF)     = %g\n", TS9);
    fprintf (stderr, "P7    (psia)     = %g\n", P7);
    fprintf (stderr, "PS8   (psia)     = %g\n", PS8);
    fprintf (stderr, "RHO9  (lbm/ft^3) = %g\n", RHO9);
    fprintf (stderr, "XM9   (n/a)      = %g\n", XM9);
    fprintf (stderr, "V9    (ft/s)     = %g\n", V9);
    fprintf (stderr, "T125  (degF)     = %g\n", T125);
    fprintf (stderr, "P125  (psia)     = %g\n", P125);
    fprintf (stderr, "T16   (degF)     = %g\n", T16);
    fprintf (stderr, "PAMB  (psia)     = %g\n", ZPAMB);
    fprintf (stderr, "TAMBR (degR)     = %g\n", ZTAMBR);



//		pause

//		stop

//		end program test_call

}

