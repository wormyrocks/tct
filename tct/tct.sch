EESchema Schematic File Version 2
LIBS:power
LIBS:device
LIBS:transistors
LIBS:conn
LIBS:linear
LIBS:regul
LIBS:74xx
LIBS:cmos4000
LIBS:adc-dac
LIBS:memory
LIBS:xilinx
LIBS:microcontrollers
LIBS:dsp
LIBS:microchip
LIBS:analog_switches
LIBS:motorola
LIBS:texas
LIBS:intel
LIBS:audio
LIBS:interface
LIBS:digital-audio
LIBS:philips
LIBS:display
LIBS:cypress
LIBS:siliconi
LIBS:opto
LIBS:atmel
LIBS:contrib
LIBS:valves
LIBS:DIL40_IC
LIBS:LED_MATRIX_RG_8x8
LIBS:tct-cache
EELAYER 25 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L DIL40_IC U1
U 1 1 58A4CF87
P 4800 3150
F 0 "U1" H 4800 3050 50  0000 C CNN
F 1 "DIL40_IC" H 4800 3250 50  0000 C CNN
F 2 "dip-sip:DIP-40" H 4800 3150 50  0001 C CNN
F 3 "DOCUMENTATION" H 4800 3150 50  0001 C CNN
	1    4800 3150
	1    0    0    -1  
$EndComp
$Comp
L ATTINY85-P IC1
U 1 1 58A4CFCD
P 4700 5250
F 0 "IC1" H 3550 5650 50  0000 C CNN
F 1 "ATTINY85-P" H 5700 4850 50  0000 C CNN
F 2 "dip-sip:DIP-8" H 5700 5250 50  0000 C CIN
F 3 "" H 4700 5250 50  0000 C CNN
	1    4700 5250
	1    0    0    -1  
$EndComp
$Comp
L LED_MATRIX_RGA_8x8 LEDMATX1
U 1 1 58A54426
P 8950 3350
F 0 "LEDMATX1" V 9700 3350 60  0000 C CNN
F 1 "LED_MATRIX_RGA_8x8" V 9600 3350 60  0000 C CNN
F 2 "LED_MATRIX_RG_8x8:LED_MATRIX_RG_8x8" H 8950 3350 60  0001 C CNN
F 3 "" H 8950 3350 60  0001 C CNN
	1    8950 3350
	1    0    0    -1  
$EndComp
$Comp
L R_PACK8 RP2
U 1 1 58A5484C
P 7300 3350
F 0 "RP2" H 7300 3800 50  0000 C CNN
F 1 "R_PACK8" H 7300 2900 50  0000 C CNN
F 2 "Resistors_SMD:R_Array_Convex_8x0602" H 7300 3350 50  0001 C CNN
F 3 "" H 7300 3350 50  0000 C CNN
	1    7300 3350
	1    0    0    -1  
$EndComp
$Comp
L R_PACK8 RP1
U 1 1 58A5487D
P 10200 1800
F 0 "RP1" H 10200 2250 50  0000 C CNN
F 1 "R_PACK8" H 10200 1350 50  0000 C CNN
F 2 "Resistors_SMD:R_Array_Convex_8x0602" H 10200 1800 50  0001 C CNN
F 3 "" H 10200 1800 50  0000 C CNN
	1    10200 1800
	1    0    0    -1  
$EndComp
$Comp
L VCC #PWR01
U 1 1 58A54B08
P 3800 2000
F 0 "#PWR01" H 3800 1850 50  0001 C CNN
F 1 "VCC" H 3800 2150 50  0000 C CNN
F 2 "" H 3800 2000 50  0000 C CNN
F 3 "" H 3800 2000 50  0000 C CNN
	1    3800 2000
	1    0    0    -1  
$EndComp
$Comp
L VCC #PWR02
U 1 1 58A54BD4
P 5800 2000
F 0 "#PWR02" H 5800 1850 50  0001 C CNN
F 1 "VCC" H 5800 2150 50  0000 C CNN
F 2 "" H 5800 2000 50  0000 C CNN
F 3 "" H 5800 2000 50  0000 C CNN
	1    5800 2000
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR03
U 1 1 58A54DD4
P 3850 4350
F 0 "#PWR03" H 3850 4100 50  0001 C CNN
F 1 "GND" H 3850 4200 50  0000 C CNN
F 2 "" H 3850 4350 50  0000 C CNN
F 3 "" H 3850 4350 50  0000 C CNN
	1    3850 4350
	1    0    0    -1  
$EndComp
Text Label 3450 2900 0    60   ~ 0
ph1
Text Label 3450 3000 0    60   ~ 0
ph2
Text Label 3500 2400 0    60   ~ 0
rst
Text Label 3450 3900 0    60   ~ 0
r1
Text Label 3450 4000 0    60   ~ 0
r2
Text Label 3450 4100 0    60   ~ 0
r3
$Comp
L GND #PWR04
U 1 1 58A556D4
P 6050 2350
F 0 "#PWR04" H 6050 2100 50  0001 C CNN
F 1 "GND" H 6050 2200 50  0000 C CNN
F 2 "" H 6050 2350 50  0000 C CNN
F 3 "" H 6050 2350 50  0000 C CNN
	1    6050 2350
	1    0    0    -1  
$EndComp
Wire Wire Line
	9450 2400 9450 2150
Wire Wire Line
	9450 2150 10000 2150
Wire Wire Line
	10000 2050 9300 2050
Wire Wire Line
	9300 2050 9300 2400
Wire Wire Line
	9150 2400 9150 1950
Wire Wire Line
	9150 1950 10000 1950
Wire Wire Line
	10000 1850 9000 1850
Wire Wire Line
	9000 1850 9000 2400
Wire Wire Line
	8850 2400 8850 1750
Wire Wire Line
	8850 1750 10000 1750
Wire Wire Line
	10000 1650 8700 1650
Wire Wire Line
	8700 1650 8700 2400
Wire Wire Line
	8550 2400 8550 1550
Wire Wire Line
	8550 1550 10000 1550
Wire Wire Line
	10000 1450 8400 1450
Wire Wire Line
	8400 1450 8400 2400
Wire Wire Line
	4050 2200 3800 2200
Wire Wire Line
	3800 2000 3800 3800
Wire Wire Line
	3800 3200 4050 3200
Connection ~ 3800 2200
Wire Wire Line
	3800 3400 4050 3400
Connection ~ 3800 3200
Wire Wire Line
	3800 3600 4050 3600
Connection ~ 3800 3400
Wire Wire Line
	5800 2500 5550 2500
Wire Wire Line
	5550 2300 5800 2300
Connection ~ 5800 2300
Wire Wire Line
	5800 2000 5800 2800
Wire Wire Line
	5550 2400 5750 2400
Connection ~ 5750 2400
Wire Wire Line
	5550 2600 5750 2600
Connection ~ 5750 2600
Wire Wire Line
	3850 3100 4050 3100
Wire Wire Line
	3850 2300 3850 4350
Wire Wire Line
	4050 3300 3850 3300
Connection ~ 3850 3300
Wire Wire Line
	4050 3500 3850 3500
Connection ~ 3850 3500
Wire Wire Line
	4050 3700 3850 3700
Connection ~ 3850 3700
Wire Wire Line
	4050 2900 3450 2900
Wire Wire Line
	4050 3000 3450 3000
Wire Wire Line
	4050 2400 3500 2400
Wire Wire Line
	4050 2500 3850 2500
Connection ~ 3850 3100
Wire Wire Line
	4050 2600 3800 2600
Connection ~ 3800 2600
Wire Wire Line
	4050 2700 3850 2700
Connection ~ 3850 2700
Wire Wire Line
	4050 2800 3800 2800
Connection ~ 3800 2800
Wire Wire Line
	3800 3800 4050 3800
Connection ~ 3800 3600
Wire Wire Line
	5800 2800 5550 2800
Connection ~ 5800 2500
Wire Wire Line
	5750 2700 5550 2700
Connection ~ 5750 2700
Wire Wire Line
	4050 3900 3450 3900
Wire Wire Line
	4050 4000 3450 4000
Wire Wire Line
	4050 4100 3450 4100
Wire Wire Line
	5750 2200 5750 2700
Connection ~ 5750 2200
Wire Wire Line
	6050 2200 6050 2350
Connection ~ 6050 2200
Wire Wire Line
	5550 2200 6050 2200
Wire Wire Line
	5550 4100 6000 4100
Wire Wire Line
	5550 4000 6000 4000
Wire Wire Line
	5550 3900 6000 3900
Wire Wire Line
	5550 3800 6000 3800
Wire Wire Line
	5550 3700 6000 3700
Text Label 6000 4000 0    60   ~ 0
r5
Text Label 6000 4100 0    60   ~ 0
r4
Text Label 6000 3900 0    60   ~ 0
r6
Text Label 6000 3800 0    60   ~ 0
r7
Text Label 6000 3700 0    60   ~ 0
r8
Wire Wire Line
	5550 3600 6000 3600
Wire Wire Line
	5550 3500 6000 3500
Wire Wire Line
	5550 3400 6000 3400
Wire Wire Line
	5550 3300 6000 3300
Wire Wire Line
	5550 3200 6000 3200
Wire Wire Line
	5550 3100 6000 3100
Wire Wire Line
	5550 3000 6000 3000
Wire Wire Line
	5550 2900 6000 2900
Text Label 6000 3600 0    60   ~ 0
c1
Text Label 6000 3500 0    60   ~ 0
c2
Text Label 6000 3400 0    60   ~ 0
c3
Text Label 6000 3300 0    60   ~ 0
c4
Text Label 6000 3200 0    60   ~ 0
c5
Text Label 6000 3100 0    60   ~ 0
c6
Text Label 6000 3000 0    60   ~ 0
c7
Text Label 6000 2900 0    60   ~ 0
c8
Wire Wire Line
	10400 1450 10750 1450
Wire Wire Line
	10400 1550 10750 1550
Wire Wire Line
	10400 1650 10750 1650
Wire Wire Line
	10400 1750 10750 1750
Wire Wire Line
	10400 1850 10750 1850
Wire Wire Line
	10400 1950 10750 1950
Wire Wire Line
	10400 2050 10750 2050
Wire Wire Line
	10400 2150 10750 2150
Wire Wire Line
	6750 3000 7100 3000
Wire Wire Line
	6750 3100 7100 3100
Wire Wire Line
	6750 3200 7100 3200
Wire Wire Line
	6750 3300 7100 3300
Wire Wire Line
	6750 3400 7100 3400
Wire Wire Line
	6750 3500 7100 3500
Wire Wire Line
	6750 3600 7100 3600
Wire Wire Line
	6750 3700 7100 3700
Wire Wire Line
	8400 4250 8400 4700
Wire Wire Line
	8550 4250 8550 4700
Wire Wire Line
	8700 4250 8700 4700
Wire Wire Line
	8850 4250 8850 4700
Wire Wire Line
	9000 4250 9000 4700
Wire Wire Line
	9150 4250 9150 4700
Wire Wire Line
	9300 4250 9300 4700
Wire Wire Line
	9450 4250 9450 4700
Text Label 8400 4700 1    60   ~ 0
r1
Text Label 8550 4700 1    60   ~ 0
r2
Text Label 8700 4700 1    60   ~ 0
r3
Text Label 8850 4700 1    60   ~ 0
r4
Text Label 9000 4700 1    60   ~ 0
r5
Text Label 9150 4700 1    60   ~ 0
r6
Text Label 9300 4700 1    60   ~ 0
r7
Text Label 9450 4700 1    60   ~ 0
r8
$Comp
L VCC #PWR05
U 1 1 58A568C8
P 6250 5000
F 0 "#PWR05" H 6250 4850 50  0001 C CNN
F 1 "VCC" H 6250 5150 50  0000 C CNN
F 2 "" H 6250 5000 50  0000 C CNN
F 3 "" H 6250 5000 50  0000 C CNN
	1    6250 5000
	1    0    0    -1  
$EndComp
Wire Wire Line
	6250 5000 6050 5000
$Comp
L GND #PWR06
U 1 1 58A5695F
P 6250 5500
F 0 "#PWR06" H 6250 5250 50  0001 C CNN
F 1 "GND" H 6250 5350 50  0000 C CNN
F 2 "" H 6250 5500 50  0000 C CNN
F 3 "" H 6250 5500 50  0000 C CNN
	1    6250 5500
	1    0    0    -1  
$EndComp
Wire Wire Line
	6250 5500 6050 5500
Wire Wire Line
	3350 5300 2900 5300
Wire Wire Line
	3350 5400 2900 5400
Wire Wire Line
	3350 5000 2900 5000
Text Label 2900 5300 0    60   ~ 0
ph1
Text Label 2900 5400 0    60   ~ 0
ph2
Text Label 2900 5000 0    60   ~ 0
rst
$Comp
L CONN_01X02 P1
U 1 1 58A56ECD
P 3200 1350
F 0 "P1" H 3200 1500 50  0000 C CNN
F 1 "CONN_01X02" V 3300 1350 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x02" H 3200 1350 50  0001 C CNN
F 3 "" H 3200 1350 50  0000 C CNN
	1    3200 1350
	1    0    0    -1  
$EndComp
$Comp
L VCC #PWR07
U 1 1 58A56F2C
P 3000 1300
F 0 "#PWR07" H 3000 1150 50  0001 C CNN
F 1 "VCC" H 3000 1450 50  0000 C CNN
F 2 "" H 3000 1300 50  0000 C CNN
F 3 "" H 3000 1300 50  0000 C CNN
	1    3000 1300
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR08
U 1 1 58A56F49
P 3000 1400
F 0 "#PWR08" H 3000 1150 50  0001 C CNN
F 1 "GND" H 3000 1250 50  0000 C CNN
F 2 "" H 3000 1400 50  0000 C CNN
F 3 "" H 3000 1400 50  0000 C CNN
	1    3000 1400
	1    0    0    -1  
$EndComp
Wire Wire Line
	4050 2300 3850 2300
Connection ~ 3850 2500
Text Label 10750 1450 0    60   ~ 0
c1
Text Label 10750 1550 0    60   ~ 0
c2
Text Label 10750 1650 0    60   ~ 0
c3
Text Label 10750 1750 0    60   ~ 0
c4
Text Label 10750 1850 0    60   ~ 0
c5
Text Label 10750 1950 0    60   ~ 0
c6
Text Label 10750 2050 0    60   ~ 0
c7
Text Label 10750 2150 0    60   ~ 0
c8
Text Label 6950 3700 0    60   ~ 0
c8
Text Label 6950 3600 0    60   ~ 0
c7
Text Label 6950 3500 0    60   ~ 0
c6
Text Label 6950 3400 0    60   ~ 0
c5
Text Label 6950 3300 0    60   ~ 0
c4
Text Label 6950 3200 0    60   ~ 0
c3
Text Label 6950 3100 0    60   ~ 0
c2
Text Label 6950 3000 0    60   ~ 0
c1
Wire Wire Line
	8000 2800 7500 2800
Wire Wire Line
	7500 2800 7500 3000
Wire Wire Line
	7500 3100 7550 3100
Wire Wire Line
	7550 3100 7550 2950
Wire Wire Line
	7550 2950 8000 2950
Wire Wire Line
	8000 3100 7600 3100
Wire Wire Line
	7600 3100 7600 3200
Wire Wire Line
	7600 3200 7500 3200
Wire Wire Line
	7500 3300 7650 3300
Wire Wire Line
	7650 3300 7650 3250
Wire Wire Line
	7650 3250 8000 3250
Wire Wire Line
	8000 3400 7500 3400
Wire Wire Line
	7500 3500 8000 3500
Wire Wire Line
	8000 3500 8000 3550
Wire Wire Line
	8000 3700 8000 3600
Wire Wire Line
	8000 3600 7500 3600
Wire Wire Line
	7500 3700 7950 3700
Wire Wire Line
	7950 3700 7950 3850
Wire Wire Line
	7950 3850 8000 3850
$EndSCHEMATC
